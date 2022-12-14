/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadlika <mfadlika@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 01:00:45 by mfadlika          #+#    #+#             */
/*   Updated: 2022/08/13 01:00:46 by mfadlika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	ft_dig_count(long n)
{
	size_t	digit;
	int		sign;

	digit = 0;
	sign = 0;
	if (n < 0)
	{
		++digit;
		++sign;
		n = -n;
	}
	while (n >= 1)
	{
		++digit;
		n /= 10;
	}
	return (digit);
}

static char	*ft_gen(char *new_s, long number, int len, int sign)
{
	if (number != 0)
		new_s = malloc(sizeof(char) * (len + 1));
	else
		return (new_s = ft_strdup("0"));
	if (!new_s)
		return (0);
	sign = 0;
	if (number < 0)
	{
		++sign;
		number = -number;
	}
	new_s[len] = '\0';
	while (--len)
	{
		new_s[len] = (number % 10) + '0';
		number /= 10;
	}
	if (sign == 1)
		new_s[0] = '-';
	else
		new_s[0] = (number % 10) + '0';
	return (new_s);
}

char	*ft_uns_itoa(unsigned int n)
{
	unsigned int		len;
	char				*new_s;
	long				number;
	unsigned int		sign;

	number = n;
	len = ft_dig_count(number);
	new_s = 0;
	sign = 0;
	new_s = ft_gen(new_s, number, len, sign);
	if (!(new_s))
		return (0);
	return (new_s);
}

int	ft_printf_unsigned(unsigned int num)
{
	int		len;
	char	*number;

	number = ft_uns_itoa(num);
	len = ft_printf_str(number);
	free (number);
	return (len);
}
