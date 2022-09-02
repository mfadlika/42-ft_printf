/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadlika <mfadlika@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 08:30:13 by mfadlika          #+#    #+#             */
/*   Updated: 2022/07/09 08:30:21 by mfadlika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_pointer;
	char	*src_pointer;

	dst_pointer = (char *)dst;
	src_pointer = (char *)src;
	if (dst == src)
		return (dst);
	if (src_pointer < dst_pointer)
	{
		while (len--)
			*(dst_pointer + len) = *(src_pointer + len);
		return (dst);
	}
	while (len--)
		*dst_pointer++ = *src_pointer++;
	return (dst);
}
