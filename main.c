#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *strtype, ...);

int	main(void)
{
	int				t1;
	char			t2;
	char			*t3;
	unsigned int	t4;
	
	t1 = 1234;
	t2 = 'z';
	t3 = "teste array";
	t4 = 12344567;
	
	ft_printf("teste int= %i", t1);
}
