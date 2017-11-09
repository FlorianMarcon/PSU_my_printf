#include "my.h"
#include "header_MY_PRINTF.h"
#include <stdlib.h>
#include <stdio.h>

int	main()
{
	int var2 = 3;
	int *size2 = &var2;

	my_printf("%b\n", -12);
	my_putchar('\n');
	my_printf("%p\n", size2);
//        printf("%p\n", size2);
	return (0);

}
