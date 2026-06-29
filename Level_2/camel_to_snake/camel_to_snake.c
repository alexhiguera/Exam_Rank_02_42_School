/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:00:59 by alex              #+#    #+#             */
/*   Updated: 2024/04/11 21:25:28 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	snake_len(char *str)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z' && i != 0)
			len++;
		len++;
		i++;
	}
	return (len);
}

char	*camel_to_snake(char *str)
{
	char	*snake;
	int		len;
	int		i;
	int		j;

	len = snake_len(str);
	snake = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	j = 0;
	while (j <= len)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (i != 0)
				snake[j++] = '_';
			snake[j] = str[i] + 32;
		}
		else
			snake[j] = str[i];
		j++;
		i++;
	}
	snake[len] = '\0';
	return (snake);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		write(1, camel_to_snake(argv[1]), snake_len(argv[1]));
	write(1, "\n", 1);
	return (0);
}
