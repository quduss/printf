#include <stdio.h>
#include "main.h"
int main(void)
{
	int len;

	len = _printf(NULL);
	printf("%d\n", len);
	return (0);
}
