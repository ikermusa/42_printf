/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:24:56 by imusatad          #+#    #+#             */
/*   Updated: 2024/10/02 14:25:32 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

void	print_char(char c);
int		ft_printf(char const *input, ...);
int		print_str(char *str);
int		print_nbr(int n);
int		print_nbr_unsigned(unsigned int n);
void	print_per(void);
int		print_hex(unsigned int n, int uppercase);
int		print_ptr(unsigned long long ptr);

#endif
