/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:19:15 by jyeo              #+#    #+#             */
/*   Updated: 2017/11/12 07:31:24 by jyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (s1[size] != '\0')
		size++;
	while (s2[i] != '\0')
	{
		s1[size] = s2[i];
		i++;
		size++;
	}
	s1[size] = '\0';
	return (s1);
}
