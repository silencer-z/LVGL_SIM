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



void setup_scr_dataPage(lv_ui *ui)
{
	//Write codes dataPage
	ui->dataPage = lv_obj_create(NULL);
	lv_obj_set_size(ui->dataPage, 800, 480);
	lv_obj_set_scrollbar_mode(ui->dataPage, LV_SCROLLBAR_MODE_OFF);

	//Write style for dataPage, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->dataPage, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->dataPage, lv_color_hex(0xf6f6f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->dataPage, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes dataPage_chart_1
	ui->dataPage_chart_1 = lv_chart_create(ui->dataPage);
	lv_chart_set_type(ui->dataPage_chart_1, LV_CHART_TYPE_BAR);
	lv_chart_set_div_line_count(ui->dataPage_chart_1, 3, 5);
	lv_chart_set_point_count(ui->dataPage_chart_1, 5);
	lv_chart_set_range(ui->dataPage_chart_1, LV_CHART_AXIS_PRIMARY_Y, 0, 100);
	lv_chart_set_range(ui->dataPage_chart_1, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
	lv_chart_set_zoom_x(ui->dataPage_chart_1, 256);
	lv_chart_set_zoom_y(ui->dataPage_chart_1, 256);
	ui->dataPage_chart_1_0 = lv_chart_add_series(ui->dataPage_chart_1, lv_color_hex(0x000000), LV_CHART_AXIS_PRIMARY_Y);
#if LV_USE_FREEMASTER == 0
	lv_chart_set_next_value(ui->dataPage_chart_1, ui->dataPage_chart_1_0, 1);
	lv_chart_set_next_value(ui->dataPage_chart_1, ui->dataPage_chart_1_0, 20);
	lv_chart_set_next_value(ui->dataPage_chart_1, ui->dataPage_chart_1_0, 30);
	lv_chart_set_next_value(ui->dataPage_chart_1, ui->dataPage_chart_1_0, 40);
	lv_chart_set_next_value(ui->dataPage_chart_1, ui->dataPage_chart_1_0, 5);
#endif
	lv_obj_set_pos(ui->dataPage_chart_1, 20, 80);
	lv_obj_set_size(ui->dataPage_chart_1, 500, 380);
	lv_obj_set_scrollbar_mode(ui->dataPage_chart_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for dataPage_chart_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->dataPage_chart_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->dataPage_chart_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->dataPage_chart_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->dataPage_chart_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->dataPage_chart_1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_line_width(ui->dataPage_chart_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_line_color(ui->dataPage_chart_1, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_line_opa(ui->dataPage_chart_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->dataPage_chart_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for dataPage_chart_1, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->dataPage_chart_1, lv_color_hex(0x151212), LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->dataPage_chart_1, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->dataPage_chart_1, 255, LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_line_width(ui->dataPage_chart_1, 2, LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_line_color(ui->dataPage_chart_1, lv_color_hex(0xe8e8e8), LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_line_opa(ui->dataPage_chart_1, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

	//Write codes dataPage_cont_1
	ui->dataPage_cont_1 = lv_obj_create(ui->dataPage);
	lv_obj_set_pos(ui->dataPage_cont_1, 540, 20);
	lv_obj_set_size(ui->dataPage_cont_1, 240, 440);
	lv_obj_set_scrollbar_mode(ui->dataPage_cont_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for dataPage_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->dataPage_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->dataPage_cont_1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->dataPage_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->dataPage_cont_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->dataPage_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->dataPage_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->dataPage_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->dataPage_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->dataPage_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->dataPage_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes dataPage_label_1
	ui->dataPage_label_1 = lv_label_create(ui->dataPage);
	lv_label_set_text(ui->dataPage_label_1, "表标题");
	lv_label_set_long_mode(ui->dataPage_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->dataPage_label_1, 20, 20);
	lv_obj_set_size(ui->dataPage_label_1, 500, 45);

	//Write style for dataPage_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->dataPage_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->dataPage_label_1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->dataPage_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->dataPage_label_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->dataPage_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->dataPage_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->dataPage_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->dataPage_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->dataPage_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->dataPage_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->dataPage_label_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->dataPage_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->dataPage_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->dataPage_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->dataPage_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->dataPage_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of dataPage.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->dataPage);

}
