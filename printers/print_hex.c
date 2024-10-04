/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:38:54 by imusatad          #+#    #+#             */
/*   Updated: 2024/10/03 15:39:14 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_hex(unsigned int n, int uppercase)
{
	int		len;
	char	*base;

	len = 0;
	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";

	if (n >= 16)
		len += print_hex(n / 16, uppercase);
	write(1, &base[n % 16], 1);
	return (len + 1);
}
