#include<stdio.h>
#include<stdlib.h>

int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	float *a = (float *)malloc(n*sizeof(float));
	if(a == NULL) return 1;
	
	for(int i = 0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%f", a + i);
	}
	for(int i = 0; i < n; i ++) 
		printf("%.2f ", *(a+i));
	free(a);
	return 0;
}
