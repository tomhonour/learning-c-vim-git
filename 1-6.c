#include <stdio.h>

/* verify that != EOF is 0 or 1 */

main()
{
	int c;

	c = (getchar() != EOF);
	printf("%d\n", c);
}
