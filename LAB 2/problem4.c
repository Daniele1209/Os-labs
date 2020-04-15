#include <stdio.h>
#include <malloc.h>

int main()
{
    int **a,n, c = 1;
    printf("Insert the size of the matrix: \n");
    scanf("%d",&n);
    a = malloc(n*sizeof(int*));
    for(int i=0; i<n; i++)
	    a[i] = malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
	    for(int j =0; j<n;j++){
		a[i][j] = c;
		c++;
	    }
    for(int i =0; i<n; i++) {
	    for(int j = 0; j<n; j++)
		    printf("%d", a[i][j]);
	    printf("\n");
	    }
    for (int j=0; j<n; j++) {
	    int sum =0;
	    for(int i=0; i<n; i++){
		    if(a[i][j]%2 == 1)
			    sum+=a[i][j];
	    }
	    printf("%d\t", sum);
    }
  
    for (int i = 0; i < n; i++)
        free(a[i]);
    free(a);
    return 0;
}

