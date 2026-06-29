/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 00:00:00 by alex            #+#    #+#               */
/*   Updated: 2024/06/29 00:00:00 by alex           ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int n) {
  char c;

  if (n >= 10)
    ft_putnbr(n / 10);
  c = n % 10 + '0';
  write(1, &c, 1);
}

int main(int argc, char **argv) {
  (void)argv;
  ft_putnbr(argc - 1);
  write(1, "\n", 1);
  return (0);
}
