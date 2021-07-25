#include "pushswap.h"

static int	over_flow(char *line)
{
	int	num;
	int	tmp;

	num = 0;
	if (!ft_strcmp("-2147483648", line))
		return (0);
	if (*line == '-' || *line == '+')
		line++;
	while (*line >= '0' && *line <= '9')
	{
		tmp = num;
		num = num * 10 + (*line - 48);
		if (tmp > num)
			return (1);
		line++;
	}
	return (0);
}

static int	is_digit(char *line)
{
	if (line[0] == '-' || line[0] == '+')
		line++;
	while (*line)
	{
		if (!ft_isdigit(*line))
			return (1);
		line++;
	}
	return (0);
}

static int	duplicate(char **arr)
{
	int	i;
	int	j;
	int	count;

	i = 1;
	while (arr[i])
	{
		j = 1;
		count = 0;
		while (arr[j])
		{
			if (!ft_strcmp(arr[j], arr[i]))
				count++;
			j++;
		}
		if (count > 1)
			return (1);
		i++;
	}
	return (0);
}

int	check_args(char **arr)
{
	if (!arr)
		return (1);
	if (duplicate(arr))
		return (1);
	arr++;
	while (*arr)
	{
		if (is_digit(*arr))
			return (1);
		if (over_flow(*arr))
			return (1);
		arr++;
	}
	return (0);
}
