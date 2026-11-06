#include<stdio.h>
#include<stdlib.h>

int main(){
	int h, c;
	printf("Nhap so hang va so cot: ");
	scanf("%d%d", &h, &c);
	
	float **a = (float**)malloc(h*sizeof(float *));
	for(int i = 0; i < h; i++) 
		*(a + i) = (float*)malloc(c*sizeof(float));
	for(int i = 0; i < h; i++)
		for(int j = 0; j < c; j++) {
			printf("ma[%d][%d] = ", i, j);
			scanf("%f", *(a + i) + j);
		}
	for(int i = 0; i < h; i++) {
		for(int j = 0; j < c; j++)
			printf("%8.2f", *(*(a + i) + j));
		printf("\n");
	}
	for(int i = 0; i < h; i ++)
		free( *(a+ i));
	free(a);
	return 0;
}
