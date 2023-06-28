#include "include/malk.h"
#include "include/read.h"

int main(int argc, char** argv) {
   char* src;

   src = read_from_fname(argv[1]);

   if (!src) {
      die("provide sme fucking arguments smartass");
   }

   log_raw(src);

   return 0;
}
