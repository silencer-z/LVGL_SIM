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



void setup_scr_functionPage(lv_ui *ui)
{
	//Write codes functionPage
	ui->functionPage = lv_obj_create(NULL);
	lv_obj_set_size(ui->functionPage, 800, 480);
	lv_obj_set_scrollbar_mode(ui->functionPage, LV_SCROLLBAR_MODE_OFF);

	//Write style for functionPage, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->functionPage, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->functionPage, lv_color_hex(0xf6f6f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->functionPage, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);


	//The custom code of functionPage.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->functionPage);

}
