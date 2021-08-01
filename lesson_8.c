#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

//Чтение из стандартного потока
void read_string (char *arr_ch, int sz, int *factsz);

//Обработка массива (нахождение наиболее часто встречающейся цифры
char calc_number (char *arr_ch, int facysz);

//Печать наиболее часто встречающейся цифры
void print_number(char rnumber);

int main (int argc, char **argv)
{
    printf("Enter any sequence of letters and numbers, mark the end of the input with a dot\n");
    char rnumber; //Наиболее часто встречающаяся цифра
    int sz=100; //Размер массива
    int factsz=0;
    char arr_ch[sz];
    read_string (&arr_ch, sz, &factsz);
    rnumber= calc_number (&arr_ch, factsz);
    print_number(rnumber);    
    return 0;
}

void read_string (char *arr_ch, int sz, int *factsz)
{
    char ch;
    int i=0;
    while (((ch=getchar()) !='.') && i < sz)
    {
        arr_ch[i]=ch;
        i++;
    }
    *factsz=i;
    return; 
}

char calc_number(char *arr_ch, int factsz)
{
    int maxcount=0;
    char maxnumber=0;
    char ch1=NULL, ch2=NULL;
    //int count=0;
    for (int i=0; i < factsz; i++)
    {
         int count=0;    
         for (int j=1; j < factsz; j++)
         {
            if (((arr_ch[i]) >= '0' && (arr_ch[i]) <='9') && ((arr_ch[j]) >='0' && (arr_ch[j]) <='9'))
            {
                ch1=arr_ch[i];
                ch2=arr_ch[j];
                if (ch1 == ch2)
                   count++;
            }
            if (maxcount<count)
            {
                maxcount=count;
                maxnumber=arr_ch[i];
            }
        }
    }
    return maxnumber;
}

void print_number (char rnumber)
{
    printf("The most common number %c\n", rnumber);
    return;
}



