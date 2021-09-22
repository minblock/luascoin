
Debian
====================
This directory contains files used to package luascoind/luascoin-qt
for Debian-based Linux systems. If you compile luascoind/luascoin-qt yourself, there are some useful files here.

## luascoin: URI support ##


luascoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install luascoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your luascoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/luascoin128.png` to `/usr/share/pixmaps`

luascoin-qt.protocol (KDE)

