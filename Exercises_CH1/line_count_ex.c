#include <stdio.h>

// main() /* count lines in input */
// {
//     int c, nl;

//     nl = 0;
//     while ((c = getchar()) != EOF)
//         if (c == '\n')
//             ++nl;
//     printf("%d\n", nl);
// }


// Exercise 1-6. Write a program to count blanks, tabs, and newlines.
main() /* count lines in input */
{
    int c, nl, tc, bc;

    nl = 0;
    tc = 0;
    bc = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
        else if (c == '\t')
            ++tc;
        else if (c == ' ')
            ++bc;
    printf("Newlines:%d\n", nl);
    printf("Tabs:%d\n", tc);
    printf("Blanks:%d\n", bc);
}


// Exercise 1-7. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.

// Exercise 1-8. Write a program to replace each tab by the three-character sequence >, backspace, -, which prints as >, and each backspace by the similar sequence <. This makes tabs and backspaces visible.