/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadlika <mfadlika@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 08:29:03 by mfadlika          #+#    #+#             */
/*   Updated: 2022/07/09 08:29:08 by mfadlika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				index;
	unsigned char		*dst_pointer;
	unsigned char		*src_pointer;

	if (!src && !dst)
		return (NULL);
	dst_pointer = (unsigned char *)dst;
	src_pointer = (unsigned char *)src;
	index = 0;
	while (index < n)
	{
		dst_pointer[index] = src_pointer[index];
		++index;
	}
	return (dst_pointer);
}
