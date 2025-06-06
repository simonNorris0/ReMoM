/*
    Armies Screen

    WIZARDS.EXE
        ovr066
    
    MoO2:
        Module: ¿ Fleet Screen ?
*/

#ifndef ARMYLIST_H
#define ARMYLIST_H

#include "MOM.H"

#ifdef __cplusplus
extern "C" {
#endif



// shared with 'Item Screen'
extern SAMB_ptr hero_portraits_seg[6];



/*
    WIZARDS.EXE  ovr066
*/

// WZD o66p01
void ArmyList_Screen(void);

// WZD o66p02
void ArmyList_Screen_Draw(void);

// WZD o66p03
void ArmyList_Add_List_Fields(void);

// WZD o66p04
void ArmyList_UnitFigure_Coordinates(int16_t armylist_idx, int16_t * x1, int16_t * y1, int16_t * x2, int16_t * y2);

// WZD o66p05
void ArmyList_Draw_Reduced_Map(void);

// WZD o66p06
int16_t Get_List_Armies_Index(int16_t armylist_hero_portrait_unit_idx);

// WZD o66p07
void Build_Army_List(void);

// WZD o66p08
void Build_Army_List_Counts(void);

// WZD o66p09
void ArmyList_Set_List_Item_Count(void);

// WZD o66p10
void ArmyList_Screen_Load(void);

// WZD o66p11
// NX_j_IDK_ArmlyIst_PrintParagraph()
// NX_IDK_ArmlyIst_PrintParagraph()

// WZD o66p12
void ArmyList_Hero_Portrait_Coords(int16_t hero_portrait_num, int16_t * x1, int16_t * y1, int16_t * x2, int16_t * y2);


// MoO2 Draw_Galaxy_Map_Box_()
// MoO2 Draw_Gal_Map_() no XREF, but |-> Draw_Galaxy_Map_Box_()


#ifdef __cplusplus
}
#endif

#endif  /* ARMYLIST_H */
