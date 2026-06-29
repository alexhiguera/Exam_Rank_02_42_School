/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 00:00:00 by alex            #+#    #+#               */
/*   Updated: 2024/06/29 00:00:00 by alex           ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strspn(const char *s, const char *accept) {
  size_t i;
  size_t j;
  int found;

  i = 0;
  while (s[i]) {
    j = 0;
    found = 0;
    while (accept[j]) {
      if (s[i] == accept[j])
        found = 1;
      j++;
    }
    if (!found)
      return (i);
    i++;
  }
  return (i);
}
