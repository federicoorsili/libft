/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 11:32:33 by dmalori           #+#    #+#             */
/*   Updated: 2021/03/14 16:12:56 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strdigit(const char *str)
{
	while (ft_isdigit(*str))
		str++;
	if (*str == 0)
		return (1);
	return (0);
}