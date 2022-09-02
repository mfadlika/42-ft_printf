/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadlika <mfadlika@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:27:08 by mfadlika          #+#    #+#             */
/*   Updated: 2022/07/29 14:28:59 by mfadlika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	c;
	size_t	n_len;
	char	*hay;

	index = 0;
	hay = (char *)haystack;
	n_len = ft_strlen(needle);
	if (n_len == 0 || haystack == needle)
		return (hay);
	while (hay[index] != '\0' && index < len)
	{
		c = 0;
		while (hay[index + c] != '\0' && needle[c] != '\0'
			&& hay[index + c] == needle[c] && index + c < len)
			++c;
		if (c == n_len)
			return (hay + index);
		++index;
	}
	return (0);
}
