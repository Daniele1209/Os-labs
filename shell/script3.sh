#!/bin/bash

find dir -type f| grep ".log$" | while read F; do
	sort $F > temp
	rm $F
	mv temp $F
done

