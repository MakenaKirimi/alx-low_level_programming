#ifndef CALCH
#define CALCH

/**
 * struct opp - structure for ops type
 * @op: operatr
 * @f: associated function
 *
 * Description:structure for operation
 */
typedef struct opp
{
	char *op;
	int (*f)(int, int);
} op_t;
#endif
