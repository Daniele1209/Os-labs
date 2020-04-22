/Mo/ {
	for (i = 2; i <= NF; i++) {
		mon[c++] = $i
	}
}

/Su/ {
	for (i = 0; i < c; i++)
		for(j = 2; j <= NF; j++)
			if($j == mon[i]+6) {
				print mon[i]
				break
			}
}
