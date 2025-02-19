#include "mt_lib.h"

int main(void)
{
    unsigned char   c;

    c = 3;
    printf("we have the (&) AND operator\n");
    printf("for example the value 3 in bits : ");fflush(stdout);
    print_bits(c);
    puts("\n");

    // on par with the or operator the and operator can be used for bit masking
    // when we use this operator on our 3 value in bits
    // 00000011 | 3
    // 00000001 | 1  we mask it using the value 1 when we do ==> c &= 1;
    // =========|   the resulting new value of each bit will be 1 if both values are 1;
    // 00000001 | 3

    print_bits(3);
    print_bits(1);
    print_bits(3 & 1);
    puts("on c: ");
    c = c & 1; // or c &= 1; 
    // c = 3;
    // c = 3 | 1;
    print_bits(c);
    return(EXIT_SUCCESS);
}