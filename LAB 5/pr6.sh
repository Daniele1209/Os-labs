#!/bin/bash

while [ ! -z "$1"]; do
	F=$1; shift
	C=$1; shift
	K=$1; shift
	
	if [-z $F] || [-z $C] || [-z $K]; then
		break
	fi
	awk -v k=$K -v c=$C '{ count = 0
		for(i=1; i<=NF; i++)
			if($i == w)
				count += 1
		if(count == k)
			print $0
		}'
	"$F"
done
