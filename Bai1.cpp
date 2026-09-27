#include <stdio.h>
/*
De bai: Tinh tong cac so le tu 1 den N bang for.
*/
int main() {
	int i = 1;
	int N = 0; 
	int sum = 0; 
	printf("Nhap N: ");
	scanf("%d",&N);
    for (i = 1; i <= N;i++) {
    if (i % 2 != 0) {
    sum = sum + i;
	}
	}
    printf("%d",sum);
    return 0; 
}



