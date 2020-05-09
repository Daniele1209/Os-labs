#!/bin/bash

find $1 -type l | while read F; do
	if [ ! -e -$F ]; then
		echo $F pints to diles/directories that no longer exist !
	fi
done
