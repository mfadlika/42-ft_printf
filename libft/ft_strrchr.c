/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadlika <mfadlika@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 23:17:51 by mfadlika          #+#    #+#             */
/*   Updated: 2022/07/09 23:18:06 by mfadlika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	index;
	char	*find;

	index = 0;
	find = 0;
	while (s[index])
	{
		if (s[index] == (char)c)
			find = ((char *)&s[index]);
		++index;
	}
	if (s[index] == c)
		find = ((char *)&s[index]);
	return (find);
}
