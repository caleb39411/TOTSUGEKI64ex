// 0x0E000570
const GeoLayout ddd_geo_000570[] = {
   GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
   GEO_OPEN_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_NODE_ORTHO(100),
         GEO_OPEN_NODE(),
            GEO_BACKGROUND_COLOR(0x0001),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_ZBUFFER(1),
      GEO_OPEN_NODE(),
         GEO_CAMERA_FRUSTUM_WITH_FUNC(45, 100, 12800, geo_camera_fov),
         GEO_OPEN_NODE(),
            GEO_CAMERA(4, 0, 2000, 6000, 2560, 0, 512, geo_camera_main),
            GEO_OPEN_NODE(),
               GEO_DISPLAY_LIST(LAYER_OPAQUE, ddd_seg7_dl_07007408),
               GEO_DISPLAY_LIST(LAYER_OPAQUE, ddd_seg7_dl_07007CB8),
               GEO_DISPLAY_LIST(LAYER_ALPHA, ddd_seg7_dl_07008C48),
               GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ddd_seg7_dl_07008F80),
               GEO_DISPLAY_LIST(LAYER_ALPHA, ddd_seg7_dl_0700BAE0),
               GEO_DISPLAY_LIST(LAYER_OPAQUE, ddd_seg7_dl_0700CE48),
               GEO_ASM(   0, geo_movtex_pause_control),
               GEO_ASM(0x2302, geo_movtex_draw_water_regions),
               GEO_RENDER_OBJ(),
               GEO_ASM(  14, geo_enfvx_main),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
