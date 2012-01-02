#include <ctype.h>
#include <stdint.h>

#include "bc.h"

int main(void) {
	int i, s[3];
	
	s[0] = sizeof(instr_type_t),
	s[1] = sizeof(instr_t),
	s[2] = 0;
	
	for (i = 0; s[i] != 0; i++) printf("%d\n", s[i] * 8);
	
	return 0;
}
