#include <stdio.h>

/* print Celsius-Fahrenheit table
	for celsius = 0, 20, ..., 300; floating-point version */
main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	printf("Celsius-Fahrenheit table\n");
	printf("Celsius\tFahrenheit\n");
	celsius = lower;
	while (celsius <= upper) {
		fahr = ((9.0 * celsius) / 5) + 32.0;
		printf("%3.0f %6.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
