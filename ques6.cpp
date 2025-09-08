#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Left shift by 1 (num << 1): %d\n", num << 1);
    printf("Right shift by 1 (num >> 1): %d\n", num >> 1);
    return 0;
}

