BEGIN{
	count
}

length($6){
	split($6, str, "/")
	gp = str[length(str)-1]
	if(!f[gp]) 
		gr[count++] = gp
	f[gp]++
}

END{
	for(i = 0; i < n; i++)
		print "From group number: " gr[i] ", " f[gr[i]] " users are connected right now"
}	

