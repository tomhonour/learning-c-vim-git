#include <stdio.h>

/* copy input to ouput, replacing tab with \t, backspace with \b, and backslash with \\ */
main()
{
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\t')
			printf("\\t");

		else if (c == '\b')
			printf("\\b");

		else if (c == '\\')
			printf("\\\\"); /* \ is used to escape just 1 \, so 2 are needed to escape \\ */

		else
			putchar(c);
	}
}
