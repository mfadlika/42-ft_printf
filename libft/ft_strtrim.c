/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadlika <mfadlika@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 21:00:38 by mfadlika          #+#    #+#             */
/*   Updated: 2022/08/01 21:01:11 by mfadlika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_getstart(const char *s1, const char *set)
{
	size_t	len;
	size_t	index;

	len = ft_strlen(s1);
	index = 0;
	while (index < len)
	{
		if (ft_strchr(set, s1[index]) == 0)
			break ;
		++index;
	}
	return (index);
}

int	ft_getend(const char *s1, const char *set)
{
	size_t	len;
	size_t	index;

	len = ft_strlen(s1);
	index = 0;
	while (index < len)
	{
		if (ft_strchr(set, s1[len - index - 1]) == 0)
			break ;
		++index;
	}
	return (len - index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*new_str;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = ft_getstart(s1, set);
	end = ft_getend(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	new_str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, s1 + start, end - start + 1);
	return (new_str);
}
