#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void decFunc(void) {}

int main(void)
{
    // 整型數據儲存
    const int number = 10;      // stack
    int next_number = 11;       // stack
    int *p_number = &number;    // stack    

    printf("number = %d\n", number);
    printf("next_number = %d\n", next_number);
    printf("p_number = %d\n", *p_number);
    
    printf("number address = %p\n", &number);
    printf("next_number = %p\n", &next_number);
    printf("p_number pointer address = %p\n", p_number);
    printf("p_number address = %p\n", &p_number);
    printf("int pointer size = %lu\n", sizeof(int*));
    printf("int size = %lu\n", sizeof(int));

    *p_number = 26;

    printf("number = %d\n", number);
    printf("p_number = %d\n", *p_number);

    printf("number address = %p\n", &number);
    printf("p_number address = %p\n", p_number);

    // 變數在宣告同時即分配記憶體空間，函數則是在定義時才分配記憶體空間
    int declaration;

    printf("declaration address = %p\n", &declaration);
    printf("declaration value = %d\n", declaration);
    printf("decFunc address = %p\n", &decFunc);

    // 字符數據儲存
    char single = 'A';
    const char const_single = 'B';
    char *p_const_single = &const_single;

    printf("single = %c\n", single);
    printf("const single = %c\n", const_single);
    printf("p const single = %c\n", *p_const_single);

    printf("single address = %p\n", &single);
    printf("const single address = %p\n", &const_single);
    printf("p const single pointer address = %p\n", p_const_single);
    printf("p const single address = %p\n", &p_const_single);

    single = 'C';
    printf("single = %c\n", single);

    // 字串數據儲存
    // int *p_error_sample = &(10);
    char *p_chars = "Hello, I'm chars.";    // "" automatic store to const area in memeory

    printf("p chars = %s\n", p_chars);

    printf("p chars pointer address = %p\n", p_chars);
    printf("p chars address = %p\n", &p_chars);

    p_chars = "Hello, you are chars.";  // "" automatic distribute memory of const to store

    printf("p chars = %s\n", p_chars);

    printf("p chars pointer address = %p\n", p_chars);
    printf("p chars address = %p\n", &p_chars);

    //*p_chars = "Hello, they are chars."; // error : try to modify memory of const
    //
    //printf("p cahrs = %s\n", p_chars);
    //
    //printf("p chars pointer address = %p\n", p_chars);
    //printf("p chars address = %p\n", &p_chars);

    char p_array_chars[] = "Hello, I'm chars.";

    printf("p array chars = %s\n", p_array_chars);

    printf("p array chars address = %p\n", p_array_chars);

    //p_array_chars[0] = 'L';
    //
    //printf("p array chars = %s\n", p_array_chars);
    //
    //printf("p array chars address = %p\n", p_array_chars);

    p_chars = p_array_chars;

    // *p_chars = "Hello, they are chars."; // error : "" 創建一個常量字串並返回地址，但 *p_chars 非指標，而是指向數組的值

    //*p_chars = 'C';
    //p_chars[1] = 'C';
    //p_chars[2] = 'L';
    //p_chars[3] = 'e';
    //p_chars[4] = 'm';
    //p_chars[5] = 'o';
    //p_chars[6] = 'n';

    printf("p cahrs = %s\n", p_chars);

    printf("p chars pointer address = %p\n", p_chars);
    printf("p chars address = %p\n", &p_chars);


    // Questioin
    //  - Stack 區系統自動分配釋放，那常量區呢？(字符串常量 是否會佔用記憶體)

    return 0;
}