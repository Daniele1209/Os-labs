#include <signal.h>
#include <stdio.h>
#include <time.h>

void print_time() {
	time_t tim;
	time(&tim);
	printf("%s", ctime(&tim));
}

int main() {
	signal(SIGHUP, print_time);
	while(1);
	
	return 0;
}
