/* 1. change to ANSI C
 * 2. functions not allowed in this stage
 * 3. and/or is also not allowed in this stage
 * 4. else is not allowed in this stage
 */

#include <stdio.h>

void replace_multiple_blanks(void);

int main(void)
{
    replace_multiple_blanks();
    return 0;
}

void replace_multiple_blanks(void)
{
    int c;
    int blank_seen = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (!blank_seen)
            {
                putchar(c);
                blank_seen = 1;
            }
        }
        else
        {
            putchar(c);
            blank_seen = 0;
        }
    }
}
