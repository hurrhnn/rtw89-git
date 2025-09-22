// SPDX-License-Identifier: GPL-2.0 OR BSD-3-Clause
/* Copyright(c) 2025  Realtek Corporation
 */

#include <linux/module.h>
#include <linux/usb.h>
#include "rtw8852a.h"
#include "usb.h"

static const struct rtw89_driver_info rtw89_8852au_info = {
	.chip = &rtw8852a_chip_info,
	.variant = NULL,
	.quirks = NULL,
};

static const struct usb_device_id rtw_8852au_id_table[] = {
	{ USB_DEVICE_AND_INTERFACE_INFO(0x0411, 0x0312, 0xff, 0xff, 0xff),
	  .driver_info = (kernel_ulong_t)&rtw89_8852au_info },
	{ USB_DEVICE_AND_INTERFACE_INFO(0x056e, 0x4020, 0xff, 0xff, 0xff),
	  .driver_info = (kernel_ulong_t)&rtw89_8852au_info },
	{ USB_DEVICE_AND_INTERFACE_INFO(0x0b05, 0x1997, 0xff, 0xff, 0xff),
	  .driver_info = (kernel_ulong_t)&rtw89_8852au_info },
	{ USB_DEVICE_AND_INTERFACE_INFO(0x0bda, 0x8832, 0xff, 0xff, 0xff),
	  .driver_info = (kernel_ulong_t)&rtw89_8852au_info },
	{ USB_DEVICE_AND_INTERFACE_INFO(0x0bda, 0x885a, 0xff, 0xff, 0xff),
	  .driver_info = (kernel_ulong_t)&rtw89_8852au_info },
	{ USB_DEVICE_AND_INTERFACE_INFO(0x0bda, 0x885c, 0xff, 0xff, 0xff),
	  .driver_info = (kernel_ulong_t)&rtw89_8852au_info },
	{ USB_DEVICE_AND_INTERFACE_INFO(0x2001, 0x3321, 0xff, 0xff, 0xff),
	  .driver_info = (kernel_ulong_t)&rtw89_8852au_info },
	{ USB_DEVICE_AND_INTERFACE_INFO(0x2001, 0x332c, 0xff, 0xff, 0xff),
	  .driver_info = (kernel_ulong_t)&rtw89_8852au_info },
	{ USB_DEVICE_AND_INTERFACE_INFO(0x2357, 0x013f, 0xff, 0xff, 0xff),
	  .driver_info = (kernel_ulong_t)&rtw89_8852au_info },
	{ USB_DEVICE_AND_INTERFACE_INFO(0x2357, 0x0140, 0xff, 0xff, 0xff),
	  .driver_info = (kernel_ulong_t)&rtw89_8852au_info },
	{ USB_DEVICE_AND_INTERFACE_INFO(0x2357, 0x0141, 0xff, 0xff, 0xff),
	  .driver_info = (kernel_ulong_t)&rtw89_8852au_info },
	{ USB_DEVICE_AND_INTERFACE_INFO(0x3625, 0x010f, 0xff, 0xff, 0xff),
	  .driver_info = (kernel_ulong_t)&rtw89_8852au_info },
	{},
};
MODULE_DEVICE_TABLE(usb, rtw_8852au_id_table);

static struct usb_driver rtw_8852au_driver = {
	.name = KBUILD_MODNAME,
	.id_table = rtw_8852au_id_table,
	.probe = rtw89_usb_probe,
	.disconnect = rtw89_usb_disconnect,
};
module_usb_driver(rtw_8852au_driver);

MODULE_AUTHOR("Bitterblue Smith <rtl8821cerfe2@gmail.com>");
MODULE_DESCRIPTION("Realtek 802.11ax wireless 8852AU driver");
MODULE_LICENSE("Dual BSD/GPL");
