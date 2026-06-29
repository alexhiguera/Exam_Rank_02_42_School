/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:26:04 by alex              #+#    #+#             */
/*   Updated: 2024/04/17 17:13:50 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	multiple;

	if (a == 0 || b == 0)
		return (0);
	multiple = a;
	while (multiple % b != 0)
		multiple += a;
	return (multiple);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%u\n", lcm(42, 15));
	return (0);
} */
