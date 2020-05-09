#!/bin/bash

while true; do
		for A in $@; do 
			cat ps.fake | grep $A | while read P; do
		       	echo $P
		done
	done
done
