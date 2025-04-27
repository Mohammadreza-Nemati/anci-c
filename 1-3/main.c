#include <stdio.h>
void print_table(void);
int main(void)
{
    print_table();
    return 0;
}
void print_table(void)
{
    float far, celsius;
    int lower = 0;
    int upper = 300;
    int step = 20;

    printf("farenheit [F]\tCelsius [C]\n");
    printf("-------------------------------\n");

    for (far = lower; far <= upper; far += step)
    {
        celsius = (5.0f / 9.0f) * (far - 32.0f);
        printf("%10.0f\t%10.1f\n", far, celsius);
    }
}
