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

#include "../ft_printf.h"

int	print_hex(unsigned long long num, int uppercase)
{
	char	buffer[16];
	int		count;
	int		len;
	char	*base;

	count = 0;
	if (num == 0)
		return (write(1, "0", 1));
	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	while (num > 0)
	{
		buffer[count++] = base[num % 16];
		num /= 16;
	}
	len = count;
	while (count--)
		write(1, &buffer[count], 1);
	return (len);
}

