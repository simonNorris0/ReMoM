/*
    WIZARDS.EXE
        seg023

    Moo2
        Module: special
            Interpolate_Line()
            Absolute_Interpolate_Line()
            Range()
            Delta_XY_With_Wrap()
            Path()
            Path_Wrap()
            isqrt()

*/

#ifndef SPECIAL_H
#define SPECIAL_H

#ifdef __cplusplus
extern "C" {
#endif



/*
    WIZARDS.EXE seg023
*/

// WZD s23p01
// UU_VGA_GetPointInDir()

// WZD s23p02
int16_t Range(int16_t x1, int16_t y1, int16_t x2, int16_t y2);

// WZD s23p03
int16_t Delta_XY_With_Wrap(int16_t x1, int16_t y1, int16_t x2, int16_t y2, int16_t wrap_x);

// WZD s23p04
// UU_Tile_PlotLine()

// WZD s23p05
int16_t Path_Wrap(int16_t x1, int16_t y1, int16_t x2, int16_t y2, int8_t * path_string_x, int8_t * path_string_y, int16_t length);



#ifdef __cplusplus
}
#endif

#endif  /* SPECIAL_H */
