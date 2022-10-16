#include <stdio.h>

#define MIN(a,b) (a<b?a:b)

int			atoibase(const char *str, int base)
{
	int n = 0;
	int sign = 1;

	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= (MIN('0' + base - 1, '9')))
			n = n * base + *str - '0';
		else if (*str >= 'a' && *str <= ('a' + base - 11))
			n = n * base + *str - 'a' + 10;
		else
			break ;
		str++;
	}
	return (n * sign);
}

int main() {
	printf("%d\n", atoibase("aa", 16));
	printf("%d\n", atoibase("15", 10));
	printf("%d\n", atoibase("101", 2));
}
