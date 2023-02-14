/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:34:22 by egiubell          #+#    #+#             */
/*   Updated: 2023/02/01 19:43:42 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_split(char const *str, char c)
{
	size_t	i;
	size_t	total;

	i = 0;
	total = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			total++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
		i++;
	}
	return (total);
}

/*
static char	*word_cpy(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (end - start + 1));
	while (start < end)
		word[i++] = str[start++];
	word[i] = 0;
	return (word);
}
*/

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	len;
	char	**split;

	if (!s)
		return (NULL);
	i = 0;
	split = (char **)malloc(sizeof(char *) * (count_split(s, c) + 1));
	if (!split)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				s++;
			split[i++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	split[i] = 0;
	return (split);
}
