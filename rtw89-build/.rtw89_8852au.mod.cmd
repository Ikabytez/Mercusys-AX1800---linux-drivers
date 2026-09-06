savedcmd_rtw89_8852au.mod := printf '%s\n'   rtw8852au.o | awk '!x[$$0]++ { print("./"$$0) }' > rtw89_8852au.mod
