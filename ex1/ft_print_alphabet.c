
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
	write(1, "--", 2);
	char k;
	k = 'A';
	while (k <= 'Z')
	{
		write(1, &k, 1);
		k++;
	}
	return ;
}

// int main(void)
// {
// 	ft_print_alphabet();
// 	write(1, "\n", 1);
// 	return 0;
// }