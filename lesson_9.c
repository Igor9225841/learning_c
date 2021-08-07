#include <stdio.h>
#include <stdint.h>
#include <string.h>

//Чтение из стандартного потока
void read_string (char *cs, int sz);

//Обработка массива (нахождение нахождение суммы чисел)
int str_sum_digits (const char *cs);

//Печать наиболее часто встречающейся цифры
void print_number(int snumber);

int main (int argc, char **argv)
{
    printf("Enter any sequence of letters and numbers\n");
    int snumber; //Сумма чисел в строке
    int sz=100; //Размер массива
    char cs[sz];
    read_string (&cs, sz);
    snumber= str_sum_digits (&cs);
    print_number(snumber);    
    return 0;
}

void read_string (char *cs, int sz)
{
    char ch;
    int i=0;
    while (((ch=getchar()) !='\n') && (i<sz))
    {
        cs[i]=ch;
        i++;
    }    
    cs[i]='\0';
    return; 
}

int str_sum_digits(const char *cs)
{
    int summ_number=0;
    int i=0;    
    while (cs[i])
    {
        if ((cs[i]) >= '0' && (cs[i]) <='9')
        {
            summ_number +=cs[i] - '0'; 
        }
        i++;
    }
    return summ_number;
}

void print_number (int snumber)
{
    printf("The summ number %d\n", snumber);
    return;
}



