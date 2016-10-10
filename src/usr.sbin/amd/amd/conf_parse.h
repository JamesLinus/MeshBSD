#define LEFT_BRACKET 257
#define RIGHT_BRACKET 258
#define EQUAL 259
#define NEWLINE 260
#define NONWS_STRING 261
#define NONWSEQ_STRING 262
#define QUOTED_NONWSEQ_STRING 263
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
char *strtype;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
