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

    puts("\n");
    printf("0 value in bits ==> ");fflush(stdout);
    c = 0;
    print_bits(c);
    c <<= 1; 
    printf("shifting 0 <<<< : ");fflush(stdout);
    print_bits(c);
    printf("the output won't change cuz there are no bits to shift << 00000000 >>.\n");
    puts("and the value remains 0.");
    return(EXIT_SUCCESS);
}