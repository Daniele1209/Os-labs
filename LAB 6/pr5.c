#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int var = 0;

int main() {
	int v[100], n;
	scanf("%d",&n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}

	int child = fork();
	
	if(!child) {
		for(int i = 0; i < n; i++)
			if(v[i] % 2 == 0)
				var = var + v[i];
		printf(var);

		exit(0);
	}

	wait(0);
	
	return 0;
}
