/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadlika <mfadlika@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 08:27:22 by mfadlika          #+#    #+#             */
/*   Updated: 2022/07/09 08:27:35 by mfadlika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b_pointer;
	size_t			index;

	b_pointer = b;
	index = 0;
	while (index < len)
	{
		b_pointer[index] = c;
		++index;
	}
	return (b);
}
