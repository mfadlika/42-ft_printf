/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadlika <mfadlika@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 09:53:09 by mfadlika          #+#    #+#             */
/*   Updated: 2022/08/02 09:54:07 by mfadlika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_malloc_error(char **tab)
{
	unsigned int	index;

	index = 0;
	while (tab[index])
	{
		free(tab[index]);
		++index;
	}
	free(tab);
	return (NULL);
}

static unsigned int	ft_get_nb_strs(char const *s, char c)
{
	unsigned int	index;
	unsigned int	nb_strs;

	if (!s[0])
		return (0);
	index = 0;
	nb_strs = 0;
	while (s[index] && s[index] == c)
		++index;
	while (s[index])
	{
		if (s[index] == c)
		{
			++nb_strs;
			while (s[index] && s[index] == c)
				++index;
			continue ;
		}
		++index;
	}
	if (s[index - 1] != c)
		++nb_strs;
	return (nb_strs);
}

static void	ft_get_next_str(char **next_str, unsigned int *next_str_len,
					char c)
{
	unsigned int	index;

	*next_str += *next_str_len;
	*next_str_len = 0;
	index = 0;
	while (**next_str && **next_str == c)
		(*next_str)++;
	while ((*next_str)[index])
	{
		if ((*next_str)[index] == c)
			return ;
		(*next_str_len)++;
		++index;
	}
}

char	**ft_split(char const *s, char c)
{
	char			**tab;
	char			*next_str;
	unsigned int	next_str_len;
	unsigned int	nb_strs;
	unsigned int	index;

	nb_strs = ft_get_nb_strs(s, c);
	tab = (char **)malloc(sizeof(char *) * (nb_strs + 1));
	if (!s || !(tab))
		return (NULL);
	index = 0;
	next_str = (char *)s;
	next_str_len = 0;
	while (index < nb_strs)
	{
		ft_get_next_str(&next_str, &next_str_len, c);
		tab[index] = (char *)malloc(sizeof(char) * (next_str_len + 1));
		if (!(tab[index]))
			return (ft_malloc_error(tab));
		ft_strlcpy(tab[index], next_str, next_str_len + 1);
		++index;
	}
	tab[index] = NULL;
	return (tab);
}
