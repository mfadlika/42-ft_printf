/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadlika <mfadlika@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:31:03 by mfadlika          #+#    #+#             */
/*   Updated: 2022/07/11 18:31:41 by mfadlika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_char;
	unsigned char	c_char;
	size_t			index;

	s_char = (unsigned char *)s;
	c_char = (unsigned char)c;
	index = 0;
	while (index < n)
	{
		if (s_char[index] == c_char)
			return ((void *)s);
		++s;
		++index;
	}
	return (0);
}
