#!/bin/bash
# Instalacja rtw89_8852au z ID Mercusys MA72XH (2c4e:0124)
set -e
P=rtw89-8852au-mercusys
V=1.0
SRC="$(cd "$(dirname "$0")" && pwd)/dkms/$P-$V"

echo "==> usuwam poprzednia wersje (jesli jest)"
dkms remove -m $P -v $V --all 2>/dev/null || true
rm -rf "/usr/src/$P-$V"

echo "==> kopiuje zrodla do /usr/src"
cp -r "$SRC" /usr/src/

echo "==> dkms add / build / install"
dkms add -m $P -v $V
dkms build -m $P -v $V
dkms install -m $P -v $V --force

echo "==> depmod"
depmod -a

echo
echo "==> weryfikacja"
dkms status -m $P
echo "--- czy ID 2c4e:0124 jest widoczne dla modprobe ---"
modinfo rtw89_8852au | grep -i 2C4E && echo "OK: ID na miejscu" || { echo "BLAD: brak ID"; exit 1; }
echo
echo "GOTOWE. Teraz zrestartuj komputer i wepnij dongle."
