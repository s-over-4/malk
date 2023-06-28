#include "include/read.h"

char* read_from_fname(char* fname) {
   FILE* f;
   long fsize;
   char* src;

   f = fopen(fname, "rb");

   if (!f) { 
      die("source file not found: [%s]", fname);
   }

   fseek(f, 0L, SEEK_END);
   fsize = ftell(f);
   rewind(f);

   src = calloc(1, fsize + 1);

   if ((fread(src, fsize, 1, f) != 1) || !src) {
      fclose(f);
      free(src);
      die("could not read file: [%s]", fname);
   }

   return src;
}
