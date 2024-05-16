#pragma once

#include "lvgl.h"

#define CUSTOM_LV_KEYBOARD_CTRL_BTN_FLAGS (LV_BTNMATRIX_CTRL_NO_REPEAT | LV_BTNMATRIX_CTRL_CLICK_TRIG | LV_BTNMATRIX_CTRL_CHECKED)
#define LV_KB_BTN(width) (LV_BTNMATRIX_CTRL_NO_REPEAT | LV_BTNMATRIX_CTRL_POPOVER | width)


static lv_obj_t *ta_zoomed = NULL;
static lv_obj_t *ta_source = NULL;

const char * custom_kb_map_lc[] = {"1#", "q", "w", "e", "r", "t", "y", "u", "i", "o", "p", LV_SYMBOL_BACKSPACE, "\n",
                                                 "ABC", "a", "s", "d", "f", "g", "h", "j", "k", "l", LV_SYMBOL_NEW_LINE, "\n",
                                                 "_", "-", "z", "x", "c", "v", "b", "n", "m", ".", ",", ":", "\n",
                                                 LV_SYMBOL_KEYBOARD, LV_SYMBOL_LEFT, " ", LV_SYMBOL_RIGHT, LV_SYMBOL_OK, ""
                                                };


const lv_btnmatrix_ctrl_t custom_kb_ctrl_lc_map[] = {
    CUSTOM_LV_KEYBOARD_CTRL_BTN_FLAGS | 5, LV_KB_BTN(4), LV_KB_BTN(4), LV_KB_BTN(4), LV_KB_BTN(4), LV_KB_BTN(4), LV_KB_BTN(4), LV_KB_BTN(4), LV_KB_BTN(4), LV_KB_BTN(4), LV_KB_BTN(4), LV_BTNMATRIX_CTRL_CHECKED | LV_KB_BTN(7),
    CUSTOM_LV_KEYBOARD_CTRL_BTN_FLAGS | 6, LV_KB_BTN(3), LV_KB_BTN(3), LV_KB_BTN(3), LV_KB_BTN(3), LV_KB_BTN(3), LV_KB_BTN(3), LV_KB_BTN(3), LV_KB_BTN(3), LV_KB_BTN(3), LV_BTNMATRIX_CTRL_CHECKED | LV_KB_BTN(7),
    LV_BTNMATRIX_CTRL_CHECKED | LV_KB_BTN(1), LV_BTNMATRIX_CTRL_CHECKED | LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_BTNMATRIX_CTRL_CHECKED | LV_KB_BTN(1), LV_BTNMATRIX_CTRL_CHECKED | LV_KB_BTN(1), LV_BTNMATRIX_CTRL_CHECKED | LV_KB_BTN(1),
    CUSTOM_LV_KEYBOARD_CTRL_BTN_FLAGS | 2, LV_BTNMATRIX_CTRL_CHECKED | 2, 6, LV_BTNMATRIX_CTRL_CHECKED | 2, CUSTOM_LV_KEYBOARD_CTRL_BTN_FLAGS | 2
};

const char * custom_kb_map_uc[] = {"1#", "Q", "W", "E", "R", "T", "Y", "U", "I", "O", "P", LV_SYMBOL_BACKSPACE, "\n",
                                                 "abc", "A", "S", "D", "F", "G", "H", "J", "K", "L", LV_SYMBOL_NEW_LINE, "\n",
                                                 "_", "-", "Z", "X", "C", "V", "B", "N", "M", ".", ",", ":", "\n",
                                                 LV_SYMBOL_KEYBOARD, LV_SYMBOL_LEFT, " ", LV_SYMBOL_RIGHT, LV_SYMBOL_OK, ""
                                                };

const lv_btnmatrix_ctrl_t custom_kb_ctrl_uc_map[] = {
    CUSTOM_LV_KEYBOARD_CTRL_BTN_FLAGS | 5, LV_KB_BTN(4), LV_KB_BTN(4), LV_KB_BTN(4), LV_KB_BTN(4), LV_KB_BTN(4), LV_KB_BTN(4), LV_KB_BTN(4), LV_KB_BTN(4), LV_KB_BTN(4), LV_KB_BTN(4), LV_BTNMATRIX_CTRL_CHECKED | LV_KB_BTN(7),
    CUSTOM_LV_KEYBOARD_CTRL_BTN_FLAGS | 6, LV_KB_BTN(3), LV_KB_BTN(3), LV_KB_BTN(3), LV_KB_BTN(3), LV_KB_BTN(3), LV_KB_BTN(3), LV_KB_BTN(3), LV_KB_BTN(3), LV_KB_BTN(3), LV_BTNMATRIX_CTRL_CHECKED | LV_KB_BTN(7),
    LV_BTNMATRIX_CTRL_CHECKED | LV_KB_BTN(1), LV_BTNMATRIX_CTRL_CHECKED | LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_BTNMATRIX_CTRL_CHECKED | LV_KB_BTN(1), LV_BTNMATRIX_CTRL_CHECKED | LV_KB_BTN(1), LV_BTNMATRIX_CTRL_CHECKED | LV_KB_BTN(1),
    CUSTOM_LV_KEYBOARD_CTRL_BTN_FLAGS | 2, LV_BTNMATRIX_CTRL_CHECKED | 2, 6, LV_BTNMATRIX_CTRL_CHECKED | 2, CUSTOM_LV_KEYBOARD_CTRL_BTN_FLAGS | 2
};

const char * custom_kb_map_spec[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "0", LV_SYMBOL_BACKSPACE, "\n",
                                                   "abc", "+", "&", "/", "*", "=", "%", "!", "?", "#", "<", ">", "\n",
                                                   "\\",  "@", "$", "(", ")", "{", "}", "[", "]", ";", "\"", "'", "\n",
                                                   LV_SYMBOL_KEYBOARD, LV_SYMBOL_LEFT, " ", LV_SYMBOL_RIGHT, LV_SYMBOL_OK, ""
                                                  };

const lv_btnmatrix_ctrl_t custom_kb_ctrl_spec_map[] = {
    LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_BTNMATRIX_CTRL_CHECKED | LV_KB_BTN(2),
    CUSTOM_LV_KEYBOARD_CTRL_BTN_FLAGS | 2, LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1),
    LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1), LV_KB_BTN(1),
    CUSTOM_LV_KEYBOARD_CTRL_BTN_FLAGS | 2, LV_BTNMATRIX_CTRL_CHECKED | 2, 6, LV_BTNMATRIX_CTRL_CHECKED | 2, CUSTOM_LV_KEYBOARD_CTRL_BTN_FLAGS | 2
};

const char * custom_kb_map_num[] = {"1", "2", "3", LV_SYMBOL_KEYBOARD, "\n",
                                                  "4", "5", "6", LV_SYMBOL_OK, "\n",
                                                  "7", "8", "9", LV_SYMBOL_BACKSPACE, "\n",
                                                  "+/-", "0", ".", LV_SYMBOL_LEFT, LV_SYMBOL_RIGHT, ""
                                                 };

const lv_btnmatrix_ctrl_t custom_kb_ctrl_num_map[] = {
    1, 1, 1, CUSTOM_LV_KEYBOARD_CTRL_BTN_FLAGS | 2,
    1, 1, 1, CUSTOM_LV_KEYBOARD_CTRL_BTN_FLAGS | 2,
    1, 1, 1, 2,
    1, 1, 1, 1, 1
};


static void ta_kb_event_cb(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *ta = lv_event_get_target(e);
    lv_obj_t *kb = (lv_obj_t *)lv_event_get_user_data(e);
    if (code == LV_EVENT_FOCUSED)
    {
        lv_keyboard_set_textarea(kb, ta);
        lv_obj_clear_flag(kb, LV_OBJ_FLAG_HIDDEN);
    }
    else if (code == LV_EVENT_DEFOCUSED)
    {
        lv_keyboard_set_textarea(kb, NULL);
        lv_obj_add_flag(kb, LV_OBJ_FLAG_HIDDEN);
        
    }
    else if (code == LV_EVENT_READY)
    {
        const char * txt = lv_textarea_get_text(ta);
        lv_textarea_set_text(ta_source, txt);
        lv_keyboard_set_textarea(kb, NULL);
        lv_obj_add_flag(kb, LV_OBJ_FLAG_HIDDEN);
        lv_obj_t* obj_parent = lv_obj_get_parent(ta);
        lv_obj_del_delayed(obj_parent, 1);
    }
}

static void kb_event_value_change(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *kb = lv_event_get_target(e);
    if ((code == LV_EVENT_PRESSED) || (code == LV_EVENT_PRESSING) || (code == LV_EVENT_LONG_PRESSED_REPEAT))
    {
        lv_obj_clear_flag(ta_zoomed, LV_OBJ_FLAG_HIDDEN);
        uint16_t btn = lv_btnmatrix_get_selected_btn(kb);
        if (btn != LV_BTNMATRIX_BTN_NONE)
        {
            const char * txt = lv_btnmatrix_get_btn_text(kb, btn);
            lv_textarea_set_text(ta_zoomed, txt);
        }
        
    }
    else if (code == LV_EVENT_RELEASED)
    {   
        lv_obj_add_flag(ta_zoomed, LV_OBJ_FLAG_HIDDEN);
    }
}

void lv_custom_kb_create(lv_event_t *e)
{
    ta_source = lv_event_get_target(e);
    lv_obj_t * obj = lv_obj_create(lv_layer_top());
    lv_obj_set_size(obj, 240, 240);
    lv_obj_align(obj, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0x000000), 0);
    lv_obj_set_style_border_width(obj, 0, 0);  
    lv_obj_set_style_pad_all(obj, 0, 0); 

    /*Create a keyboard to use it with an of the text areas*/
    lv_obj_t *kb = lv_keyboard_create(obj);
    lv_obj_add_event_cb(kb, kb_event_value_change, LV_EVENT_ALL, NULL);
    lv_obj_clear_flag(kb, LV_OBJ_FLAG_CLICK_FOCUSABLE);
    lv_keyboard_set_popovers(kb, true);
    lv_keyboard_set_map(kb, LV_KEYBOARD_MODE_TEXT_LOWER, custom_kb_map_lc, custom_kb_ctrl_lc_map);
    lv_keyboard_set_map(kb, LV_KEYBOARD_MODE_TEXT_UPPER, custom_kb_map_uc, custom_kb_ctrl_uc_map);
    lv_keyboard_set_map(kb, LV_KEYBOARD_MODE_SPECIAL, custom_kb_map_spec, custom_kb_ctrl_spec_map);
    lv_keyboard_set_map(kb, LV_KEYBOARD_MODE_NUMBER, custom_kb_map_num, custom_kb_ctrl_num_map);

    /*Create a text area. The keyboard will write here*/
    lv_obj_t *ta;
    ta = lv_textarea_create(obj);
    lv_obj_align(ta, LV_ALIGN_TOP_MID, 0, 5);
    lv_obj_add_event_cb(ta, ta_kb_event_cb, LV_EVENT_ALL, kb);
    lv_obj_set_size(ta, 200, 50);
    static lv_style_t style1;
    lv_style_init(&style1);
    lv_style_set_text_font(&style1, &lv_font_montserrat_14);
    lv_obj_add_style(ta, &style1, 0);


    /* ta zoomed */
    ta_zoomed = lv_textarea_create(obj);
    lv_obj_add_flag(ta_zoomed, LV_OBJ_FLAG_HIDDEN);
    lv_textarea_set_one_line(ta_zoomed, true);
    lv_obj_align(ta_zoomed, LV_ALIGN_TOP_MID, 0, 65);
    lv_obj_add_event_cb(ta_zoomed, ta_kb_event_cb, LV_EVENT_ALL, kb);
    lv_obj_set_size(ta_zoomed, 80, 50);

    static lv_style_t style2;
    lv_style_init(&style2);
     lv_style_set_text_align(&style2, LV_TEXT_ALIGN_CENTER);
    lv_style_set_text_font(&style2, &lv_font_montserrat_24);
    lv_obj_add_style(ta_zoomed, &style2, 0);

    const char * txt = lv_textarea_get_text(ta_source);
    lv_textarea_set_text(ta, txt);

    lv_keyboard_set_textarea(kb, ta);
}