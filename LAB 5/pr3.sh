#!/bin/bash
D=$1

find $D -type f | while read F; do
	if file "$F" | grep -q "ASCII text"; then
		lines_n=`cat "$F"|wc -l`
		if [ $lines_n -lt 10 ]; then 
			cat "$F"
		else
			head -n 5 "$F"; tail -n 5 "$F"
		fi
	fi
done
