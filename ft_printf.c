/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:25:55 by imusatad          #+#    #+#             */
/*   Updated: 2024/10/02 14:26:05 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(char const *input, ...)
{
	va_list	args;
	int		i;
	int		print_ln;

	print_ln = 0;
	i = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] == '%' && input[i + 1])
		{
			i++;
			print_ln += /*falta imprimir lo que viene despues del % y */;
		}
		else
		{
			ft_putchar(input[i]);
			print_ln++;
		}
		i++;
	}
	va_end(args);
	return (print_ln);
}

/* int	main(void)
{


	return (0);
} */