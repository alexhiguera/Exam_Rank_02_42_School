/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
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
  int end;
  int j;

  if (argc == 2) {
    i = 0;
    while (argv[1][i])
      i++;
    i--;
    while (i >= 0) {
      while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
        i--;
      end = i;
      while (i >= 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
        i--;
      j = i + 1;
      while (j <= end)
        write(1, &argv[1][j++], 1);
      if (i >= 0 && end >= 0)
        write(1, " ", 1);
    }
  }
  write(1, "\n", 1);
  return (0);
}
