#include "include/lexer.h"

lexer_t* lexer_init(char** src) {
   lexer_t* l;

   l = calloc(1, sizeof(lexer_t));

   l->src = src;
   l->i = 0;
   l->c = src[l->i];

   return l;
}

void lexer_kill(lexer_t* l) { free(l); }
