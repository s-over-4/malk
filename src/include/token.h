#ifndef TOKEN_H
#define TOKEN_H

#define TOKEN_EMPH_CHAR          '*'
#define TOKEN_HEADER_CHAR        '#'
#define TOKEN_LINK_START_CHAR    '['
#define TOKEN_LINK_END_CHAR      ']'
#define TOKEN_COMMENT_CHAR       '%'
#define TOKEN_ESC_CHAR           '\\'

#define TOKEN_LALIGN_CHAR  '<'
#define TOKEN_CENTER_CHAR  '|'
#define TOKEN_RALIGN_CHAR  '>'
#define TOKEN_FILL_CHAR    '='

typedef struct {
   enum {
      TOKEN_EOF,
      TOKEN_HEADER,
      TOKEN_QUOTE,
      TOKEN_UL_ITEM,
      TOKEN_OL_ITEM,
      TOKEN_PLAIN,
      TOKEN_TEXT,
      TOKEN_BOLD,
      TOKEN_ITALIC,
      TOKEN_IMG,
      TOKEN_LUNK,
      TOKEN_ALIGN_LEFT,
      TOKEN_ALIGN_RIGHT,
      TOKEN_ALIGN_CENTER,
      TOKEN_ALIGN_FILL,
   } type;

   char* val;
} token_t;

token_t* token_init(int type, char* val);
void token_kill(token_t* t);

#endif
