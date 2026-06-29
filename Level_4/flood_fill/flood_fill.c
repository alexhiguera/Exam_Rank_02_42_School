/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: columbux <columbux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 01:21:19 by ahiguera          #+#    #+#             */
/*   Updated: 2024/04/30 20:21:27 by columbux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void	fill(char **area, t_point size, t_point vec, char to_fill)
{
	if (vec.y < 0 || vec.y >= size.y || vec.x < 0 || vec.x >= size.x || \
		area[vec.y][vec.x] != to_fill)
		return ;
	area[vec.y][vec.x] = 'F';
	fill(area, size, (t_point){vec.x - 1, vec.y}, to_fill);
	fill(area, size, (t_point){vec.x + 1, vec.y}, to_fill);
	fill(area, size, (t_point){vec.x, vec.y - 1}, to_fill);
	fill(area, size, (t_point){vec.x, vec.y + 1}, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}
/*
char	**make_area(char **zone, t_point size)
{
	char	**new;

	new = malloc(sizeof(char *) * size.y);
	for	(int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}
	return (new);
}

int main(void)
{
	t_point	size = {8, 5};
	char	*zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char	**area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");
	t_point	begin = {7, 4};
	fill(area, size, begin, 'f');
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}
 */