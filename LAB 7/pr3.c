#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	int parent_child[2], child_parent[2];
	int var1, var2;
	pipe(parent_child);
	pipe(child_parent);
	if(fork() == 0) {

		close(parent_child[1]);
		close(child_parent[0]);
		read(parent_child[0], &var1, sizeof(int));
		read(parent_child[0], &var2, sizeof(int));
		close(parent_child[0]);
		int s = var1 + var2;

		printf("%d\n", s);
		write(child_parent[1], &s, sizeof(int));
		close(child_parent[1]);
		exit(0);
	}
	close(parent_child[0]);
	close(child_parent[0]);
	
	scanf("%d", &var1);
	scanf("%d", &var2);
	write(parent_child[1], &var1, sizeof(int));
	write(parent_child[1], &var2, sizeof(int));

	close(parent_child[1]);
	wait(0);

	int s = 0;
	read(child_parent[0], &s, sizeof(int));
	close(child_parent[0]);
	printf(child_parent[0]);
	printf("%d\n", s);
	
	return 0;

}
