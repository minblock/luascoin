
Debian
====================
This directory contains files used to package luad/lua-qt
for Debian-based Linux systems. If you compile luad/lua-qt yourself, there are some useful files here.

## lua: URI support ##


lua-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install lua-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your lua-qt binary to `/usr/bin`
and the `../../share/pixmaps/lua128.png` to `/usr/share/pixmaps`

lua-qt.protocol (KDE)

