#ifndef LEXER_H
#define LEXER_H

#include <stdlib.h>
#include <string.h>

typedef struct {
   unsigned int i;   // index of current character
   char* c;          // current character
   char** src;        // the source text
} lexer_t;

lexer_t* lexer_init(char** src);
void lexer_kill(lexer_t* l);

#endif
