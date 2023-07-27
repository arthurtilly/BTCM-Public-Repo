static const s16 taxi_anim_taxiclose_values[] = {
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0xFFFF, 
	0x0000, 0x0000, 0x0000, 0xFFFF, 0xB9C6, 0xBAAE, 0xBD43, 0xC15E, 0xC6D5, 
	0xCD74, 0xD4F0, 0xDCE2, 0xE4D5, 0xEC50, 0xF2F0, 0xF867, 0xFC81, 0xFF17, 
	0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 
};

static const u16 taxi_anim_taxiclose_indices[] = {
	0x0001, 0x0000, 0x0001, 0x0001, 0x0001, 0x0002, 0x0001, 0x0003, 0x0001, 
	0x0004, 0x0001, 0x0005, 0x0001, 0x0006, 0x0001, 0x0007, 0x0001, 0x0008, 
	0x0004, 0x0009, 0x000F, 0x000D, 0x000F, 0x001C, 
};

static const struct Animation taxi_anim_taxiclose = {
	1,
	0,
	0,
	1,
	15,
	ANIMINDEX_NUMPARTS(taxi_anim_taxiclose_indices),
	taxi_anim_taxiclose_values,
	taxi_anim_taxiclose_indices,
	0,
};
