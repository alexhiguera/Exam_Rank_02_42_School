/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: columbux <columbux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:23:46 by ahiguera          #+#    #+#             */
/*   Updated: 2024/05/30 19:43:30 by columbux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
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
			result[i] = start + i;
		else
			result[i] = start - i;
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

	tab = ft_range(0, -3);
	i = 0;
	while (i < 4)
		printf("%d ", tab[i++]);
	printf("\n");
	return (0);
}
 */
