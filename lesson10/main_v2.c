#pragma once
#include <stdio.h>
#include "struct_data.h"
#include "readfile.h"
#include "writefile.h"
#include "print_rez.h"

int main (int argc, char **argv)
{
	struct data data_file; 
	int rez1=0;
	int rez2=0;
	char fname1[80]={0};
	char fname2[80]={0};
	printf("Enter source and destination files\n");
	scanf("%s%s", fname1, fname2);
	rez1= readfile (fname1, &data_file);
	rez2= writefile (fname2, &data_file);
	printrez (rez1, rez2);

    return 0;
}
