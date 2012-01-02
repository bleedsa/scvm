#include "bc.h"

/* a token slices a char* */
typedef struct {
	char *start;
	int len;
} tok_t;

tok_t integer(char *src) {
	int i;
	char *s;
	for (i = 0, s = src; *s; s++, i++);
	return (tok_t){ s, i };
}
