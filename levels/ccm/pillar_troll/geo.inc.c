#include "src/game/envfx_snow.h"

const GeoLayout pillar_troll_geo[] = {
	GEO_CULLING_RADIUS(1000),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pillar_troll_Cube_005_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pillar_troll_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
