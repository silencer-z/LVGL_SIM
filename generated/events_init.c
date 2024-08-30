/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

#if LV_USE_GUIDER_SIMULATOR && LV_USE_FREEMASTER
#include "freemaster_client.h"
#endif


static void menuPage_exercise_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.settingsPage, guider_ui.settingsPage_del, &guider_ui.menuPage_del, setup_scr_settingsPage, LV_SCR_LOAD_ANIM_OVER_TOP, 200, 200, false, true);
		break;
	}
    default:
        break;
    }
}

static void menuPage_measure_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.dataPage, guider_ui.dataPage_del, &guider_ui.menuPage_del, setup_scr_dataPage, LV_SCR_LOAD_ANIM_OVER_BOTTOM, 200, 200, false, true);
		break;
	}
    default:
        break;
    }
}

static void menuPage_music_Btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.musicPage, guider_ui.musicPage_del, &guider_ui.menuPage_del, setup_scr_musicPage, LV_SCR_LOAD_ANIM_OVER_TOP, 200, 200, false, true);
		break;
	}
    default:
        break;
    }
}

static void menuPage_setting_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.settingsPage, guider_ui.settingsPage_del, &guider_ui.menuPage_del, setup_scr_settingsPage, LV_SCR_LOAD_ANIM_OVER_BOTTOM, 200, 200, false, true);
		break;
	}
    default:
        break;
    }
}

void events_init_menuPage (lv_ui *ui)
{
	lv_obj_add_event_cb(ui->menuPage_exercise_btn, menuPage_exercise_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->menuPage_measure_btn, menuPage_measure_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->menuPage_music_Btn, menuPage_music_Btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->menuPage_setting_btn, menuPage_setting_btn_event_handler, LV_EVENT_ALL, ui);
}


void events_init(lv_ui *ui)
{

}
