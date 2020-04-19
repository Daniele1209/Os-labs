#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main() {

	printf("got here ! \n");
	int  col, lin, i, j;
	FILE *fptr;

	printf("got here ! \n");
	fptr = fopen("/home/kali/matrix.txt", "r");
	fscanf(fptr, "%d", &lin);	
	fscanf(fptr, "%d", &col);

	printf("%d\n", lin);

	printf("%d\n\n", col);
	int** mat=malloc(lin*sizeof(int*)); 
	for(i=0;i<col;++i)
		mat[i]=malloc(lin*sizeof(int));

 	for(i = 0; i < lin; i++) {
      		for(j = 0; j < col; j++) {
 		 //Use lf format specifier, %c is for character
       		if (!fscanf(fptr, "%d", &mat[i][j])) 
           		break; 
       		printf("%d\n",mat[i][j]); //Use lf format specifier, \n is for new line
      		}

  	}
  	fclose(fptr);	
	return 0;
}
