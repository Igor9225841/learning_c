#include <stdio.h>
//#include "readf.h"
//#include "writef.h"
//#include "print_er.h"

struct data
	{
		char *ch[1000];
	};


int readf (char fname1, struct data *p);
int writef (char fname2, struct data *p);
void print_er (int er);


int main (int argc, char **argv)
{
	
	struct data data_file; 
	p_data = &data_file;
	int rez=0;
	char fname1[100];
	char fname2[100];
	
	printf("Enter source and destination files\n");
	scanf("%c%c", fname1, fname2);
	readf (fname1, &data_file);
	rez= writef (fname2, &data_file);
	printf("Copy done. Transfered %d\n", rez);	
    return 0;
}

int readf (char fname1, struct data *p)
{
	FILE *f;
//	char ch;
	int i=0;
	
	f= fopen(fname1, "r");
	if (f!=NULL)
	{
		i=-1;
		print_er(i);
		return;
	}
	
	while (fscanf(f, "%c", *p[i]->ch) !=EOF)
	{
		i++;
	}
	
	fclose(f);
	return;	
}

int writef (char fname2, struct data *p)
{
	FILE *f;
	int i=0;
	
	f= fopen(fname2, "w");
	if (f!=NULL)
	{
		i=-2;
		print_er(i);
		return;
	}
	
	while (fprintf(f, "%c", *p[i]->ch) !=EOF)
	{
		i++;
	}
	i= ftell(f);
	fclose(f);
	return i;	
}

void print_er(int er)
{
	if (er == -1)
	{
		printf("Error. File1 not exists\n");
	}
	else if (er == -2)
	{
		printf("Error. File2 not exists\n");
	}
	return;
};
