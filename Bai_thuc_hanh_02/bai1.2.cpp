#include<stdio.h>
#include<stdlib.h>

int main() {
	int n ;
	float *a;
	float **pa = &a;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	*pa = (float *)malloc(n*sizeof(float));
	if (a == NULL){
		printf("Khong du bo nho\n");
		return 1;
	} 
	
	for(int i = 0; i < n; i ++){
		printf("a[%d]: ", i);
		scanf("%f", *pa + i);
	}

	for(int i = 0; i < n; i++)
		printf("%.2f ", *(*pa+i));
	free(*pa);
	*pa = NULL;
	return 0;
}
