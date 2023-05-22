Lights1 cfan_Wood_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx cfan_Wood_i8_aligner[] = {gsSPEndDisplayList()};
u8 cfan_Wood_i8[] = {
	0xd6, 0xf1, 0xd6, 0xd6, 0xe4, 0xe4, 0xe4, 0xe4, 
	0xe4, 0xe4, 0xe4, 0xec, 0xf9, 0xec, 0xe4, 0xf9, 
	0xf1, 0xff, 0xf1, 0xf1, 0xe4, 0xe4, 0xf1, 0xf1, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xf1, 0xff, 0xe4, 0xff, 
	0xe4, 0xf1, 0xd6, 0xd6, 0xe4, 0xe4, 0xf1, 0xe4, 
	0xe4, 0xe4, 0xe4, 0xec, 0xe4, 0xf9, 0xe4, 0xf9, 
	0xf1, 0xff, 0xf1, 0xf1, 0xe4, 0xe4, 0xf1, 0xf1, 
	0xe4, 0xe4, 0xe4, 0xf1, 0xf1, 0xff, 0xe4, 0xf1, 
	0xf1, 0xf1, 0xd6, 0xd6, 0xe4, 0xf1, 0xff, 0xe4, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xf9, 0xe4, 0xec, 
	0xf1, 0xff, 0xf1, 0xf1, 0xe4, 0xe4, 0xe4, 0xff, 
	0xf1, 0xe4, 0xe4, 0xf1, 0xf1, 0xff, 0xea, 0xea, 
	0xf1, 0xe4, 0xd6, 0xe4, 0xe4, 0xe4, 0xff, 0xf1, 
	0xe4, 0xec, 0xe4, 0xe4, 0xe4, 0xf9, 0xe4, 0xec, 
	0xf1, 0xff, 0xf1, 0xf1, 0xe4, 0xe4, 0xe4, 0xff, 
	0xf1, 0xe4, 0xe4, 0xf1, 0xf1, 0xff, 0xf1, 0xea, 
	0xff, 0xe4, 0xd6, 0xe4, 0xe4, 0xe4, 0xff, 0xe4, 
	0xe4, 0xf1, 0xe4, 0xd6, 0xe4, 0xf1, 0xd6, 0xf1, 
	0xff, 0xff, 0xf1, 0xf1, 0xe4, 0xe4, 0xe4, 0xff, 
	0xff, 0xe4, 0xe4, 0xff, 0xea, 0xf8, 0xea, 0xe4, 
	0xff, 0xe4, 0xd6, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 
	0xd6, 0xf1, 0xe4, 0xd6, 0xe4, 0xf1, 0xd6, 0xf1, 
	0xff, 0xff, 0xf1, 0xf1, 0xe4, 0xe4, 0xe4, 0xff, 
	0xff, 0xe4, 0xe4, 0xff, 0xe4, 0xf8, 0xf8, 0xe4, 
	0xff, 0xe4, 0xe4, 0xe4, 0xe4, 0xf1, 0xe4, 0xe4, 
	0xe4, 0xf1, 0xe4, 0xd6, 0xe4, 0xf1, 0xd6, 0xe4, 
	0xff, 0xff, 0xf1, 0xf1, 0xe4, 0xe4, 0xf1, 0xff, 
	0xff, 0xe4, 0xe4, 0xf1, 0xe4, 0xea, 0xf8, 0xe4, 
	0xff, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 
	0xe4, 0xf1, 0xe4, 0xd6, 0xd6, 0xf1, 0xd6, 0xe4, 
	0xff, 0xff, 0xf1, 0xf1, 0xe4, 0xe4, 0xf1, 0xff, 
	0xff, 0xf1, 0xe4, 0xe4, 0xe4, 0xea, 0xf8, 0xe4, 
	0xf1, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 
	0xe4, 0xe4, 0xe4, 0xd6, 0xd6, 0xf1, 0xd6, 0xf1, 
	0xff, 0xf1, 0xf1, 0xf1, 0xf1, 0xe4, 0xf1, 0xff, 
	0xff, 0xf1, 0xe4, 0xe4, 0xe4, 0xe4, 0xf1, 0xe4, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 
	0xe4, 0xe4, 0xe4, 0xd6, 0xe4, 0xf1, 0xe4, 0xf1, 
	0xff, 0xf1, 0xf1, 0xf1, 0xf1, 0xe4, 0xf1, 0xff, 
	0xff, 0xf1, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 
	0xf1, 0xe4, 0xe4, 0xd6, 0xe4, 0xf1, 0xe4, 0xf1, 
	0xff, 0xf1, 0xf1, 0xf1, 0xf1, 0xe4, 0xf1, 0xff, 
	0xff, 0xf1, 0xe4, 0xe4, 0xe4, 0xf1, 0xf1, 0xff, 
	0xf1, 0xe4, 0xe4, 0xf1, 0xe4, 0xe4, 0xe4, 0xe4, 
	0xf1, 0xe4, 0xe4, 0xd6, 0xe4, 0xf1, 0xf1, 0xe4, 
	0xff, 0xff, 0xf1, 0xf1, 0xf1, 0xe4, 0xf1, 0xf1, 
	0xff, 0xf1, 0xe4, 0xe4, 0xe4, 0xf1, 0xf1, 0xff, 
	0xf1, 0xe4, 0xe4, 0xf1, 0xd6, 0xe4, 0xe4, 0xd6, 
	0xf1, 0xe4, 0xd6, 0xd6, 0xe4, 0xe4, 0xe4, 0xe4, 
	0xf1, 0xf1, 0xf1, 0xf1, 0xe4, 0xe4, 0xff, 0xf1, 
	0xff, 0xf1, 0xe4, 0xe4, 0xe4, 0xe4, 0xff, 0xff, 
	0xff, 0xe4, 0xe4, 0xf1, 0xd6, 0xe4, 0xf1, 0xe4, 
	0xf1, 0xd6, 0xd6, 0xd6, 0xe4, 0xe4, 0xe4, 0xe4, 
	0xf1, 0xf1, 0xf1, 0xf1, 0xe4, 0xe4, 0xff, 0xf1, 
	0xff, 0xff, 0xe4, 0xe4, 0xf1, 0xe4, 0xff, 0xff, 
	0xff, 0xe4, 0xf1, 0xf1, 0xd6, 0xe4, 0xf1, 0xe4, 
	0xe4, 0xd6, 0xd6, 0xd6, 0xe4, 0xe4, 0xe4, 0xe4, 
	0xf1, 0xf1, 0xf1, 0xff, 0xe4, 0xe4, 0xff, 0xf1, 
	0xff, 0xf1, 0xe4, 0xe4, 0xff, 0xe4, 0xff, 0xff, 
	0xff, 0xe4, 0xf1, 0xf1, 0xd6, 0xe4, 0xf1, 0xd6, 
	0xe4, 0xd6, 0xd6, 0xf1, 0xd6, 0xe4, 0xe4, 0xe4, 
	0xf1, 0xf1, 0xf1, 0xff, 0xe4, 0xe4, 0xff, 0xf1, 
	0xff, 0xf1, 0xe4, 0xe4, 0xff, 0xe4, 0xff, 0xff, 
	0xff, 0xe4, 0xf1, 0xf1, 0xd6, 0xf1, 0xf1, 0xd6, 
	0xd6, 0xd6, 0xd6, 0xf1, 0xdc, 0xf1, 0xf1, 0xe4, 
	0xe4, 0xf1, 0xe4, 0xff, 0xe4, 0xe4, 0xff, 0xff, 
	0xff, 0xf1, 0xe4, 0xf1, 0xff, 0xf1, 0xf1, 0xff, 
	0xff, 0xe4, 0xf1, 0xe4, 0xe4, 0xf1, 0xf1, 0xd6, 
	0xd6, 0xe4, 0xd6, 0xe4, 0xdc, 0xf1, 0xf1, 0xe4, 
	0xe4, 0xf1, 0xe4, 0xff, 0xe4, 0xe4, 0xff, 0xff, 
	0xf1, 0xe4, 0xe4, 0xf1, 0xff, 0xf1, 0xf1, 0xff, 
	0xff, 0xe4, 0xf1, 0xe4, 0xe4, 0xf1, 0xe4, 0xd6, 
	0xd6, 0xe4, 0xd6, 0xe4, 0xdc, 0xe4, 0xf1, 0xf1, 
	0xe4, 0xe4, 0xe4, 0xff, 0xe4, 0xe4, 0xff, 0xf1, 
	0xf1, 0xe4, 0xe4, 0xf1, 0xff, 0xf1, 0xf1, 0xff, 
	0xf1, 0xe4, 0xe4, 0xe4, 0xe4, 0xf1, 0xe4, 0xd6, 
	0xd6, 0xd6, 0xd6, 0xe4, 0xdc, 0xe4, 0xf1, 0xf1, 
	0xe4, 0xf1, 0xf1, 0xe4, 0xe4, 0xf1, 0xff, 0xf1, 
	0xf1, 0xe4, 0xe4, 0xf1, 0xff, 0xf1, 0xf1, 0xff, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xff, 0xe4, 0xd6, 
	0xd6, 0xd6, 0xd6, 0xd6, 0xf1, 0xe4, 0xe4, 0xf1, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xf1, 0xff, 0xf1, 
	0xf1, 0xe4, 0xe4, 0xf1, 0xff, 0xf1, 0xec, 0xff, 
	0xf1, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xd6, 
	0xe4, 0xe4, 0xd6, 0xe4, 0xff, 0xe4, 0xe4, 0xf1, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xff, 0xf1, 
	0xf1, 0xe4, 0xe4, 0xe4, 0xff, 0xf1, 0xec, 0xff, 
	0xff, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xd6, 
	0xd6, 0xf1, 0xd6, 0xf1, 0xff, 0xe4, 0xe4, 0xe4, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xf1, 0xe4, 
	0xf1, 0xe4, 0xe4, 0xe4, 0xff, 0xec, 0xf1, 0xff, 
	0xff, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 
	0xe4, 0xf1, 0xd6, 0xf1, 0xff, 0xe4, 0xe4, 0xf1, 
	0xe4, 0xe4, 0xe4, 0xf1, 0xe4, 0xe4, 0xf1, 0xe4, 
	0xe4, 0xe4, 0xe4, 0xf1, 0xff, 0xec, 0xff, 0xff, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 
	0xe4, 0xe4, 0xe4, 0xf1, 0xff, 0xe4, 0xe4, 0xe4, 
	0xe4, 0xe4, 0xe4, 0xf1, 0xe4, 0xe4, 0xf1, 0xe4, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xff, 0xe4, 0xff, 0xff, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xd6, 
	0xf1, 0xe4, 0xe4, 0xe4, 0xf1, 0xe4, 0xe4, 0xe4, 
	0xe4, 0xe4, 0xe4, 0xf1, 0xf1, 0xe4, 0xf1, 0xe4, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xf1, 0xe4, 0xff, 0xff, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xd6, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xff, 0xe4, 0xe4, 0xe4, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xf1, 0xf1, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xf1, 0xf1, 0xff, 0xff, 
	0xe4, 0xd6, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xd6, 
	0xf1, 0xf1, 0xe4, 0xe4, 0xff, 0xe4, 0xf1, 0xe4, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xf1, 0xff, 0xff, 0xf1, 
	0xe4, 0xe4, 0xf1, 0xe4, 0xf1, 0xe4, 0xff, 0xff, 
	0xec, 0xd6, 0xdf, 0xec, 0xe4, 0xf1, 0xd6, 0xd6, 
	0xe4, 0xf9, 0xec, 0xe4, 0xe4, 0xe4, 0xf1, 0xf1, 
	0xe4, 0xd6, 0xe4, 0xe4, 0xf1, 0xff, 0xf1, 0xf1, 
	0xe4, 0xe4, 0xea, 0xe4, 0xe4, 0xe4, 0xe4, 0xff, 
	0xec, 0xd6, 0xdf, 0xec, 0xd6, 0xf1, 0xe4, 0xd6, 
	0xe4, 0xec, 0xec, 0xe4, 0xe4, 0xe4, 0xf1, 0xff, 
	0xe4, 0xd6, 0xe4, 0xe4, 0xf1, 0xf1, 0xf1, 0xf1, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xff, 
	0xec, 0xdf, 0xd6, 0xec, 0xe4, 0xe4, 0xe4, 0xd6, 
	0xe4, 0xe4, 0xec, 0xec, 0xe4, 0xe4, 0xf1, 0xf1, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xf1, 0xf1, 0xf1, 0xf1, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xff, 
	0xec, 0xec, 0xd6, 0xec, 0xd6, 0xf1, 0xe4, 0xd6, 
	0xe4, 0xe4, 0xec, 0xec, 0xff, 0xe4, 0xf1, 0xff, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xf1, 0xf1, 0xff, 0xf1, 
	0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xf1, 0xe4, 0xff, 
	
};

Vtx cfan_Cylinder_001_mesh_layer_1_vtx_cull[8] = {
	{{{-1355, -197, 1355},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-1355, -155, 1355},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-1355, -155, -1355},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-1355, -197, -1355},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{1355, -197, 1355},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{1355, -155, 1355},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{1355, -155, -1355},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{1355, -197, -1355},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx cfan_Cylinder_001_mesh_layer_1_vtx_0[128] = {
	{{{245, -197, 100},0, {272, 619},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{245, -155, 100},0, {272, 522},{0x83, 0x75, 0x63, 0xFF}}},
	{{{245, -155, -100},0, {725, 522},{0x83, 0x75, 0x63, 0xFF}}},
	{{{245, -197, -100},0, {725, 619},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{245, -197, -100},0, {1054, 619},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{245, -155, -100},0, {1054, 522},{0x83, 0x75, 0x63, 0xFF}}},
	{{{1355, -155, -100},0, {3569, 522},{0x83, 0x75, 0x63, 0xFF}}},
	{{{1355, -197, -100},0, {3569, 619},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{1355, -197, -100},0, {725, 619},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{1355, -155, -100},0, {725, 522},{0x83, 0x75, 0x63, 0xFF}}},
	{{{1355, -155, 100},0, {272, 522},{0x83, 0x75, 0x63, 0xFF}}},
	{{{1355, -176, 114},0, {240, 571},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{1355, -176, 114},0, {3569, 571},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{1355, -155, 100},0, {3569, 522},{0x83, 0x75, 0x63, 0xFF}}},
	{{{245, -155, 100},0, {1054, 522},{0x83, 0x75, 0x63, 0xFF}}},
	{{{245, -197, 100},0, {1054, 619},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{245, -197, -100},0, {1054, 266},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{1355, -197, -100},0, {3569, 266},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{1355, -176, 114},0, {3569, 750},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{245, -197, 100},0, {1054, 719},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{1355, -155, -100},0, {3569, 266},{0x83, 0x75, 0x63, 0xFF}}},
	{{{245, -155, -100},0, {1054, 266},{0x83, 0x75, 0x63, 0xFF}}},
	{{{245, -155, 100},0, {1054, 719},{0x83, 0x75, 0x63, 0xFF}}},
	{{{1355, -155, 100},0, {3569, 719},{0x83, 0x75, 0x63, 0xFF}}},
	{{{-245, -197, -97},0, {717, 619},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{-245, -155, -97},0, {717, 522},{0x9B, 0x8B, 0x76, 0xFF}}},
	{{{-245, -155, 103},0, {264, 522},{0x83, 0x75, 0x63, 0xFF}}},
	{{{-245, -197, 103},0, {264, 619},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{-245, -197, 103},0, {-60, 619},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{-245, -155, 103},0, {-60, 522},{0x83, 0x75, 0x63, 0xFF}}},
	{{{-1355, -155, 103},0, {-2575, 522},{0x8B, 0x7C, 0x69, 0xFF}}},
	{{{-1355, -197, 103},0, {-2575, 619},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{-1355, -197, 103},0, {264, 619},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{-1355, -155, 103},0, {264, 522},{0x8B, 0x7C, 0x69, 0xFF}}},
	{{{-1355, -155, -97},0, {717, 522},{0x85, 0x77, 0x65, 0xFF}}},
	{{{-1355, -176, -110},0, {749, 571},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{-1355, -176, -110},0, {-2575, 571},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{-1355, -155, -97},0, {-2575, 522},{0x85, 0x77, 0x65, 0xFF}}},
	{{{-245, -155, -97},0, {-60, 522},{0x9B, 0x8B, 0x76, 0xFF}}},
	{{{-245, -197, -97},0, {-60, 619},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{-245, -197, 103},0, {-60, 727},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{-1355, -197, 103},0, {-2575, 727},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{-1355, -176, -110},0, {-2575, 242},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{-245, -197, -97},0, {-60, 274},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{-1355, -155, 103},0, {-2575, 727},{0x8B, 0x7C, 0x69, 0xFF}}},
	{{{-245, -155, 103},0, {-60, 727},{0x83, 0x75, 0x63, 0xFF}}},
	{{{-245, -155, -97},0, {-60, 274},{0x9B, 0x8B, 0x76, 0xFF}}},
	{{{-1355, -155, -97},0, {-2575, 274},{0x85, 0x77, 0x65, 0xFF}}},
	{{{98, -197, -245},0, {720, 619},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{98, -155, -245},0, {720, 522},{0x83, 0x75, 0x63, 0xFF}}},
	{{{-102, -155, -245},0, {266, 522},{0x83, 0x75, 0x63, 0xFF}}},
	{{{-102, -197, -245},0, {266, 619},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{-102, -197, -245},0, {1051, 619},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{-102, -155, -245},0, {1051, 522},{0x83, 0x75, 0x63, 0xFF}}},
	{{{-102, -155, -1355},0, {3566, 522},{0x83, 0x75, 0x63, 0xFF}}},
	{{{-102, -197, -1355},0, {3566, 619},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{-102, -197, -1355},0, {266, 619},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{-102, -155, -1355},0, {266, 522},{0x83, 0x75, 0x63, 0xFF}}},
	{{{98, -155, -1355},0, {720, 522},{0x83, 0x75, 0x63, 0xFF}}},
	{{{112, -176, -1355},0, {751, 571},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{112, -176, -1355},0, {3566, 571},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{98, -155, -1355},0, {3566, 522},{0x83, 0x75, 0x63, 0xFF}}},
	{{{98, -155, -245},0, {1051, 522},{0x83, 0x75, 0x63, 0xFF}}},
	{{{98, -197, -245},0, {1051, 619},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{-102, -197, -245},0, {266, -60},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{-102, -197, -1355},0, {266, -2576},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{112, -176, -1355},0, {751, -2576},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{98, -197, -245},0, {720, -60},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{-102, -155, -1355},0, {266, -2576},{0x83, 0x75, 0x63, 0xFF}}},
	{{{-102, -155, -245},0, {266, -60},{0x83, 0x75, 0x63, 0xFF}}},
	{{{98, -155, -245},0, {720, -60},{0x83, 0x75, 0x63, 0xFF}}},
	{{{98, -155, -1355},0, {720, -2576},{0x83, 0x75, 0x63, 0xFF}}},
	{{{-98, -197, 245},0, {274, 619},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{-98, -155, 245},0, {274, 522},{0xA4, 0x93, 0x7C, 0xFF}}},
	{{{102, -155, 245},0, {728, 522},{0x84, 0x76, 0x64, 0xFF}}},
	{{{102, -197, 245},0, {728, 619},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{102, -197, 245},0, {-62, 619},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{102, -155, 245},0, {-62, 522},{0x84, 0x76, 0x64, 0xFF}}},
	{{{102, -155, 1355},0, {-2578, 522},{0x84, 0x76, 0x63, 0xFF}}},
	{{{102, -197, 1355},0, {-2578, 619},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{102, -197, 1355},0, {728, 619},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{102, -155, 1355},0, {728, 522},{0x84, 0x76, 0x63, 0xFF}}},
	{{{-98, -155, 1355},0, {274, 522},{0x86, 0x78, 0x66, 0xFF}}},
	{{{-112, -176, 1355},0, {243, 571},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{-112, -176, 1355},0, {-2578, 571},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{-98, -155, 1355},0, {-2578, 522},{0x86, 0x78, 0x66, 0xFF}}},
	{{{-98, -155, 245},0, {-62, 522},{0xA4, 0x93, 0x7C, 0xFF}}},
	{{{-98, -197, 245},0, {-62, 619},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{102, -197, 245},0, {728, 1053},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{102, -197, 1355},0, {728, 3568},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{-112, -176, 1355},0, {243, 3568},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{-98, -197, 245},0, {274, 1053},{0xE0, 0xC9, 0xAA, 0xFF}}},
	{{{102, -155, 1355},0, {728, 3568},{0x84, 0x76, 0x63, 0xFF}}},
	{{{102, -155, 245},0, {728, 1053},{0x84, 0x76, 0x64, 0xFF}}},
	{{{-98, -155, 245},0, {274, 1053},{0xA4, 0x93, 0x7C, 0xFF}}},
	{{{-98, -155, 1355},0, {274, 3568},{0x86, 0x78, 0x66, 0xFF}}},
	{{{-25, -197, 245},0, {-58, 619},{0x7E, 0x58, 0x33, 0xFF}}},
	{{{-25, -155, 245},0, {-58, 522},{0x4C, 0x35, 0x1F, 0xFF}}},
	{{{-25, -155, -245},0, {1055, 522},{0x54, 0x3B, 0x22, 0xFF}}},
	{{{-25, -197, -245},0, {1055, 619},{0x7E, 0x58, 0x33, 0xFF}}},
	{{{-245, -197, -25},0, {-60, 619},{0x7E, 0x58, 0x33, 0xFF}}},
	{{{-245, -155, -25},0, {-60, 522},{0x4C, 0x35, 0x1F, 0xFF}}},
	{{{245, -155, -25},0, {1054, 522},{0x4C, 0x35, 0x1F, 0xFF}}},
	{{{245, -197, -25},0, {1054, 619},{0x7E, 0x58, 0x33, 0xFF}}},
	{{{25, -197, -245},0, {1055, 619},{0x7E, 0x58, 0x33, 0xFF}}},
	{{{25, -155, -245},0, {1055, 522},{0x4C, 0x35, 0x1F, 0xFF}}},
	{{{25, -155, 245},0, {-58, 522},{0x4C, 0x35, 0x1F, 0xFF}}},
	{{{25, -197, 245},0, {-58, 619},{0x7E, 0x58, 0x33, 0xFF}}},
	{{{245, -197, 25},0, {1054, 619},{0x7E, 0x58, 0x33, 0xFF}}},
	{{{245, -155, 25},0, {1054, 522},{0x4C, 0x35, 0x1F, 0xFF}}},
	{{{-245, -155, 25},0, {-60, 522},{0x4C, 0x35, 0x1F, 0xFF}}},
	{{{-245, -197, 25},0, {-60, 619},{0x7E, 0x58, 0x33, 0xFF}}},
	{{{-245, -197, -25},0, {-60, 436},{0x7E, 0x58, 0x33, 0xFF}}},
	{{{245, -197, -25},0, {1054, 436},{0x7E, 0x58, 0x33, 0xFF}}},
	{{{245, -197, 25},0, {1054, 549},{0x7E, 0x58, 0x33, 0xFF}}},
	{{{-245, -197, 25},0, {-60, 549},{0x7E, 0x58, 0x33, 0xFF}}},
	{{{245, -155, -25},0, {1054, 436},{0x4C, 0x35, 0x1F, 0xFF}}},
	{{{-245, -155, -25},0, {-60, 436},{0x4C, 0x35, 0x1F, 0xFF}}},
	{{{-245, -155, 25},0, {-60, 549},{0x4C, 0x35, 0x1F, 0xFF}}},
	{{{245, -155, 25},0, {1054, 549},{0x4C, 0x35, 0x1F, 0xFF}}},
	{{{-25, -197, 245},0, {441, 1049},{0x7E, 0x58, 0x33, 0xFF}}},
	{{{-25, -197, -245},0, {441, -64},{0x7E, 0x58, 0x33, 0xFF}}},
	{{{25, -197, -245},0, {553, -64},{0x7E, 0x58, 0x33, 0xFF}}},
	{{{25, -197, 245},0, {553, 1049},{0x7E, 0x58, 0x33, 0xFF}}},
	{{{-25, -155, -245},0, {441, -64},{0x54, 0x3B, 0x22, 0xFF}}},
	{{{-25, -155, 245},0, {441, 1049},{0x4C, 0x35, 0x1F, 0xFF}}},
	{{{25, -155, 245},0, {553, 1049},{0x4C, 0x35, 0x1F, 0xFF}}},
	{{{25, -155, -245},0, {553, -64},{0x4C, 0x35, 0x1F, 0xFF}}},
};

Gfx cfan_Cylinder_001_mesh_layer_1_tri_0[] = {
	gsSPVertex(cfan_Cylinder_001_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
	gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
	gsSPVertex(cfan_Cylinder_001_mesh_layer_1_vtx_0 + 32, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
	gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
	gsSPVertex(cfan_Cylinder_001_mesh_layer_1_vtx_0 + 64, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
	gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
	gsSPVertex(cfan_Cylinder_001_mesh_layer_1_vtx_0 + 96, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
	gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
	gsSPEndDisplayList(),
};


Gfx mat_cfan_Wood[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0),
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, cfan_Wood_i8),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(cfan_Wood_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_cfan_Wood[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx cfan_Cylinder_001_mesh_layer_1[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(cfan_Cylinder_001_mesh_layer_1_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_cfan_Wood),
	gsSPDisplayList(cfan_Cylinder_001_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_cfan_Wood),
	gsSPEndDisplayList(),
};

Gfx cfan_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
