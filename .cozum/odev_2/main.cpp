#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_numbers(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		ft_putchar(c);
		c++;
	}
}

void	ft_isnegative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

char	n_to_c(int n)
{
	if (n >= 0 && n <= 9)
		return ('0' + n);
	else
		return ('!');
}
