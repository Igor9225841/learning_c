#pragma once
#include <stdio.h>

void printrez(int rez1, int rez2)
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
