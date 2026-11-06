#include<stdio.h>
#include<stdlib.h>

int main(){
	int h, c;
	printf("Nhap so hang va so cot: ");
	scanf("%d%d", &h, &c);
	
	int *ma = (int *)malloc(h * c * sizeof(int));
	if(ma == NULL){
		printf("Khong du bo nho!\n");
		return 1;
	}
	for (int i = 0; i < h; i++)
		for(int j = 0; j < c; j++) {
			printf("ma[%d][%d] = ", i, j);
			scanf("%d", &ma[i*c*j]);
		}
	for (int i = 0; i < h; i++) {
		for(int j = 0; j < c; j++)
			printf("%4d", i, j);
		printf("\n");
	}
	free(ma);
	return 0;
}


