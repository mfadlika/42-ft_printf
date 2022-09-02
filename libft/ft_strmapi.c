/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadlika <mfadlika@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 09:48:01 by mfadlika          #+#    #+#             */
/*   Updated: 2022/08/02 09:48:34 by mfadlika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*new_s;

	index = 0;
	if (!s || (!s && !f))
		return (ft_strdup(""));
	else if (!f)
		return (ft_strdup(s));
	new_s = ft_strdup(s);
	if (!new_s)
		return (new_s = NULL);
	while (s[index])
	{
		new_s[index] = (*f)(index, s[index]);
		++index;
	}
	return (new_s);
}
