/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
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

int ft_atoi(char *str) {
  int i;
  int nbr;

  i = 0;
  nbr = 0;
  while (str[i]) {
    if (str[i] < '0' || str[i] > '9')
      return (-1);
    nbr = nbr * 10 + (str[i] - '0');
    i++;
  }
  return (nbr);
}

int is_prime(int n) {
  int i;

  if (n < 2)
    return (0);
  i = 2;
  while (i * i <= n) {
    if (n % i == 0)
      return (0);
    i++;
  }
  return (1);
}

int main(int argc, char **argv) {
  int nbr;
  int sum;
  int i;

  sum = 0;
  if (argc == 2) {
    nbr = ft_atoi(argv[1]);
    i = 2;
    while (i <= nbr) {
      if (is_prime(i))
        sum += i;
      i++;
    }
  }
  ft_putnbr(sum);
  write(1, "\n", 1);
  return (0);
}
