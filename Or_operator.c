#include "mt_lib.h"

int main(void)
{
    unsigned char   c;

    c = 2;
    printf("we have the (|) OR operator\n");
    printf("for example the value 2 in bits : ");fflush(stdout);
    print_bits(c);
    puts("\n");

    // here we get into the concept of masks;
    // when we use this operator on our 2 value in bits
    // 00000010 | 2
    // 00000001 | 1  we mask it using the value 1 when we do ==> c |= 1;
    // =========|   the resulting new value of each bit will be 1 if either one of the values is one.
    // 00000011 | 3

    print_bits(2);
    print_bits(1);
    print_bits(2 | 1);
    puts("on c: ");
    c = c | 1; // or c |= 1; 
    // c = 2;
    // c = 2 | 1;
    print_bits(c);
    return(EXIT_SUCCESS);    
}