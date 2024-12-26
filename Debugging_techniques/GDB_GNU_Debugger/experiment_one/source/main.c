// source/main.c
#include <stdio.h>
#include "function_one.h"

int main() {
    printf("Hello from main!\n");
    function_one();  // Gọi hàm function_one từ file function_one.c
    return 0;
}