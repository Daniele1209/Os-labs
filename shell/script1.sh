#!/bin/bash


cat who.fake | cut -d' ' -f 1 | while read name; do
	nr=`cat ps.fake | grep "^$name" | wc -l`
	echo $name $nr
done
