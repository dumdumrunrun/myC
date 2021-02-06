#include <iostream>
#include <stdlib.h>
#include <stdio.h>

template <class T>
T Add(T a, T b) {
    return a + b;
}

int main(void) {

    int i = 0;
    double d = 0.0;

    i = Add(3, 5);
    d = Add(6.6, 3.3);

    printf("i = %d\n", i);
    printf("d = %.1lf\n", d);

    return 0;
}
