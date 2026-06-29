/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 00:00:00 by alex            #+#    #+#               */
/*   Updated: 2024/06/29 00:00:00 by alex           ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int print_words(char *s, int start) {
  int i;
  int first;

  i = start;
  first = 1;
  while (s[i]) {
    while (s[i] == ' ' || s[i] == '\t')
      i++;
    if (s[i] && !first)
      write(1, " ", 1);
    while (s[i] && s[i] != ' ' && s[i] != '\t') {
      write(1, &s[i], 1);
      first = 0;
      i++;
    }
  }
  return (!first);
}

void write_word(char *s, int start, int end) {
  while (start < end)
    write(1, &s[start++], 1);
}

int main(int argc, char **argv) {
  int i;
  int w1s;

  if (argc >= 2) {
    i = 0;
    while (argv[1][i] == ' ' || argv[1][i] == '\t')
      i++;
    w1s = i;
    while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
      i++;
    if (print_words(argv[1], i))
      write(1, " ", 1);
    write_word(argv[1], w1s, i);
  }
  write(1, "\n", 1);
  return (0);
}
