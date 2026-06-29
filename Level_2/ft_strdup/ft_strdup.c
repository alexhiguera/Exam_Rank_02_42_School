/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:52:32 by alex              #+#    #+#             */
/*   Updated: 2024/04/21 19:08:26 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	len;

	len = 0;
	while (src[len] != '\0')
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		len;
	int		i;

	len = ft_strlen(src);
	dup = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/* int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s\n", ft_strdup(argv[1]));
	return (0);
} */
