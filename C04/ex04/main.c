#include <stdio.h>

void ft_putnbr_base(int nbr, char *base);

int main(void)
{
	ft_putnbr_base(-2147483648, "ab");
	printf("\n");
	ft_putnbr_base(5, "ab");
	printf("\n");
	ft_putnbr_base(-5, "ab");
	printf("\n");
	ft_putnbr_base(2147483647, "ab");
	return 0;
}
