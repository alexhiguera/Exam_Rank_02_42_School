/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 12:55:19 by alex              #+#    #+#             */
/*   Updated: 2024/04/10 16:21:09 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_atoi(char *str)
{
	int	result;
	int	i;

	i = 0;
	if (str[i] == '-')
		return (0);
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

void	put_nbr(int n)
{
	char	*decimal;

	decimal = "0123456789";
	if (n > 9)
	{
		put_nbr(n / 10);
		put_nbr(n % 10);
	}
	else if (n < 10)
		write(1, &decimal[n], 1);
}

void	tab_mult(int mult)
{
	int	i;

	i = 1;
	while (i < 10 && mult != -mult)
	{
		put_nbr(i);
		put_str(" x ");
		put_nbr(mult);
		put_str(" = ");
		put_nbr(i * mult);
		put_str("\n");
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		tab_mult(ft_atoi(argv[1]));
	else
		write(1, "\n", 1);
	return (0);
}
