/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 00:27:42 by alex              #+#    #+#             */
/*   Updated: 2024/03/14 14:37:37 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*rot_13(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = ((str[i] - 'A' + 13) % 26) + 'A';
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = ((str[i] - 'a' + 13) % 26) + 'a';
		write(1, &str[i], 1);
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rot_13(argv[1]);
	write(1, "\n", 1);
	return (0);
}
