#include <stdio.h>

void print_table(void);

int main(void)
{
    print_table();
    return 0;
}

void print_table(void)
{
    float celsius, far;
    int lower = 0;
    int upper = 300;
    int step = 20;

    printf("Celsius [C]\tfarenheit [F]\n");
    printf("-------------------------------\n");

    for (celsius = lower; celsius <= upper; celsius += step)
    {
        far = (9.0f / 5.0f) * celsius + 32.0f;
        printf("%10.0f\t%12.1f\n", celsius, far);
    }
}
