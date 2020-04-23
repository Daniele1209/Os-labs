#!/bin/bash

D=$1

find $D -type f | (while read F; do
	if egrep -q '[0-9]{6,}' "$F"; then
		basename $F
		echo `grep -o '[0-9]\{6,\}' "$F" | sed 's/\n/ /g'`
	fi
done)
