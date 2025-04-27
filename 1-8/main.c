#include <stdio.h>

int main(void)
{
    int c;
    int blanks = 0;
    int tabs = 0;
    int newlines = 0;
    int total = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++blanks;
        else if (c == '\t')
            ++tabs;
        else if (c == '\n')
            ++newlines;
    }

    total = blanks + tabs + newlines;

    printf("Number of blanks       : %d\n", blanks);
    printf("Number of tabs         : %d\n", tabs);
    printf("Number of newlines     : %d\n", newlines);
    printf("Total number of matches: %d\n", total);

    return 0;
}
