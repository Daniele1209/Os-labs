#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>

int main (int argc, char** argv) {
	
	if (!fork()) {
		execvp(argv[1], argv+1);
		exit(0);
	}
	wait(0);

	return 0;
}

