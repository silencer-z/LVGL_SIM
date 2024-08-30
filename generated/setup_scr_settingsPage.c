/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_settingsPage(lv_ui *ui)
{
	//Write codes settingsPage
	ui->settingsPage = lv_obj_create(NULL);
	lv_obj_set_size(ui->settingsPage, 800, 480);
	lv_obj_set_scrollbar_mode(ui->settingsPage, LV_SCROLLBAR_MODE_OFF);

	//Write style for settingsPage, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->settingsPage, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->settingsPage, lv_color_hex(0xf6f6f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->settingsPage, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes settingsPage_menu_1
	ui->settingsPage_menu_1 = lv_menu_create(ui->settingsPage);

	//Create sidebar page for menu settingsPage_menu_1
	ui->settingsPage_menu_1_sidebar_page = lv_menu_page_create(ui->settingsPage_menu_1, "menu");
	lv_menu_set_sidebar_page(ui->settingsPage_menu_1, ui->settingsPage_menu_1_sidebar_page);
	lv_obj_set_scrollbar_mode(ui->settingsPage_menu_1_sidebar_page, LV_SCROLLBAR_MODE_OFF);

	//Create subpage for settingsPage_menu_1
	ui->settingsPage_menu_1_subpage_1 = lv_menu_page_create(ui->settingsPage_menu_1, NULL);
	ui->settingsPage_menu_1_cont_1 = lv_menu_cont_create(ui->settingsPage_menu_1_sidebar_page);
	ui->settingsPage_menu_1_label_1 = lv_label_create(ui->settingsPage_menu_1_cont_1);
	lv_label_set_text(ui->settingsPage_menu_1_label_1, "item");
	lv_obj_set_size(ui->settingsPage_menu_1_label_1, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_set_scrollbar_mode(ui->settingsPage_menu_1_subpage_1, LV_SCROLLBAR_MODE_OFF);
	lv_menu_set_load_page_event(ui->settingsPage_menu_1, ui->settingsPage_menu_1_cont_1, ui->settingsPage_menu_1_subpage_1);

	//Create subpage for settingsPage_menu_1
	ui->settingsPage_menu_1_subpage_2 = lv_menu_page_create(ui->settingsPage_menu_1, NULL);
	ui->settingsPage_menu_1_cont_2 = lv_menu_cont_create(ui->settingsPage_menu_1_sidebar_page);
	ui->settingsPage_menu_1_label_2 = lv_label_create(ui->settingsPage_menu_1_cont_2);
	lv_label_set_text(ui->settingsPage_menu_1_label_2, "item");
	lv_obj_set_size(ui->settingsPage_menu_1_label_2, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_set_scrollbar_mode(ui->settingsPage_menu_1_subpage_2, LV_SCROLLBAR_MODE_OFF);
	lv_menu_set_load_page_event(ui->settingsPage_menu_1, ui->settingsPage_menu_1_cont_2, ui->settingsPage_menu_1_subpage_2);

	//Create subpage for settingsPage_menu_1
	ui->settingsPage_menu_1_subpage_3 = lv_menu_page_create(ui->settingsPage_menu_1, NULL);
	ui->settingsPage_menu_1_cont_3 = lv_menu_cont_create(ui->settingsPage_menu_1_sidebar_page);
	ui->settingsPage_menu_1_label_3 = lv_label_create(ui->settingsPage_menu_1_cont_3);
	lv_label_set_text(ui->settingsPage_menu_1_label_3, "item");
	lv_obj_set_size(ui->settingsPage_menu_1_label_3, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_set_scrollbar_mode(ui->settingsPage_menu_1_subpage_3, LV_SCROLLBAR_MODE_OFF);
	lv_menu_set_load_page_event(ui->settingsPage_menu_1, ui->settingsPage_menu_1_cont_3, ui->settingsPage_menu_1_subpage_3);
	lv_event_send(ui->settingsPage_menu_1_cont_1, LV_EVENT_CLICKED, NULL);
	lv_obj_set_pos(ui->settingsPage_menu_1, 0, 0);
	lv_obj_set_size(ui->settingsPage_menu_1, 800, 480);
	lv_obj_set_scrollbar_mode(ui->settingsPage_menu_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for settingsPage_menu_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->settingsPage_menu_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->settingsPage_menu_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->settingsPage_menu_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->settingsPage_menu_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->settingsPage_menu_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_settingsPage_menu_1_extra_sidebar_page_main_default
	static lv_style_t style_settingsPage_menu_1_extra_sidebar_page_main_default;
	ui_init_style(&style_settingsPage_menu_1_extra_sidebar_page_main_default);
	
	lv_style_set_bg_opa(&style_settingsPage_menu_1_extra_sidebar_page_main_default, 255);
	lv_style_set_bg_color(&style_settingsPage_menu_1_extra_sidebar_page_main_default, lv_color_hex(0xdaf2f8));
	lv_style_set_bg_grad_dir(&style_settingsPage_menu_1_extra_sidebar_page_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_radius(&style_settingsPage_menu_1_extra_sidebar_page_main_default, 0);
	lv_obj_add_style(ui->settingsPage_menu_1_sidebar_page, &style_settingsPage_menu_1_extra_sidebar_page_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_settingsPage_menu_1_extra_option_btns_main_default
	static lv_style_t style_settingsPage_menu_1_extra_option_btns_main_default;
	ui_init_style(&style_settingsPage_menu_1_extra_option_btns_main_default);
	
	lv_style_set_text_color(&style_settingsPage_menu_1_extra_option_btns_main_default, lv_color_hex(0x151212));
	lv_style_set_text_font(&style_settingsPage_menu_1_extra_option_btns_main_default, &lv_font_montserratMedium_12);
	lv_style_set_text_opa(&style_settingsPage_menu_1_extra_option_btns_main_default, 255);
	lv_style_set_text_align(&style_settingsPage_menu_1_extra_option_btns_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_top(&style_settingsPage_menu_1_extra_option_btns_main_default, 10);
	lv_style_set_pad_bottom(&style_settingsPage_menu_1_extra_option_btns_main_default, 10);
	lv_obj_add_style(ui->settingsPage_menu_1_cont_3, &style_settingsPage_menu_1_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_style(ui->settingsPage_menu_1_cont_2, &style_settingsPage_menu_1_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_style(ui->settingsPage_menu_1_cont_1, &style_settingsPage_menu_1_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_CHECKED for &style_settingsPage_menu_1_extra_option_btns_main_checked
	static lv_style_t style_settingsPage_menu_1_extra_option_btns_main_checked;
	ui_init_style(&style_settingsPage_menu_1_extra_option_btns_main_checked);
	
	lv_style_set_text_color(&style_settingsPage_menu_1_extra_option_btns_main_checked, lv_color_hex(0x9ab700));
	lv_style_set_text_font(&style_settingsPage_menu_1_extra_option_btns_main_checked, &lv_font_montserratMedium_12);
	lv_style_set_text_opa(&style_settingsPage_menu_1_extra_option_btns_main_checked, 255);
	lv_style_set_text_align(&style_settingsPage_menu_1_extra_option_btns_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_border_width(&style_settingsPage_menu_1_extra_option_btns_main_checked, 0);
	lv_style_set_radius(&style_settingsPage_menu_1_extra_option_btns_main_checked, 0);
	lv_style_set_bg_opa(&style_settingsPage_menu_1_extra_option_btns_main_checked, 60);
	lv_style_set_bg_color(&style_settingsPage_menu_1_extra_option_btns_main_checked, lv_color_hex(0x00e0b8));
	lv_style_set_bg_grad_dir(&style_settingsPage_menu_1_extra_option_btns_main_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(ui->settingsPage_menu_1_cont_3, &style_settingsPage_menu_1_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_add_style(ui->settingsPage_menu_1_cont_2, &style_settingsPage_menu_1_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_add_style(ui->settingsPage_menu_1_cont_1, &style_settingsPage_menu_1_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_settingsPage_menu_1_extra_main_title_main_default
	static lv_style_t style_settingsPage_menu_1_extra_main_title_main_default;
	ui_init_style(&style_settingsPage_menu_1_extra_main_title_main_default);
	
	lv_style_set_text_color(&style_settingsPage_menu_1_extra_main_title_main_default, lv_color_hex(0x41485a));
	lv_style_set_text_font(&style_settingsPage_menu_1_extra_main_title_main_default, &lv_font_montserratMedium_12);
	lv_style_set_text_opa(&style_settingsPage_menu_1_extra_main_title_main_default, 255);
	lv_style_set_text_align(&style_settingsPage_menu_1_extra_main_title_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_bg_opa(&style_settingsPage_menu_1_extra_main_title_main_default, 255);
	lv_style_set_bg_color(&style_settingsPage_menu_1_extra_main_title_main_default, lv_color_hex(0xffffff));
	lv_style_set_bg_grad_dir(&style_settingsPage_menu_1_extra_main_title_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_pad_top(&style_settingsPage_menu_1_extra_main_title_main_default, 0);
	lv_style_set_pad_bottom(&style_settingsPage_menu_1_extra_main_title_main_default, 0);
	lv_menu_t * settingsPage_menu_1_menu= (lv_menu_t *)ui->settingsPage_menu_1;
	lv_obj_t * settingsPage_menu_1_title = settingsPage_menu_1_menu->sidebar_header_title;
	lv_obj_set_size(settingsPage_menu_1_title, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_add_style(lv_menu_get_sidebar_header(ui->settingsPage_menu_1), &style_settingsPage_menu_1_extra_main_title_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);







	//The custom code of settingsPage.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->settingsPage);

}
