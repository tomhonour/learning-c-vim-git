#include <stdio.h>

/* count blanks, tabs, and newlines in input */
main()
{
	int c, blank, tab, newline;

	blank = 0;
	tab = 0;
	newline = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++blank;
		if (c == '\t')
			++tab;
		if (c == '\n')
			++newline;
	}
	printf("Blank: %d, Tab: %d, Newline: %d\n", blank, tab, newline);
}
