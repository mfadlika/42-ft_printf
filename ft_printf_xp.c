/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_xp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadlika <mfadlika@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 01:00:16 by mfadlika          #+#    #+#             */
/*   Updated: 2022/08/13 01:00:19 by mfadlika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	ft_put_hex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, format);
		ft_put_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}
}

int	ft_printf_hex(unsigned int num, const char format)
{
	int	len;

	len = 0;
	if (num == 0)
		return (write(1, "0", 1));
	ft_put_hex(num, format);
	while (num != 0)
	{
		num = num / 16;
		++len;
	}
	return (len);
}

void	ft_put_ptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num < 10)
			ft_putchar_fd(num + '0', 1);
		else
			ft_putchar_fd(num - 10 + 'a', 1);
	}
}

int	ft_printf_ptr(unsigned long long ptr)
{
	int			len;
	uintptr_t	num;

	len = 0;
	num = ptr;
	if (ptr == 0)
		return (len += write(1, "0", 1));
	ft_put_ptr(ptr);
	while (ptr)
	{
		ptr = ptr / 16;
		++len;
	}
	return (len);
}

int	ft_printf_ptr_join(unsigned long long ptr)
{
	return (write(1, "0x", 2) + ft_printf_ptr(ptr));
}
