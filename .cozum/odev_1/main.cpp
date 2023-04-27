#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c < 'z')
		ft_putchar(c++);
}

void	print_exam(int n)
{
	if (n <= 100 && n >= 0)
		ft_putchar('A' + (10 - n / 10));
}

int	main(void)
{
	ft_putchar('A');
	ft_putchar('\n');
	print_alphabet();
	ft_putchar('\n');
	print_exam(10);
}
