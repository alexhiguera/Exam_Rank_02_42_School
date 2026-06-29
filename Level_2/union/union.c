/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 00:00:00 by alex            #+#    #+#               */
/*   Updated: 2024/06/29 00:00:00 by alex           ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_union(char *str, int *seen) {
  int i;

  i = 0;
  while (str[i]) {
    if (!seen[(unsigned char)str[i]]) {
      seen[(unsigned char)str[i]] = 1;
      write(1, &str[i], 1);
    }
    i++;
  }
}

int main(int argc, char **argv) {
  int seen[256];
  int i;

  i = 0;
  while (i < 256)
    seen[i++] = 0;
  if (argc == 3) {
    print_union(argv[1], seen);
    print_union(argv[2], seen);
  }
  write(1, "\n", 1);
  return (0);
}
