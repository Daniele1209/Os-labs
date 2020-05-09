#!/bin/bash

find dir -type f -perm -002 | while read F; do
	echo `ls -l $F | cut -d' ' -f1` $F
	chmod o-w $F
	echo `ls -l $F | cut -d' ' -f1` $F
done
