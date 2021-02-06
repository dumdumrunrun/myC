#include <stdio.h>
#include <stdlib.h>


int main(void) {

    char *p_first_char = "A";
    char *p_next_char;
    char *p_last_char;

    char array_char[] = "Hello.";

    p_last_char = p_first_char;

    p_first_char = "B";

    p_next_char = p_first_char;

    p_first_char = "C";

    printf("first char = %s, pointer address = %p\n", p_first_char, p_first_char);
    printf("next char = %s, pointer address = %p\n", p_next_char, p_next_char);
    printf("last char = %s, pointer address = %p\n", p_last_char, p_last_char);
    printf("array char = %s, address = %p\n", array_char, array_char);

    return 0;
}