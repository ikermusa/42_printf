/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 09:39:08 by imusatad          #+#    #+#             */
/*   Updated: 2024/10/10 09:39:21 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_nbr_unsigned(unsigned int n)
{
	int		len;
	char	c;

	len = 0;
	if (n >= 10)
		len += print_nbr_unsigned(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
	return (len + 1);
}