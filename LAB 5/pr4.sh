#!/bin/bash

D=$1

find $D -type f -perm -222 | while read F; do
	mv "$F" "$F.all"
done
