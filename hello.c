#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "my_math.h"

int main(void)
{
    int i = 0;

    int store = 0;
    scanf("%d", &store);
    printf("store = %d\n", store);

    for (i = 0; i < 10; i++)
        printf("%d:Hello, world.\n", i);

    double num1 = 10.0, num2 = 6.0;

    printf("Math Add = %.2lf.\n", Add(num1, num2));

    char *string = "Hello, world.";

    string = "Goodbye.";

    printf("Message = %s, Length = %lu\n", string, strlen(string));

    

    printf("store = %d\n", store);
    
    getchar();

    return 0;
}