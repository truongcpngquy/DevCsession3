#include <stdio.h>
#include <string.h>

int main() {
    char ten[50]; 

    printf("Nhap tên cua ban: ");
    fgets(ten, 50, stdin); 
    ten[strcspn(ten, "\n")] = '\0';

    printf("Xin chào %s!\n", ten);

    return 0;
}

