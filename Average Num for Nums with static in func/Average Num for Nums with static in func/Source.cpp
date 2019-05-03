#include "stdafx.h"
static int sum = 0, count = 0;
int avg_nums(int num)
{
		sum += num; count++;	
	return  sum / count;
}
void reset()
{
	sum = 0;
	count = 0;
}