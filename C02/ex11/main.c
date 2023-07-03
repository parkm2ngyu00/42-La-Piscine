void	ft_putstr_non_printable(char *str);

int main(void)
{
	char str[100] = {-128};
	ft_putstr_non_printable(str);
	return 0;
}

