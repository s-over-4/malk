#ifndef READ_H
#define READ_H

#include <stdio.h>

#include "util.h"

// get file content from file name
// char* fname       : the file name
// -> char*          : the file's contents
char* read_from_fname(char* fname);

#endif
