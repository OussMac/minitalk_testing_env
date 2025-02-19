#include "mt_lib.h"



int main(void)
{
    unsigned char c = 0;

    printf("hada example dlbyte (8bits) ==> ");fflush(stdout);

    print_bits(c);
    puts("\n");

    c = 1;
    printf("one bit representation (value 1) : ");fflush(stdout);
    print_bits(c);
    puts("");

    c <<= 1; // can be written c = c << 1; just like any operator
    printf("shifting left 1 operator <<<< : ");fflush(stdout);
    print_bits(c);

    c >>= 1; // can be written c = c>> 1;
    printf("shifting right (back) 1 operator >>>> : ");fflush(stdout);
    print_bits(c);

    puts("\n");
    c <<= 7;
    printf("shifting left 7 operator <<<< : ");fflush(stdout);
    print_bits(c);

    return(EXIT_SUCCESS);
}