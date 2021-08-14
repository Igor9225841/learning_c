#pragma once
#include <stdio.h>
#include "struct_data.h"

#include "readfile.h"
#include "writefile.h"
#include "print_rez.h"


/*
struct data
	{
		char ch[100];
	};
*/

	
/*
int readfile (char *fname1, struct data *u);
int writefile (char *fname2, struct data *u);
void print_rez (int rez1, int rez2);
*/


int main (int argc, char **argv)
{
	struct data data_file; 
	int rez1=0;
	int rez2=0;
	char fname1[20]={0};
	char fname2[20]={0};
	printf("Enter source and destination files\n");
	scanf("%s%s", fname1, fname2);
	rez1= readfile (fname1, &data_file);
	rez2= writefile (fname2, &data_file);
	printrez (rez1, rez2);

    return 0;
}

/*
int readfile (char *fname1, struct data *u)
{	
	signed char c;
	int i=0;
	
	FILE *f;
	f= fopen(fname1, "rb");
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

int writefile (char *fname2, struct data *u)
{
	int i=0;
	signed char c;
	
	FILE *f;
	f= fopen(fname2, "rb+");
	if (f==NULL)
	{
		i=-2;
		return i;
	}
	
	while ((u->ch[i]) !=0) 
	{
		c=u->ch[i];
		fprintf (f, "%c", c);
		i++;
	}
	fclose(f);
	return --i;	
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
	else if (rez2>= 0)
	{
		printf("Copy done. Transfered %d\n", rez2);
	}
	return;
}
*/



