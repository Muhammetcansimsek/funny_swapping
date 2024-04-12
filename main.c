#include <stdio.h>

void swap2(int *x, int *y) {
    // temp = *x ; *x = *y ; *y = temp;
    int temp;
    temp = *x;
    *x = *y;
    *y = temp; // *y = *x
    
    printf("\nx: %d\ny: %d\n", *x, *y);
}

void swap1(int *x, int *y) {
    // *x --> a , *y --> b
    *x = *x ^ *y; // a ^ b
    *y = *x ^ *y; // a ^ b ^ b = a
    *x = *y ^ *x; // a ^ a ^ b = b
    
    printf("\nx: %d\ny: %d\n", *x, *y);
}

int main() {
int a, b, *x, *y;
a = 16; b = 32; // 16 --> 0x10, 32 --> 0x20
x = &a;
y = &b;

printf("x: %d\ny: %d\n", *x, *y);
swap2(x, y);

return 0;
}
