#include "value.h"
#include <stdio.h>

int main(int argc, char **argv) {  
    printf("get_value = %d\n", get_value());
    set_value(6);
    printf("get_value = %d\n", get_value());
}   
