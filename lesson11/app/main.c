#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>

#include <list_of_files.h>

int main (int argc, char **argv)
{
/*	struct files_name list_files; 
	int rez1=0;
*/
	char path_dir[255]={0};
	printf("Enter the full path to the directiry\n");
	scanf("%s", path_dir);
	
//	getcwd (path_dir, 255);
    ls_files (path_dir);
    
    return 0;
}


