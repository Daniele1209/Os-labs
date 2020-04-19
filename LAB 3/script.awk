BEGIN {
	count = 0
}
/Dan/ && substr($1, length($1)) % 2 == 0 {
	split($6, res, "/")
	gp = res[length(res) - 1]
	if(f[gp] == 0) {
		gr[count++] = gp
	}
	f[gp]++
}

END {
	for (i = 0; i < count; i++) {
		print gr[i] " --- " f[gr[i]]
	}
}
