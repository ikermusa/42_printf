/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:36:49 by imusatad          #+#    #+#             */
/*   Updated: 2024/10/03 14:54:43 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_str(char *str)
{
	int	len;

	if (!str)
		str = "(null)";
	len = 0;
	while (str[len])
	{
		print_char(str[len]);
		len++;
	}
	return (len);
}
