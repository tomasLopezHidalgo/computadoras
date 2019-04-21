#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "read.h"
#include "write.h"

#define MAX_SIZE 2000

int main(int argsc, char* argv[]){
    // dos2unix
    FILE* f_in = fopen(argv[1], "r");
    if(!f_in) return 0;
	
    char* buffer = malloc(sizeof(char) * MAX_SIZE);
    buffer = read_dos_file(f_in, buffer);
	
    char file_out[80] = "out_";
    strcat(file_out, argv[1]);
	
    write_file(file_out, buffer);
    free(buffer);
    return 0;
}