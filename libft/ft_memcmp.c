/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadlika <mfadlika@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:24:05 by mfadlika          #+#    #+#             */
/*   Updated: 2022/07/11 19:24:08 by mfadlika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_pointer;
	const unsigned char	*s2_pointer;
	size_t				index;

	index = 0;
	s1_pointer = (const unsigned char *)s1;
	s2_pointer = (const unsigned char *)s2;
	while (index < n)
	{
		if (s1_pointer[index] != s2_pointer[index])
			return (s1_pointer[index] - s2_pointer[index]);
		++index;
	}
	return (0);
}
