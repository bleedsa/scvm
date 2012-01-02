typedef enum {
	CPY,
	LIT,
	PUSH,
	POP,
	LOAD,
	CALL
} instr_type_t;

typedef struct {
	char type;
	int x;
	int y;
	int z;
} instr_t;

#define dyd(n, t) static inline instr_t n(int x, int y){return (instr_t){ t, x, y, 0 };}
#define mon(n, t) static inline instr_t n(int x, int y){return (instr_t){ t, x, 0, 0 };}

mon(mkpush, PUSH);
mon(mkpop,  POP);
mon(mkload, LOAD);
mon(mkcall, CALL);

dyd(mkcpy,  CPY);
dyd(mklit,  LIT);
