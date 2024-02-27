/// Dolphin



void bhv_dolphin_init(void) {
        obj_scale_xyz(o, 0.0f, 0.0f, 0.0f);
    }

void bhv_dolphin_loop(void) {
    f32 xScale = o->header.gfx.scale[0];
    f32 yScale = o->header.gfx.scale[1];
    f32 zScale = o->header.gfx.scale[2];
    f32 marioX = gMarioState->pos[0];
    f32 marioY = gMarioState->pos[1];
    f32 marioZ = gMarioState->pos[2];
    obj_set_pos(o, marioX, marioY + (-85.0f * yScale), marioZ);
    o->oFaceAngleYaw = gMarioState->faceAngle[1];


    if (gMarioState->action != ACT_TOTSUGEKI) {
        if (yScale > 0.0f) {
            yScale -= 0.15f;
        }
        if (xScale > 0.0f) {
            xScale -= 0.15f;
        }
        if (zScale > 0.0f) {
            zScale -= 0.15f;
        }
        if (yScale <= 0.0f) {
            obj_mark_for_deletion(o);
        }

    } else {
        if (yScale < 1.0f) {
            yScale += 0.1f;
        }
        if (xScale < 1.0f) {
            xScale += 0.1f;
        }
        if (zScale < 1.0f) {
            zScale += 0.1f;
        }
    }

    obj_scale_xyz(o, xScale, yScale, zScale);
}