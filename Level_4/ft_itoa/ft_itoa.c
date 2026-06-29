/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:29:20 by alex              #+#    #+#             */
/*   Updated: 2024/04/26 15:15:54 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len_int(long nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	long	n;
	int		len;
	int		neg;
	char	*result;

	n = nbr;
	len = len_int(n);
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	if (n == 0)
		result[0] = '0';
	while (n)
	{
		result[--len] = n % 10 + '0';
		n /= 10;
	}
	if (neg)
		result[0] = '-';
	return (result);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(-98765));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}
 */
