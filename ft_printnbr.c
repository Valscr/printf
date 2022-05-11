/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vescaffr <vescaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:13:25 by vescaffr          #+#    #+#             */
/*   Updated: 2022/05/10 17:47:08 by vescaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_putint(int c)
{
	int				i;
	char			*d;

	d = ft_itoa(c);
	i = ft_strlen(d);
	ft_putstrvoid(d);
	free(ft_itoa(c));
	free(d);
	return (i);
}

int	ft_putunsigned(unsigned int c)
{
	int				j;
	char			*i;

	i = ft_utoa(c);
	j = ft_strlen(i);
	ft_putstrvoid(i);
	free(ft_utoa(c));
	free(i);
	return (j);
}
