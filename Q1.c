#include <msp430.h>


float global_float = 6.5;

int main(){

 //(a)
    printf("Option 'a' solution :-\n\n");
    int local_int = 5;
    printf("Address of %d is %p\n",local_int, &local_int);
    ++local_int;
    printf("Address of %d after increment is %p\n",local_int, &local_int);
    printf("\n\n\n");
    printf("Option 'b' solution :-\n\n");
    printf("Address of %f is %p\n",global_float, &global_float);
    --global_float;
    printf("Address of %f after increment is %p\n",global_float, &global_float);
    printf("\n\n\n");
    printf("Option 'c' solution :-\n\n");
    unsigned char first=0x41;
    printf("First unsigned char with hex vlaue %x is %c and its address is %x\n",first, first, &first);
    unsigned char second=0x42;
    printf("Second unsigned char with hex vlaue %x is %c and its address is %x\n",second, second, &second);
    unsigned char operation1 = first+1;
    printf("After first operation hex value is %x and char is %c\n", operation1, operation1);
    unsigned char operation2 = second-1;
    printf("After second operation hex value is %x and char is %c\n", operation2, operation2);
    printf("\n\n\n");

    return 0;
}