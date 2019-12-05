#include <stdint.h>

#define NB_BLOCKS 1024
#define ROW_SIZE 8 			/* 8 bits in a row */
#define NB_ROWS NB_BLOCKS/ROW_SIZE 	/* 128 rows in bitmap */
#define CONST_BM_POS 1023 		/* write bitmap to the last black on disk */

/* set index in bitmap to used */
void set_index(int i);

/* find the first free data block and return the index*/
int get_index();

/* frees index in bitmap */
void rm_index(int i);
