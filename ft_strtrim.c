/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 16:16:28 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/09 20:47:18 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		k;
	char	*space;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	while (s[i] && ft_is_blank(s[i]))
		i++;
	k = ft_strlen(&s[i]) - 1;
	while (s[i] && ft_is_blank(s[k + i]))
		k--;
	if (!(space = ft_strnew(k + 1)))
		return (NULL);
	ft_strncpy(space, &s[i], (k + 1));
	return (space);
}
