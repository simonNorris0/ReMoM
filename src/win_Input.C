
#include "MOM.H"



// WZD s36p66
// MGC s34p66
/*
    returns field_idx/num
*/
int16_t Get_Input(void)
{

    int16_t field_index;

    Pump_Events();

    if(input_delay > 0)
    {
        input_delay--;
        return 0;
    }
    
    if(input_delay < 0)
    {
        input_delay = 0;
    }
    
    if(fields_count <= 1)
    {
        return 0;
    }

    if(mouse_installed == ST_FALSE)
    {
        // TODO  field_index = CRP_GUI_KeyInputOnly();
    }
    else
    {
        field_index = Interpret_Mouse_Input();  // WZD s36p01
    }

    Set_Page_Off();

    return field_index;
}
