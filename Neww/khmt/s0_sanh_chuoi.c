#include <stdio.h>
#include <string.h>

#define PASSWORD "12042004"

int main() {
    char input[50];
    int result;

    printf("Nhap mat khau: ");
    scanf("%s", input);

    while ((result = strcmp(input, PASSWORD)) != 0) {
        printf("Sai mat khau. Vui long nhap lai: ");
        printf("%s",input);
        scanf("%s", input);
    }

    printf("Mat khau dung!\n");

    return 0;
}