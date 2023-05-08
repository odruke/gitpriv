/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 17:39:57 by odruke            #+#    #+#             */
/*   Updated: 2023/05/07 19:59:57 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
int	ft_printnbr(int	i)
{
	int	len;
	char	*nbr;

	nbr = ft_itoa(i);
	len = ft_strlen(nbr);
	ft_printstr(nbr);
	free (nbr);
	return (len);
}
