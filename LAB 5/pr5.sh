#!/bin/bash

for I in $@; do
	if [ -d $I ]; then
		echo `basename $I`
		echo `find $I -type f | wc -l`
		echo

	elif [ -f $I ]; then
		echo `basename $I`
		echo $((`cat "$I"|wc -c`-1))
		echo `cat "$I" | wc -l`
		echo
	
	else
		echo "File or directory not available ! :(\n"
	fi
done
