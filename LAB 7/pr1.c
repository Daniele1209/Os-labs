#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

void print_something() {
	printf("something :/ \n");
}

int main() {
	
	signal(SIGTERM, print_something);
	while(1)
		sleep(1);

	return 0;
}
