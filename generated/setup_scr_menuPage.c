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



void setup_scr_menuPage(lv_ui *ui)
{
	//Write codes menuPage
	ui->menuPage = lv_obj_create(NULL);
	lv_obj_set_size(ui->menuPage, 800, 480);
	lv_obj_set_scrollbar_mode(ui->menuPage, LV_SCROLLBAR_MODE_OFF);

	//Write style for menuPage, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->menuPage, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->menuPage, lv_color_hex(0xf6f6f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->menuPage, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menuPage_healthy_info
	ui->menuPage_healthy_info = lv_obj_create(ui->menuPage);
	lv_obj_set_pos(ui->menuPage_healthy_info, 478, 70);
	lv_obj_set_size(ui->menuPage_healthy_info, 300, 300);
	lv_obj_set_scrollbar_mode(ui->menuPage_healthy_info, LV_SCROLLBAR_MODE_OFF);

	//Write style for menuPage_healthy_info, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menuPage_healthy_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menuPage_healthy_info, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menuPage_healthy_info, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->menuPage_healthy_info, lv_color_hex(0xf6f6f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->menuPage_healthy_info, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menuPage_healthy_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menuPage_healthy_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menuPage_healthy_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menuPage_healthy_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menuPage_healthy_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menuPage_BP_cont
	ui->menuPage_BP_cont = lv_obj_create(ui->menuPage_healthy_info);
	lv_obj_set_pos(ui->menuPage_BP_cont, 160, 160);
	lv_obj_set_size(ui->menuPage_BP_cont, 120, 120);
	lv_obj_set_scrollbar_mode(ui->menuPage_BP_cont, LV_SCROLLBAR_MODE_OFF);

	//Write style for menuPage_BP_cont, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menuPage_BP_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menuPage_BP_cont, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menuPage_BP_cont, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->menuPage_BP_cont, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->menuPage_BP_cont, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menuPage_BP_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menuPage_BP_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menuPage_BP_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menuPage_BP_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menuPage_BP_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menuPage_BP_label
	ui->menuPage_BP_label = lv_label_create(ui->menuPage_BP_cont);
	lv_label_set_text(ui->menuPage_BP_label, "血压");
	lv_label_set_long_mode(ui->menuPage_BP_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->menuPage_BP_label, 15, 80);
	lv_obj_set_size(ui->menuPage_BP_label, 90, 40);

	//Write style for menuPage_BP_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menuPage_BP_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menuPage_BP_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menuPage_BP_label, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menuPage_BP_label, &lv_font_SourceHanSerifSC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->menuPage_BP_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->menuPage_BP_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->menuPage_BP_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menuPage_BP_label, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menuPage_BP_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menuPage_BP_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menuPage_BP_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menuPage_BP_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menuPage_BP_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menuPage_BP_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menuPage_BP_img
	ui->menuPage_BP_img = lv_img_create(ui->menuPage_BP_cont);
	lv_obj_add_flag(ui->menuPage_BP_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->menuPage_BP_img, &_BP_alpha_50x50);
	lv_img_set_pivot(ui->menuPage_BP_img, 50,50);
	lv_img_set_angle(ui->menuPage_BP_img, 0);
	lv_obj_set_pos(ui->menuPage_BP_img, 5, 5);
	lv_obj_set_size(ui->menuPage_BP_img, 50, 50);

	//Write style for menuPage_BP_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->menuPage_BP_img, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->menuPage_BP_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menuPage_BP_img, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->menuPage_BP_img, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menuPage_Sleep_cont
	ui->menuPage_Sleep_cont = lv_obj_create(ui->menuPage_healthy_info);
	lv_obj_set_pos(ui->menuPage_Sleep_cont, 20, 160);
	lv_obj_set_size(ui->menuPage_Sleep_cont, 120, 120);
	lv_obj_set_scrollbar_mode(ui->menuPage_Sleep_cont, LV_SCROLLBAR_MODE_OFF);

	//Write style for menuPage_Sleep_cont, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menuPage_Sleep_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menuPage_Sleep_cont, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menuPage_Sleep_cont, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->menuPage_Sleep_cont, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->menuPage_Sleep_cont, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menuPage_Sleep_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menuPage_Sleep_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menuPage_Sleep_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menuPage_Sleep_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menuPage_Sleep_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menuPage_Sleep_label
	ui->menuPage_Sleep_label = lv_label_create(ui->menuPage_Sleep_cont);
	lv_label_set_text(ui->menuPage_Sleep_label, "睡眠");
	lv_label_set_long_mode(ui->menuPage_Sleep_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->menuPage_Sleep_label, 15, 80);
	lv_obj_set_size(ui->menuPage_Sleep_label, 90, 40);

	//Write style for menuPage_Sleep_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menuPage_Sleep_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menuPage_Sleep_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menuPage_Sleep_label, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menuPage_Sleep_label, &lv_font_SourceHanSerifSC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->menuPage_Sleep_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->menuPage_Sleep_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->menuPage_Sleep_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menuPage_Sleep_label, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menuPage_Sleep_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menuPage_Sleep_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menuPage_Sleep_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menuPage_Sleep_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menuPage_Sleep_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menuPage_Sleep_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menuPage_sleep_img
	ui->menuPage_sleep_img = lv_img_create(ui->menuPage_Sleep_cont);
	lv_obj_add_flag(ui->menuPage_sleep_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->menuPage_sleep_img, &_sleep_alpha_50x50);
	lv_img_set_pivot(ui->menuPage_sleep_img, 50,50);
	lv_img_set_angle(ui->menuPage_sleep_img, 0);
	lv_obj_set_pos(ui->menuPage_sleep_img, 5, 5);
	lv_obj_set_size(ui->menuPage_sleep_img, 50, 50);

	//Write style for menuPage_sleep_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->menuPage_sleep_img, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->menuPage_sleep_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menuPage_sleep_img, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->menuPage_sleep_img, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menuPage_O2_cont
	ui->menuPage_O2_cont = lv_obj_create(ui->menuPage_healthy_info);
	lv_obj_set_pos(ui->menuPage_O2_cont, 160, 20);
	lv_obj_set_size(ui->menuPage_O2_cont, 120, 120);
	lv_obj_set_scrollbar_mode(ui->menuPage_O2_cont, LV_SCROLLBAR_MODE_OFF);

	//Write style for menuPage_O2_cont, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menuPage_O2_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menuPage_O2_cont, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menuPage_O2_cont, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->menuPage_O2_cont, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->menuPage_O2_cont, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menuPage_O2_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menuPage_O2_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menuPage_O2_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menuPage_O2_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menuPage_O2_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menuPage_O2_label
	ui->menuPage_O2_label = lv_label_create(ui->menuPage_O2_cont);
	lv_label_set_text(ui->menuPage_O2_label, "血氧");
	lv_label_set_long_mode(ui->menuPage_O2_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->menuPage_O2_label, 15, 80);
	lv_obj_set_size(ui->menuPage_O2_label, 90, 40);

	//Write style for menuPage_O2_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menuPage_O2_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menuPage_O2_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menuPage_O2_label, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menuPage_O2_label, &lv_font_SourceHanSerifSC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->menuPage_O2_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->menuPage_O2_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->menuPage_O2_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menuPage_O2_label, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menuPage_O2_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menuPage_O2_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menuPage_O2_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menuPage_O2_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menuPage_O2_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menuPage_O2_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menuPage_O2_img
	ui->menuPage_O2_img = lv_img_create(ui->menuPage_O2_cont);
	lv_obj_add_flag(ui->menuPage_O2_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->menuPage_O2_img, &_SO2_alpha_50x50);
	lv_img_set_pivot(ui->menuPage_O2_img, 50,50);
	lv_img_set_angle(ui->menuPage_O2_img, 0);
	lv_obj_set_pos(ui->menuPage_O2_img, 5, 5);
	lv_obj_set_size(ui->menuPage_O2_img, 50, 50);

	//Write style for menuPage_O2_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->menuPage_O2_img, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->menuPage_O2_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menuPage_O2_img, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->menuPage_O2_img, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menuPage_HR_cont
	ui->menuPage_HR_cont = lv_obj_create(ui->menuPage_healthy_info);
	lv_obj_set_pos(ui->menuPage_HR_cont, 19, 19);
	lv_obj_set_size(ui->menuPage_HR_cont, 120, 120);
	lv_obj_set_scrollbar_mode(ui->menuPage_HR_cont, LV_SCROLLBAR_MODE_OFF);

	//Write style for menuPage_HR_cont, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menuPage_HR_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menuPage_HR_cont, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menuPage_HR_cont, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->menuPage_HR_cont, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->menuPage_HR_cont, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menuPage_HR_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menuPage_HR_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menuPage_HR_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menuPage_HR_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menuPage_HR_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menuPage_HR_label
	ui->menuPage_HR_label = lv_label_create(ui->menuPage_HR_cont);
	lv_label_set_text(ui->menuPage_HR_label, "心率");
	lv_label_set_long_mode(ui->menuPage_HR_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->menuPage_HR_label, 15, 80);
	lv_obj_set_size(ui->menuPage_HR_label, 90, 40);

	//Write style for menuPage_HR_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menuPage_HR_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menuPage_HR_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menuPage_HR_label, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menuPage_HR_label, &lv_font_SourceHanSerifSC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->menuPage_HR_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->menuPage_HR_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->menuPage_HR_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menuPage_HR_label, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menuPage_HR_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menuPage_HR_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menuPage_HR_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menuPage_HR_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menuPage_HR_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menuPage_HR_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menuPage_HR_img
	ui->menuPage_HR_img = lv_img_create(ui->menuPage_HR_cont);
	lv_obj_add_flag(ui->menuPage_HR_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->menuPage_HR_img, &_heartRate_alpha_50x50);
	lv_img_set_pivot(ui->menuPage_HR_img, 50,50);
	lv_img_set_angle(ui->menuPage_HR_img, 0);
	lv_obj_set_pos(ui->menuPage_HR_img, 5, 5);
	lv_obj_set_size(ui->menuPage_HR_img, 50, 50);

	//Write style for menuPage_HR_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->menuPage_HR_img, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->menuPage_HR_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menuPage_HR_img, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->menuPage_HR_img, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menuPage_bottom_bar
	ui->menuPage_bottom_bar = lv_obj_create(ui->menuPage);
	lv_obj_set_pos(ui->menuPage_bottom_bar, 0, 400);
	lv_obj_set_size(ui->menuPage_bottom_bar, 800, 80);
	lv_obj_set_scrollbar_mode(ui->menuPage_bottom_bar, LV_SCROLLBAR_MODE_OFF);

	//Write style for menuPage_bottom_bar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menuPage_bottom_bar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menuPage_bottom_bar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menuPage_bottom_bar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->menuPage_bottom_bar, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->menuPage_bottom_bar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menuPage_bottom_bar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menuPage_bottom_bar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menuPage_bottom_bar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menuPage_bottom_bar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menuPage_bottom_bar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menuPage_exercise_btn
	ui->menuPage_exercise_btn = lv_btn_create(ui->menuPage_bottom_bar);
	ui->menuPage_exercise_btn_label = lv_label_create(ui->menuPage_exercise_btn);
	lv_label_set_text(ui->menuPage_exercise_btn_label, "认知训练");
	lv_label_set_long_mode(ui->menuPage_exercise_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->menuPage_exercise_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->menuPage_exercise_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->menuPage_exercise_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->menuPage_exercise_btn, 0, 15);
	lv_obj_set_size(ui->menuPage_exercise_btn, 200, 50);

	//Write style for menuPage_exercise_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->menuPage_exercise_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->menuPage_exercise_btn, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->menuPage_exercise_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->menuPage_exercise_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menuPage_exercise_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menuPage_exercise_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menuPage_exercise_btn, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menuPage_exercise_btn, &lv_font_SourceHanSerifSC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->menuPage_exercise_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menuPage_exercise_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menuPage_measure_btn
	ui->menuPage_measure_btn = lv_btn_create(ui->menuPage_bottom_bar);
	ui->menuPage_measure_btn_label = lv_label_create(ui->menuPage_measure_btn);
	lv_label_set_text(ui->menuPage_measure_btn_label, "健康监测");
	lv_label_set_long_mode(ui->menuPage_measure_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->menuPage_measure_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->menuPage_measure_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->menuPage_measure_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->menuPage_measure_btn, 200, 15);
	lv_obj_set_size(ui->menuPage_measure_btn, 200, 50);

	//Write style for menuPage_measure_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->menuPage_measure_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->menuPage_measure_btn, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->menuPage_measure_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->menuPage_measure_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menuPage_measure_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menuPage_measure_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menuPage_measure_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menuPage_measure_btn, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->menuPage_measure_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menuPage_measure_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menuPage_music_Btn
	ui->menuPage_music_Btn = lv_btn_create(ui->menuPage_bottom_bar);
	ui->menuPage_music_Btn_label = lv_label_create(ui->menuPage_music_Btn);
	lv_label_set_text(ui->menuPage_music_Btn_label, "音乐播放");
	lv_label_set_long_mode(ui->menuPage_music_Btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->menuPage_music_Btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->menuPage_music_Btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->menuPage_music_Btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->menuPage_music_Btn, 400, 15);
	lv_obj_set_size(ui->menuPage_music_Btn, 200, 50);

	//Write style for menuPage_music_Btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->menuPage_music_Btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->menuPage_music_Btn, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->menuPage_music_Btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->menuPage_music_Btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menuPage_music_Btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menuPage_music_Btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menuPage_music_Btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menuPage_music_Btn, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->menuPage_music_Btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menuPage_music_Btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menuPage_setting_btn
	ui->menuPage_setting_btn = lv_btn_create(ui->menuPage_bottom_bar);
	ui->menuPage_setting_btn_label = lv_label_create(ui->menuPage_setting_btn);
	lv_label_set_text(ui->menuPage_setting_btn_label, "设置");
	lv_label_set_long_mode(ui->menuPage_setting_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->menuPage_setting_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->menuPage_setting_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->menuPage_setting_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->menuPage_setting_btn, 600, 15);
	lv_obj_set_size(ui->menuPage_setting_btn, 200, 50);

	//Write style for menuPage_setting_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->menuPage_setting_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->menuPage_setting_btn, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->menuPage_setting_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->menuPage_setting_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menuPage_setting_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menuPage_setting_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menuPage_setting_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menuPage_setting_btn, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->menuPage_setting_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menuPage_setting_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menuPage_Record_cont
	ui->menuPage_Record_cont = lv_obj_create(ui->menuPage);
	lv_obj_set_pos(ui->menuPage_Record_cont, 41, 86);
	lv_obj_set_size(ui->menuPage_Record_cont, 400, 120);
	lv_obj_set_scrollbar_mode(ui->menuPage_Record_cont, LV_SCROLLBAR_MODE_OFF);

	//Write style for menuPage_Record_cont, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menuPage_Record_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menuPage_Record_cont, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menuPage_Record_cont, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->menuPage_Record_cont, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->menuPage_Record_cont, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menuPage_Record_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menuPage_Record_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menuPage_Record_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menuPage_Record_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menuPage_Record_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menuPage_arc_3
	ui->menuPage_arc_3 = lv_arc_create(ui->menuPage_Record_cont);
	lv_arc_set_mode(ui->menuPage_arc_3, LV_ARC_MODE_NORMAL);
	lv_arc_set_range(ui->menuPage_arc_3, 0, 59);
	lv_arc_set_bg_angles(ui->menuPage_arc_3, 135, 45);
	lv_arc_set_value(ui->menuPage_arc_3, 58);
	lv_arc_set_rotation(ui->menuPage_arc_3, 0);
	lv_obj_set_style_arc_rounded(ui->menuPage_arc_3, 0,  LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_rounded(ui->menuPage_arc_3, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->menuPage_arc_3, 261, 4);
	lv_obj_set_size(ui->menuPage_arc_3, 133, 136);

	//Write style for menuPage_arc_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->menuPage_arc_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->menuPage_arc_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_width(ui->menuPage_arc_3, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->menuPage_arc_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->menuPage_arc_3, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menuPage_arc_3, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menuPage_arc_3, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menuPage_arc_3, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menuPage_arc_3, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menuPage_arc_3, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menuPage_arc_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for menuPage_arc_3, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_arc_width(ui->menuPage_arc_3, 12, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->menuPage_arc_3, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->menuPage_arc_3, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style for menuPage_arc_3, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->menuPage_arc_3, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->menuPage_arc_3, lv_color_hex(0x2195f6), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->menuPage_arc_3, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->menuPage_arc_3, 5, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes menuPage_arc_2
	ui->menuPage_arc_2 = lv_arc_create(ui->menuPage_arc_3);
	lv_arc_set_mode(ui->menuPage_arc_2, LV_ARC_MODE_NORMAL);
	lv_arc_set_range(ui->menuPage_arc_2, 0, 59);
	lv_arc_set_bg_angles(ui->menuPage_arc_2, 135, 45);
	lv_arc_set_value(ui->menuPage_arc_2, 58);
	lv_arc_set_rotation(ui->menuPage_arc_2, 0);
	lv_obj_set_style_arc_rounded(ui->menuPage_arc_2, 0,  LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_rounded(ui->menuPage_arc_2, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->menuPage_arc_2, 10, 10);
	lv_obj_set_size(ui->menuPage_arc_2, 109, 103);

	//Write style for menuPage_arc_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->menuPage_arc_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->menuPage_arc_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_width(ui->menuPage_arc_2, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->menuPage_arc_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->menuPage_arc_2, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menuPage_arc_2, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menuPage_arc_2, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menuPage_arc_2, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menuPage_arc_2, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menuPage_arc_2, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menuPage_arc_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for menuPage_arc_2, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_arc_width(ui->menuPage_arc_2, 12, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->menuPage_arc_2, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->menuPage_arc_2, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style for menuPage_arc_2, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->menuPage_arc_2, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->menuPage_arc_2, lv_color_hex(0x2195f6), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->menuPage_arc_2, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->menuPage_arc_2, 5, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes menuPage_arc_1
	ui->menuPage_arc_1 = lv_arc_create(ui->menuPage_arc_2);
	lv_arc_set_mode(ui->menuPage_arc_1, LV_ARC_MODE_NORMAL);
	lv_arc_set_range(ui->menuPage_arc_1, 0, 59);
	lv_arc_set_bg_angles(ui->menuPage_arc_1, 135, 45);
	lv_arc_set_value(ui->menuPage_arc_1, 58);
	lv_arc_set_rotation(ui->menuPage_arc_1, 0);
	lv_obj_set_style_arc_rounded(ui->menuPage_arc_1, 0,  LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_rounded(ui->menuPage_arc_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->menuPage_arc_1, 0, 0);
	lv_obj_set_size(ui->menuPage_arc_1, 83, 68);

	//Write style for menuPage_arc_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->menuPage_arc_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->menuPage_arc_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_width(ui->menuPage_arc_1, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->menuPage_arc_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->menuPage_arc_1, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menuPage_arc_1, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menuPage_arc_1, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menuPage_arc_1, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menuPage_arc_1, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menuPage_arc_1, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menuPage_arc_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for menuPage_arc_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_arc_width(ui->menuPage_arc_1, 12, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->menuPage_arc_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->menuPage_arc_1, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style for menuPage_arc_1, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->menuPage_arc_1, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->menuPage_arc_1, lv_color_hex(0x2195f6), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->menuPage_arc_1, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->menuPage_arc_1, 5, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes menuPage_info_cont
	ui->menuPage_info_cont = lv_obj_create(ui->menuPage);
	lv_obj_set_pos(ui->menuPage_info_cont, 38, 235);
	lv_obj_set_size(ui->menuPage_info_cont, 400, 120);
	lv_obj_set_scrollbar_mode(ui->menuPage_info_cont, LV_SCROLLBAR_MODE_OFF);

	//Write style for menuPage_info_cont, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menuPage_info_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menuPage_info_cont, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menuPage_info_cont, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->menuPage_info_cont, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->menuPage_info_cont, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menuPage_info_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menuPage_info_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menuPage_info_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menuPage_info_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menuPage_info_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menuPage_docotr_img
	ui->menuPage_docotr_img = lv_img_create(ui->menuPage);
	lv_obj_add_flag(ui->menuPage_docotr_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->menuPage_docotr_img, &_doctor_alpha_144x145);
	lv_img_set_pivot(ui->menuPage_docotr_img, 50,50);
	lv_img_set_angle(ui->menuPage_docotr_img, 0);
	lv_obj_set_pos(ui->menuPage_docotr_img, 26, 211);
	lv_obj_set_size(ui->menuPage_docotr_img, 144, 145);

	//Write style for menuPage_docotr_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->menuPage_docotr_img, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->menuPage_docotr_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menuPage_docotr_img, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->menuPage_docotr_img, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of menuPage.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->menuPage);

	//Init events for screen.
	events_init_menuPage(ui);
}
