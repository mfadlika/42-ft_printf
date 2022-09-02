/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadlika <mfadlika@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 20:19:54 by mfadlika          #+#    #+#             */
/*   Updated: 2022/08/12 20:19:56 by mfadlika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_printf_char(int c);
int		ft_printf_str(char *str);
int		ft_printf_nbr(int num);
int		ft_printf_percent(void);

char	*ft_uns_itoa(unsigned int n);
int		ft_printf_unsigned(unsigned int num);

int		ft_printf_ptr_join(unsigned long long pointer);
int		ft_printf_hex(unsigned int num, const char format);

#endif