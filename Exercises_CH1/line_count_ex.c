#include <stdio.h>

main() /* count lines in input */
{
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
}

// Exercise 1-6. Write a program to count blanks, tabs, and newlines.

// Exercise 1-7. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.

// Exercise 1-8. Write a program to replace each tab by the three-character sequence >, backspace, -, which prints as >, and each backspace by the similar sequence <. This makes tabs and backspaces visible.