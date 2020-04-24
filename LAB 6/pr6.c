#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

bool is_prime(int nr) {
	if (nr < 2)
		return false;
	if (nr > 2 && x % 2 == 0)
		return false;
	for (int i = 3; i*i <= nr; i+=2)
		if (nr % i == 0)
			return false;
	return true;
}

int main(int argc, char** argv) {
	int nr,st;
	scanf("%d",&nr);
	
	for(int i = 0; i <= n; i++) {
		if(fork() == 0) {
			if (is_prime(i))
				exit(0);
			exit(1);
		}
		wait(&st);
		if(WEXITSTATUS(st) == 0)
			printf("%d\n",i);
	}

	return 0;
}
