#include "src/game/envfx_snow.h"

const GeoLayout bigredcoin_geo[] = {
	GEO_CULLING_RADIUS(1000),
	GEO_OPEN_NODE(),
		GEO_SHADOW(1, 204, 200),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bigredcoin_Cylinder_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bigredcoin_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
