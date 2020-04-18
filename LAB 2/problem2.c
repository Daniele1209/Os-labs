#include <stdio.h>
#include <malloc.h>

int main() {
	int min = 0;
	int sum = 0;
	int numbers[10];
	int var;
	for(int i = 0; i<10; i++){
		scanf("%d",&var);
		numbers[i] = var;
		sum+= var;
		if (var < min)
			min = numbers[i];
	}
	printf("The average is: %d\n", sum/10);
	printf("The minimum number is: %d\n", min);

	return 0;
}
