/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:24:22 by columbux          #+#    #+#             */
/*   Updated: 2024/05/16 16:06:08 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *str)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (i >= 0 && (str[i] == ' ' || str[i] == '\t'))
		i--;
	end = i;
	while (i >= 0 && str[i] != ' ' && str[i] != '\t')
		i--;
	start = i + 1;
	while (start <= end)
		write(1, &str[start++], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
