#include "mt_lib.h"

int main(void)
{
    char        *signum = "01000001";
    char c = 0;
	int  i = 0;

    while (i < 8)
    {
	    c <<= 1;
	    if (signum[i] == '1')
		    c |= 1;
	    i++;
    }
    puts("");
    print_bits(c);
	if (i == 8)
	{
		if (c == '\0')
			write(STDOUT_FILENO, "\n", 1);
		else
			write(STDOUT_FILENO, &c, 1);
        fflush(stdout);
		c = 0;
		i = 0;
	}
    return(EXIT_SUCCESS);
}