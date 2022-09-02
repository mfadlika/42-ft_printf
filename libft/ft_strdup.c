/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadlika <mfadlika@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:49:05 by mfadlika          #+#    #+#             */
/*   Updated: 2022/08/01 13:49:50 by mfadlika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new_s;
	int		index;
	int		size;

	size = 0;
	while (s1[size])
		++size;
	new_s = (char *)malloc(sizeof(char) * (size + 1));
	if (!(new_s))
		return (NULL);
	index = 0;
	while (s1[index])
	{
		new_s[index] = s1[index];
		++index;
	}
	new_s[index] = '\0';
	return (new_s);
}
