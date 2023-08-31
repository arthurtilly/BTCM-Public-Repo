
/**
 * This file contains the initialization and behavior for red coins.
 * Behavior controls audio and the orange number spawned, as well as interacting with
 * the course's red coin star.
 */

/**
 * Red coin's hitbox details.
 */
static struct ObjectHitbox sRedCoinHitbox = {
    /* interactType:      */ INTERACT_COIN,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 2,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 100,
    /* height:            */ 64,
    /* hurtboxRadius:     */ 0,
    /* hurtboxHeight:     */ 0,
};

/**
 * Red coin initialization function. Sets the coin's hitbox and parent object.
 */
void bhv_red_coin_init(void) {
    // Set the red coins to have a parent of the closest red coin star.
    struct Object *hiddenRedCoinStar = cur_obj_nearest_object_with_behavior(bhvHiddenRedCoinStar);
    if (hiddenRedCoinStar != NULL) {
        o->parentObj = hiddenRedCoinStar;
    } else if ((hiddenRedCoinStar = cur_obj_nearest_object_with_behavior(bhvBowserCourseRedCoinStar)) != NULL) {
        o->parentObj = hiddenRedCoinStar;
    } else {
        o->parentObj = NULL;
    }

    obj_set_hitbox(o, &sRedCoinHitbox);
}

/**
 * Main behavior for red coins. Primarily controls coin collection noise and spawning
 * the orange number counter.
 */
void bhv_red_coin_loop(void) {
    u8 reds_needed = 8;
    if (rule_check(0,TRUE)) {
       reds_needed = 6;
    }

    // If Mario interacted with the object...
    if (o->oInteractStatus & INT_STATUS_INTERACTED) {
        //for BOARD minigame
        if (gCurrLevelNum == LEVEL_SA) {
            gMarioState->EA_WAVES++;
            save_file_set_hiscore(7,gMarioState->EA_WAVES);
        }
        // ...and there is a red coin star in the level...
        if (o->parentObj != NULL) {
            // ...increment the star's counter.
            o->parentObj->oHiddenStarTriggerCounter++;

            // Spawn the orange number counter, as long as it isn't the last coin.
            if (o->parentObj->oHiddenStarTriggerCounter != reds_needed) {
                spawn_orange_number(o->parentObj->oHiddenStarTriggerCounter, 0, 0, 0);
            }

            if (gMarioState->numAir < 699) {
                gMarioState->numAir = 699;
            }

            // On all versions but the JP version, each coin collected plays a higher noise.
            play_sound(SOUND_MENU_COLLECT_RED_COIN
                       + (((u8) o->parentObj->oHiddenStarTriggerCounter - 1) << 16),
                       gGlobalSoundSource);
        }

        if (o->prevObj != NULL) {
            o->prevObj->prevObj = NULL;
        }

        coin_collected();
        // Despawn the coin.
        o->oInteractStatus = INT_STATUS_NONE;
    }
}
