/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: columbux <columbux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:40:03 by ahiguera          #+#    #+#             */
/*   Updated: 2024/05/30 19:44:49 by columbux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*result;
	int	i;
	int	len;

	if (start <= end)
		len = end - start + 1;
	else
		len = start - end + 1;
	result = (int *)malloc(sizeof(int) * len);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		if (start <= end)
			result[i] = end - i;
		else
			result[i] = end + i;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*tab;
	int	i;

	tab = ft_rrange(1, 3);
	i = 0;
	while (i < 3)
		printf("%d ", tab[i++]);
	printf("\n");
	return (0);
}
 */
