/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadlika <mfadlika@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 20:18:42 by mfadlika          #+#    #+#             */
/*   Updated: 2022/08/12 20:18:44 by mfadlika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list args, const char format)
{
	int	printf_len;

	printf_len = 0;
	if (format == 'c')
		printf_len += ft_printf_char(va_arg(args, int));
	else if (format == 's')
		printf_len += ft_printf_str(va_arg(args, char *));
	else if (format == 'p')
		printf_len += ft_printf_ptr_join(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		printf_len += ft_printf_nbr(va_arg(args, int));
	else if (format == 'u')
		printf_len += ft_printf_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		printf_len += ft_printf_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		printf_len += ft_printf_percent();
	return (printf_len);
}

int	ft_printf(const char *str, ...)
{
	int		index;
	va_list	args;
	int		printf_len;

	index = 0;
	printf_len = 0;
	va_start(args, str);
	while (str[index])
	{
		if (str[index] == '%')
		{
			printf_len += ft_formats(args, str[index + 1]);
			++index;
		}
		else
			printf_len += ft_printf_char(str[index]);
		++index;
	}
	va_end(args);
	return (printf_len);
}
