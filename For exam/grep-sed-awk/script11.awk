BEGIN {
	count
	sum
}
{
	sum+=$2
	count++
}
END {
	print "The avg is: "sum/count""
}
