typedef struct {
	int start;
} block_t;

typedef struct {
	instr_t *src;
	block_t *block;
} vm_t;

typedef enum {
	INVALID_INSTR = -1, /* the vm found an instr it didn't understand. */
} vm_err_t;
