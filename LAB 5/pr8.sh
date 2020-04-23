#!/bin/bash

D=$1

find $D -type f | while read F; do
	name=`basename $F`
	length=${#name}
	
	if [$length -lt 8]; then
		echo $name
		if file "$F" | grep -q "ASCII text"; then
			head $F
		fi
	fi
done
