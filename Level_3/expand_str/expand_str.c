/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 00:00:00 by alex            #+#    #+#               */
/*   Updated: 2024/06/29 00:00:00 by alex           ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv) {
  int i;
  int first;

  if (argc == 2) {
    i = 0;
    first = 1;
    while (argv[1][i]) {
      while (argv[1][i] == ' ' || argv[1][i] == '\t')
        i++;
      if (argv[1][i] && !first)
        write(1, "   ", 3);
      while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t') {
        write(1, &argv[1][i], 1);
        first = 0;
        i++;
      }
    }
  }
  write(1, "\n", 1);
  return (0);
}
