/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

typedef struct
{
  
	lv_obj_t *menuPage;
	bool menuPage_del;
	lv_obj_t *menuPage_healthy_info;
	lv_obj_t *menuPage_BP_cont;
	lv_obj_t *menuPage_BP_label;
	lv_obj_t *menuPage_BP_img;
	lv_obj_t *menuPage_Sleep_cont;
	lv_obj_t *menuPage_Sleep_label;
	lv_obj_t *menuPage_sleep_img;
	lv_obj_t *menuPage_O2_cont;
	lv_obj_t *menuPage_O2_label;
	lv_obj_t *menuPage_O2_img;
	lv_obj_t *menuPage_HR_cont;
	lv_obj_t *menuPage_HR_label;
	lv_obj_t *menuPage_HR_img;
	lv_obj_t *menuPage_bottom_bar;
	lv_obj_t *menuPage_exercise_btn;
	lv_obj_t *menuPage_exercise_btn_label;
	lv_obj_t *menuPage_measure_btn;
	lv_obj_t *menuPage_measure_btn_label;
	lv_obj_t *menuPage_music_Btn;
	lv_obj_t *menuPage_music_Btn_label;
	lv_obj_t *menuPage_setting_btn;
	lv_obj_t *menuPage_setting_btn_label;
	lv_obj_t *menuPage_Record_cont;
	lv_obj_t *menuPage_arc_3;
	lv_obj_t *menuPage_arc_2;
	lv_obj_t *menuPage_arc_1;
	lv_obj_t *menuPage_info_cont;
	lv_obj_t *menuPage_docotr_img;
	lv_obj_t *dataPage;
	bool dataPage_del;
	lv_obj_t *dataPage_chart_1;
	lv_chart_series_t *dataPage_chart_1_0;
	lv_obj_t *dataPage_cont_1;
	lv_obj_t *dataPage_label_1;
	lv_obj_t *settingsPage;
	bool settingsPage_del;
	lv_obj_t *settingsPage_menu_1;
	lv_obj_t *settingsPage_menu_1_sidebar_page;
	lv_obj_t *settingsPage_menu_1_subpage_1;
	lv_obj_t *settingsPage_menu_1_cont_1;
	lv_obj_t *settingsPage_menu_1_label_1;
	lv_obj_t *settingsPage_menu_1_subpage_2;
	lv_obj_t *settingsPage_menu_1_cont_2;
	lv_obj_t *settingsPage_menu_1_label_2;
	lv_obj_t *settingsPage_menu_1_subpage_3;
	lv_obj_t *settingsPage_menu_1_cont_3;
	lv_obj_t *settingsPage_menu_1_label_3;
	lv_obj_t *functionPage;
	bool functionPage_del;
	lv_obj_t *musicPage;
	bool musicPage_del;
}lv_ui;

typedef void (*ui_setup_scr_t)(lv_ui * ui);

void ui_init_style(lv_style_t * style);

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,
                           lv_scr_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del);

void ui_animation(void * var, int32_t duration, int32_t delay, int32_t start_value, int32_t end_value, lv_anim_path_cb_t path_cb,
                       uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                       lv_anim_exec_xcb_t exec_cb, lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);


void init_scr_del_flag(lv_ui *ui);

void setup_ui(lv_ui *ui);


extern lv_ui guider_ui;


void setup_scr_menuPage(lv_ui *ui);
void setup_scr_dataPage(lv_ui *ui);
void setup_scr_settingsPage(lv_ui *ui);
void setup_scr_functionPage(lv_ui *ui);
void setup_scr_musicPage(lv_ui *ui);
LV_IMG_DECLARE(_BP_alpha_50x50);
LV_IMG_DECLARE(_sleep_alpha_50x50);
LV_IMG_DECLARE(_SO2_alpha_50x50);
LV_IMG_DECLARE(_heartRate_alpha_50x50);
LV_IMG_DECLARE(_doctor_alpha_144x145);

LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_30)
LV_FONT_DECLARE(lv_font_montserratMedium_16)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_20)
LV_FONT_DECLARE(lv_font_montserratMedium_12)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_16)


#ifdef __cplusplus
}
#endif
#endif
