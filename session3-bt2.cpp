#include<stdio.h>

int main() {
	int doC;
	printf("nhap gia tri doc :"); 
	scanf("%d", &doC);
	int Fah = doC * 9  / 5 +32;
	printf("doi sang fah :%d\n", Fah); 
	
	return 0; 
}
