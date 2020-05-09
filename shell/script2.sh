#!/bin/bash

count=0

find dir -type f | grep ".c$" | while read F; do
	nrlines=`cat $F | wc -l`
	if [ $nrlines -lt 500 ]; then
		echo $F
		count=$(($count+1))
	fi
	if [ $count -eq 2 ]; then
	       break
	fi
done	


