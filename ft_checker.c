/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 20:45:00 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/09 20:45:42 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_checker(char *spot, int n, int len, int i)
{
	if (n < 10 && n >= 0)
	{
		spot[i] = n + '0';
		i++;
	}
	if (n >= 10)
	{
		while (len-- && (n != 0))
		{
			spot[len] = (n % 10) + '0';
			n = n / 10;
		}
	}
	return (spot);
}
