#include <stdio.h>

void multi_ariphmetics(int number1, int number2, int *summ, int *diff, int *mult, int *div);

int main (int argc, char **argv)
{
    int number1, number2, sum, diff, mult, div;
    printf("Enter two decimal numbers\n");
    scanf("%d%d", &number1, &number2);
    multi_ariphmetics(number1, number2, &sum, &diff, &mult, &div);
    printf("summ %d\n diff %d\n mult %d\n div %d\n", sum, diff, mult, div);
    return 0;
}

void multi_ariphmetics(int number1, int number2, int *sum, int *diff, int *mult, int *div)
{
    *sum= number1+number2;
    *diff= number1-number2;
    *mult= number1*number2;
    *div= number1%number2;
    return;
}
