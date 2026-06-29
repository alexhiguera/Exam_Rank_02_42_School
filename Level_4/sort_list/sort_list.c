/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 00:00:00 by alex            #+#    #+#               */
/*   Updated: 2024/06/29 00:00:00 by alex           ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list *sort_list(t_list *lst, int (*cmp)(int, int)) {
  t_list *node;
  int tmp;
  int swapped;

  swapped = 1;
  while (swapped) {
    swapped = 0;
    node = lst;
    while (node && node->next) {
      if (!cmp(node->data, node->next->data)) {
        tmp = node->data;
        node->data = node->next->data;
        node->next->data = tmp;
        swapped = 1;
      }
      node = node->next;
    }
  }
  return (lst);
}
