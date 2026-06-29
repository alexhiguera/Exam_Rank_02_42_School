/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: columbux <columbux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:58:50 by columbux          #+#    #+#             */
/*   Updated: 2024/03/21 17:27:35 by columbux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int	count_words(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i]))
			i++;
		if (str[i] && !is_sep(str[i]))
		{
			count++;
			while (str[i] && !is_sep(str[i]))
				i++;
		}
	}
	return (count);
}

char	*word_dup(char *str, int start, int end)
{
	char	*word;
	int		i;

	word = (char *)malloc(sizeof(char) * (end - start + 1));
	i = 0;
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char	**split;
	int		i;
	int		j;
	int		start;

	split = (char **)malloc(sizeof(char *) * (count_words(str) + 1));
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i]))
			i++;
		start = i;
		while (str[i] && !is_sep(str[i]))
			i++;
		if (i > start)
			split[j++] = word_dup(str, start, i);
	}
	split[j] = NULL;
	return (split);
}
