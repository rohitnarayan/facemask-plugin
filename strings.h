/*
* Face Masks for SlOBS
* smll - streamlabs machine learning library
*
* Copyright (C) 2017 General Workings Inc
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
*/
#pragma once

// translation macros
// see data/locale/en-US.ini
//
#define P_TRANSLATE(x)			obs_module_text(x)
#define P_DESC(x)				x ".Description"
#define P_OPTION(x,n)			x ".Option" n

// Properties
#define P_MASK					"Mask"
#define P_MASKFOLDER			"maskFolder"
#define P_DEACTIVATE			"deactivated"
#define P_DRAWMASK				"drawmask"
#define P_DRAWFACEDATA			"drawfaces"
#define P_DRAWMORPHTRIS			"drawmorphtris"
#define P_DRAWCROPRECT			"drawFDCropRect"
#define P_DEMOMODEON			"demoMode"
#define P_DEMOFOLDER			"demoFolder"
#define P_DEMOINTERVAL			"demoInterval"
#define P_DEMODELAY				"demoDelay"
#define P_BGREMOVAL				"greenscreen"
#define P_GENTHUMBS				"genpreviews"
#define P_REWIND				"rewindanims"
#define P_CARTOON				"cartoonMode"
#define P_ALERT_TEXT			"alertText"


// Other static strings
static const char* const kDefaultMask = "No_Mask.json";
static const char* const kDefaultMaskFolder = "masks";
static const char* const kFileAlertJson = "alerts/alert.json";
static const char* const kFontAlertTTF = "fonts/BackIssuesBB_reg.ttf";
//static const char* const kFontAlertTTF = "fonts/BadaboomBB_Reg.ttf";
//static const char* const kFontAlertTTF = "fonts/amsterdam.ttf";
//static const char* const kFontAlertTTF = "fonts/Peinture Fraiche.ttf";
//static const char* const kFontAlertTTF = "fonts/adrip1.ttf";
//static const char* const kFontAlertTTF = "fonts/Comic Panels.ttf";
//static const char* const kFontAlertTTF = "fonts/Urban Calligraphy.ttf";
//static const char* const kFontAlertTTF = "fonts/whoa.ttf";