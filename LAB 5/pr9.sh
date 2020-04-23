#!/bin/bash

TTY=`tty`
D=$1

find $D -type | while read F; do
	access=`stat -c "%a" $F`
	if [$access -eq 755]; then
		echo Change the access rights ? Y/N
		read option <$TTY
		if [$option = Y]; then
			chmod 744 $F
		else
			continue
		fi
	fi
done
