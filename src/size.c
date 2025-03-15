#include <ctype.h>
#include <stdint.h>
#include <stdio.h>

#include "bc.h"

typedef struct {
	char *name;
	unsigned int size;
} type_t;

#define mktype(t) (type_t){#t, sizeof(t)};

int main(void) {
	int i;
	type_t s[3], *x;
	
	s[0] = mktype(instr_type_t);
	s[1] = mktype(instr_t);
	s[2] = (type_t){0, 0};
	
	for (x = s; x->name != 0; x++) printf("%s:\t\t%d\n", x->name, x->size * 8);
	
	return 0;
}
