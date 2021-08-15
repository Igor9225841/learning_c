#pragma once
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


#include "list_of_files.h"

void ls_files (const char *path)
{
	DIR *dir;
    struct dirent *entry;
        
	dir = opendir (path);
	if (dir)
    {
		while (entry = readdir(dir))
	    {
			if (entry->d_name[0] == '.')
			{
				continue;
			}
			printf ("file_name %s\n", entry->d_name);
		}
	}
    closedir(dir);
}
