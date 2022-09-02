/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadlika <mfadlika@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 01:00:58 by mfadlika          #+#    #+#             */
/*   Updated: 2022/08/13 01:01:00 by mfadlika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_printf_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printf_str(char *str)
{
	int	index;

	index = 0;
	if (str == NULL)
	{
		ft_printf_str("(null)");
		return (6);
	}
	while (str[index])
	{
		write(1, &str[index], 1);
		++index;
	}
	return (index);
}

int	ft_printf_nbr(int num)
{
	int		len;
	char	*number;

	number = ft_itoa(num);
	len = ft_printf_str(number);
	free (number);
	return (len);
}

int	ft_printf_percent(void)
{
	write(1, "%", 1);
	return (1);
}
