/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroutled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 07:35:20 by kroutled          #+#    #+#             */
/*   Updated: 2017/07/27 09:01:48 by kroutled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (s1[n] != '\0')
		n++;
	while (s2[i] != '\0')
	{
		s1[n + i] = s2[i];
		i++;
	}
	s1[n + i] = '\0';
	return (s1);
}
