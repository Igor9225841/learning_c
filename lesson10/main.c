#include <stdio.h>
//#include "readf.h"
//#include "writef.h"
//#include "print_er.h"

struct data
	{
		char ch[100];
	};

int readf (struct data *u);
int writef (struct data *u);
void print_rez (int rez1, int rez2);

int main (int argc, char **argv)
{
	struct data data_file; 
	int rez1=0;
	int rez2=0;
//	char fname1[10];
//	char fname2[10];
//	printf("Enter source and destination files\n");
//	scanf("%c%c", fname1, fname2);
	rez1= readf (&data_file);
	rez2= writef (&data_file);
	print_rez(rez1, rez2);

    return 0;
}

int readf (struct data *u)
{	
	signed char c;
	int i=0;
	FILE *f;
	f= fopen("file1", "r");
	if (f==NULL)
	{
		i=-1;
		return i;
	}
	
	while ((c=fgetc(f)) !=EOF)
	{
		u->ch[i]= c;
		i++;
	}
	
	fclose(f);
	return i;	
}

int writef (struct data *u)
{
	int i=0;
	signed char c;
	FILE *f;
	f= fopen("file2", "w");
	if (f==NULL)
	{
		i=-2;
		return i;
	}
	
	while ((c=fgetc(f)) !=EOF) 
	{
		u->ch[i]= c;
		i++;
	}
	fclose(f);
	return i;	
}

void print_rez(int rez1, int rez2)
{
	if (rez1 == -1)
	{
		printf("Error. File1 not exists\n");
	}
	if (rez2 == -2)
	{
		printf("Error. File2 not exists\n");
	}
	if (rez2>= 0)
	{
		printf("Copy done. Transfered %d\n", rez2);
	}
	return;
};



