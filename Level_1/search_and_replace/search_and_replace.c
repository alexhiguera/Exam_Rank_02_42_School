/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:06:58 by alex              #+#    #+#             */
/*   Updated: 2024/04/02 16:18:22 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	search_and_replace(char *str, char search, char replace)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == search)
			write(1, &replace, 1);
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4 && argv[2][0] && !argv[2][1] && argv[3][0] && !argv[3][1])
		search_and_replace(argv[1], argv[2][0], argv[3][0]);
	write(1, "\n", 1);
	return (0);
}
