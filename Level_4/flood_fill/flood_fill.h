/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: columbux <columbux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 01:22:25 by ahiguera          #+#    #+#             */
/*   Updated: 2024/04/30 20:31:11 by columbux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOD_FILL_H
# define FLOOD_FILL_H

# include <stdlib.h>
# include <stdio.h>

typedef struct s_point
{
  int           x;
  int           y;
}           t_point;

void	fill(char **area, t_point size, t_point vec, char to_fill);
void	flood_fill(char **tab, t_point size, t_point begin);

#endif