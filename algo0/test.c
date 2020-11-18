#include <stdio.h>
void swap(int *, int *);

int main(void)
{
    int a = 10;
    int b = 20;

    swap(&a, &b);

    printf("a:%d b:%d", a, b);

    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}