#!/bin/sh
cat /etc/passwd | cut -d ':' -f 1 | sed -n 'n;p' | rev | sort -r | sed -n "7,15 p" | tr '\n' ' ' | sed 's/ /, /g' | sed 's/ ,$/./g'