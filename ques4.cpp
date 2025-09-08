#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    a+=b;  
    printf("After a+=b, a=%d\n", a);
    a-=b;
    printf("After a-=b, a=%d\n", a);
    a*=b;
    printf("After a*=b, a=%d\n", a);
    a/=b;
    printf("After a/=b, a=%d\n", a);
}
