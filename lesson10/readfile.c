#pragma once
#include <stdio.h>
#include "struct_data.h"

int readfile (char *fname1, struct data *u)
{	
	signed char c;
	int i=0;
	
	FILE *f;
	f= fopen(fname1, "r");
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
