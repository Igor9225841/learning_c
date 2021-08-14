#pragma once
#include <stdio.h>
#include "struct_data.h"

int writefile (char *fname2, struct data *u)
{
	int i=0;
	signed char c;
	
	FILE *f;
	f= fopen(fname2, "r+");
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

