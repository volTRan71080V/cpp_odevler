#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
}

void	print_exam(int note)
{
	if (note <= 100 && note >= 0)
		ft_putchar('A' + (10 - note / 10));
}

int	main(void)
{
	print_exam(101);
	write(1, "hello", 5);
}
