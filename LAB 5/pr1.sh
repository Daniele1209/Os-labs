#!/bin/bash

D=$1

sum=0
count=0

find $D -type f | (while read F; do
	if file "$F" | grep -q "ASCII text"; then
		c=`cat "$F"|wc -l`
		sum=$(($sum+$c))
		count=$(($count+1))
	fi
done

echo "average count: $(($sum/$count))" )
