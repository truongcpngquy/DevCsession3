#include <stdio.h>
#include <string.h>

int main() {
    char ten[50]; 

    printf("Nhap t�n cua ban: ");
    fgets(ten, 50, stdin); 
    ten[strcspn(ten, "\n")] = '\0';

    printf("Xin ch�o %s!\n", ten);

    return 0;
}

