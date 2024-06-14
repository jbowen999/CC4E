#include <stdio.h>

/* print Fahrenheit-Celsius table
for f = 0, 20, ..., 300 */

// main()
// {
//     int lower, upper, step;
//     float fahr, celsius;
//     lower = 0; /* lower limit of temperature table */
//     upper = 300; /* upper limit */
//     step = 20; /* step size */
//     fahr = lower;
//     printf("Fahrenheit Celsius\n");
//     while (fahr <= upper) {
//         celsius = (5.0/9.0) * (fahr-32.0);
//         printf("%4.0f\t %6.1f\n", fahr, celsius);
//         fahr = fahr + step;
//     }
// }

// Exercise 1-3. Modify the temperature conversion program to print a heading above the table.

// Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.

// int main()
// {
//     int lower, upper, step;
//     float fahr, celsius;
//     lower = 0; /* lower limit of temperature table */
//     upper = 300; /* upper limit */
//     step = 20; /* step size */
//     celsius = lower;
//     printf("Celsius  | Fahrenheit\n");
//     while (celsius <= upper) {
//         fahr = (5.0/9.0) * (celsius+32.0);
//         printf("%4.0f\t | %6.1f\n", celsius, fahr);
//         celsius = celsius + step;
//     }
// }

// Exercise 1-5. Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0.


int main() /* Fahrenheit-Celsius table */
{
    int cel;

    for (cel = 300; cel >= 0; cel = cel - 20)
        printf("%4d %6.1f\n", cel, (5.0/9.0)*(cel+32));
}