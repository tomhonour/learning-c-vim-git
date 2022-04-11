#include <stdio.h>

/* copy input to ouput, replacing >= 1 blanks to 1 blank */
main()
{
	int c, count;

	count = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' && count == 0) {
			++count;
			putchar(c);
		}
		else if (c == ' ' && count == 1) {
			;
		}
		else if (c != ' ' && count == 1) {
			count = 0;
			putchar(c);
		}
		else
			putchar(c);
	}
}
