
#include <unistd.h>

void	ft_is_negative(int i)
{
	char	p;
	char	n;

	p = 'P';
	n = 'N';
	if (i < 0)
		write(1, &n, 1);
	else
		write(1, &p, 1);
	return ;
}

// int main(void)
// {
// 	ft_is_negative(5);
// 	ft_is_negative(-2147483649); // ??
// 	write(1, "\n", 1);
// 	return 0;
// }