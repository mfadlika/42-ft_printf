/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadlika <mfadlika@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:57:01 by mfadlika          #+#    #+#             */
/*   Updated: 2022/07/29 14:35:37 by mfadlika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;

	index = 0;
	if (dstsize == 0)
	{
		while (src[index])
			++index;
		return (index);
	}
	while (index < dstsize - 1 && src[index] != '\0')
	{
		dst[index] = src[index];
		++index;
	}
	if (index < dstsize)
		dst[index] = '\0';
	while (src[index] != '\0')
		++index;
	return (index);
}
