#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*arr;
	int		i;

	i = 0;
	arr = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			ft_putchar(str[i]);
		}
		else if (str[i] < 0)
		{
			ft_putchar('\\');
			ft_putchar(arr[(unsigned char)str[i] / 16]);
			ft_putchar(arr[(unsigned char)str[i] % 16]);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar(arr[str[i] / 16]);
			ft_putchar(arr[str[i] % 16]);
		}
		i++;
	}
}

