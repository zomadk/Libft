/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:54:29 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/02 18:53:20 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				count;
	unsigned char		*dest;
	const unsigned char *srcc;

	dest = (unsigned char*)dst;
	srcc = (unsigned char*)srcc;
	count = 0;
	if (dst == src)
		return (dst);
	while (count <= len)
	{
		count++;
		dest[len - count] = srcc[len - count];
	}
	return (dst);
}