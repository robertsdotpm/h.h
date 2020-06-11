#define nelem(a) (sizeof (a) / sizeof (a)[0])
#define REPINF 255
#define MAXSUB REG_MAXSUB
#define MAXPROG (32 << 10)

enum {
	/* regcomp flags */
	REG_ICASE = 1,
	REG_NEWLINE = 2,

	/* regexec flags */
	REG_NOTBOL = 4,

	/* limits */
	REG_MAXSUB = 10
};

/* Scan */

enum {
	L_CHAR = 256,
	L_CCLASS,	/* character class */
	L_NCCLASS,	/* negative character class */
	L_NC,		/* "(?:" no capture */
	L_PLA,		/* "(?=" positive lookahead */
	L_NLA,		/* "(?!" negative lookahead */
	L_WORD,		/* "\b" word boundary */
	L_NWORD,	/* "\B" non-word boundary */
	L_REF,		/* "\1" back-reference */
	L_COUNT		/* {M,N} */
};

/* Parse */

enum {
	P_CAT, P_ALT, P_REP,
	P_BOL, P_EOL, P_WORD, P_NWORD,
	P_PAR, P_PLA, P_NLA,
	P_ANY, P_CHAR, P_CCLASS, P_NCCLASS,
	P_REF
};

/* Compile */

enum {
	I_END, I_JUMP, I_SPLIT, I_PLA, I_NLA,
	I_ANYNL, I_ANY, I_CHAR, I_CCLASS, I_NCCLASS, I_REF,
	I_BOL, I_EOL, I_WORD, I_NWORD,
	I_LPAR, I_RPAR
};

typedef unsigned int Rune;
typedef struct Reprog Reprog;
typedef struct Resub Resub;
typedef struct Reclass Reclass;
typedef struct Renode Renode;
typedef struct Reinst Reinst;

struct Resub {
	unsigned int nsub;
	struct {
		const char *sp;
		const char *ep;
	} sub[REG_MAXSUB];
};


struct Reclass {
	Rune *end;
	Rune spans[64];
};

struct Reinst {
	unsigned char opcode;
	unsigned char n;
	Rune c;
	Reclass *cc;
	Reinst *x;
	Reinst *y;
};

struct Reprog {
	Reinst *start;
    Reinst *end;
	int flags;
	unsigned int nsub;
	Reclass cclass[16];
};

struct Renode {
	unsigned char type;
	unsigned char ng, m, n;
	Rune c;
	Reclass *cc;
	Renode *x;
	Renode *y;
};




//typedef struct Rethread Rethread;


Reprog *regcomp(const char *pattern, int cflags, const char **errorp);
int regexec(Reprog *prog, const char *string, Resub *sub, int eflags);
void regfree(Reprog *prog);

// RE stores its globals here...
struct {
	Reprog *prog;
	Renode *pstart, *pend;

	const char *source;
	unsigned int ncclass;
	unsigned int nsub;
	Renode *sub[MAXSUB];

	int lookahead;
	Rune yychar;
	Reclass *yycc;
	int yymin, yymax;

	const char *error;
	jmp_buf kaboom;
} g; 
