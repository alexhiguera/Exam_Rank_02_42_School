/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:24:26 by ahiguera          #+#    #+#             */
/*   Updated: 2024/03/05 15:02:36 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int				result;
	unsigned int	i;

	if (len == 0)
		return (0);
	result = tab[0];
	i = 1;
	while (i < len)
	{
		if (tab[i] > result)
			result = tab[i];
		i++;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	tab[] = {2, 0, 1, 4, 4, 763, 2937};

	printf("%i\n", max(tab, 7));
	return (0);
}
 */
