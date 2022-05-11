/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vescaffr <vescaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:13:25 by vescaffr          #+#    #+#             */
/*   Updated: 2022/05/12 00:01:40 by vescaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putint(int c)
{
	int				i;	
	char			*d;

	d = ft_itoa(c);
	i = ft_putstr(d);
	free(d);
	return (i);
}

int	ft_putunsigned(unsigned int c)
{
	int				i;
	char			*d;

	d = ft_utoa(c);
	i = ft_putstr(d);
	free(d);
	return (i);
}
