# Build the rtw89 core, USB transport, 8852A chipset support and USB frontend
# together.  The USB frontend alone has unresolved references to all three.
obj-m += rtw89_core.o
obj-m += rtw89_usb.o
obj-m += rtw89_8852a.o
obj-m += rtw89_8852au.o

rtw89_core-y := core.o mac80211.o mac.o mac_be.o phy.o phy_be.o fw.o cam.o \
	efuse.o efuse_be.o regd.o sar.o coex.o ps.o chan.o ser.o acpi.o util.o debug.o
rtw89_core-$(CONFIG_PM) += wow.o

rtw89_usb-y := usb.o

rtw89_8852a-y := rtw8852a.o rtw8852a_table.o rtw8852a_rfk.o \
	rtw8852a_rfk_table.o

rtw89_8852au-y := rtw8852au.o
