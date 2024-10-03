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

	i = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] == '%' && input[i + 1])
		{
			i++;

		}
		i++;
	}
	va_end(args);
	return (1);
}

int	main(void)
{


	return (0);
}