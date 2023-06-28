#include "include/token.h"
#include "include/util.h"

token_t* token_init(int type, char* val) {
   token_t* t;

   t->type = type;
   t->val = val;

   return t;
}

void token_kill(token_t* t) { free(t); }
