/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 19:44:10 by cdavila           #+#    #+#             */
/*   Updated: 2016/11/05 19:44:12 by cdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, char const *s2)
{
	int x;
	int y;

	x = (int)ft_strlen(s1);
	y = (int)ft_strlen(s2);
	while (y > 0)
	{
		s1[x] = *s2++;
		x++;
		y--;
	}
	s1[x] = '\0';
	return (s1);
}
