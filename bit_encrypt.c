#include "mt_lib.h"

int main(void)
{
    char    letter;
	int		i;
	char	c;

    letter = 'A'; // 65 in Ascii value 
    puts("");
    printf("value in letter ==> ");fflush(stdout);
    print_bits(letter); // 0100 0001 in bit value
	i = 7;              // we start index at 7, we will shift and reduce it as we go
	while (i >= 0)
	{
		c = letter >> i;

        puts("");
        printf("value in c ==> ");fflush(stdout);
        print_bits(c);
        printf("Mask       ==> ");fflush(stdout);
        print_bits(1);
        printf("Result     ==> ");fflush(stdout);
        print_bits(c & 1);
        puts("");

		if (c & 1)
            printf("sent bit : 🟢\n");
		else
            printf("sent bit : 🅾️\n");
		i--;
	}
    return(EXIT_SUCCESS);
}