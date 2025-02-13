#include "ft_printf.c"
#include "ft_print_c.c"
#include "ft_print_dec.c"
#include "ft_print_hexa.c"
#include "ft_print_hexacaps.c"
#include "ft_print_ptr.c"
#include "ft_print_s.c"
#include "ft_print_u.c"
#include <stdio.h>

int main (void)
{
	int x;
	int y;
	char *ptr = NULL;
	x=0;
	y=0;
	x+=printf("%p\n", ptr);
	y+=ft_printf("%p\n", ptr);

	printf("x=%i, y=%i", x, y);
	return (0);

}