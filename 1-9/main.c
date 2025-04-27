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
