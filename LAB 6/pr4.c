#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

void recursive(int p) {
	
	if (p % 2 == 1)
		return;
	int i = fork();
	if(!i) {
		printf(getpid());
		recursive(getpid());
		exit(0);
	}
	wait(0);
}

int main() {
	
	recursive(0);

	return 0;

}
