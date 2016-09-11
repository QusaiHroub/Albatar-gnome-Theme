/* Albatar gnome Theme
* Copyright 2016 Albatar group.
*
* This file is part of the Albatar gnome Theme.
*
* Layout and code style adapted from the Paper theme.
*
* This program is free software; you can redistribute it and/or modify it
* under the terms and conditions of the GNU General Public License,
* version 3, as published by the Free Software Foundation.
*
* This program is distributed in the hope it will be useful, but WITHOUT ANY
* WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
* FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
* more details.
*/

# Albatar GTK2 Theme

# Text/base colors
gtk-color-scheme = "text_color:black\nbase_color:white"
# Foreground/background colors
gtk-color-scheme = "fg_color:#333333\nbg_color:#ececec"
# Selected foreground/background colors
gtk-color-scheme = "selected_fg_color:#ffffff\nselected_bg_color:#607d8b"
# Tooltip colors
gtk-color-scheme = "tooltip_fg_color:#333333\ntooltip_bg_color:#ffffff"
# Window colors
gtk-color-scheme = "wm_color:#546e7a\nunfocused_wm_color:#5A6367"

gtk-auto-mnemonics              = 1
gtk-primary-button-warps-slider = 1

include "main.rc"

# App stylings
include "apps/chrome.rc"
include "apps/eclipse.rc"
include "apps/firefox.rc"
include "apps/gimp.rc"
include "apps/libreoffice.rc"
include "apps/panel.rc"
include "apps/terminal.rc"
include "apps/thunar.rc"
include "apps/xchat.rc"
include "apps/xfce.rc"
