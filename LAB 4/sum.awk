BEGIN {
	s=0
}
length(NR) {
	s = s + $1	
}

END{
		
	print "The sum of the first column is: " s ""	
}
