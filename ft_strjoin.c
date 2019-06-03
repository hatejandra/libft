/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 21:55:04 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/31 03:14:08 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;

	s = (char *)malloc(sizeof(char) *
			(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	if (s)
		ft_strcpy(ft_strcpy(s, (char *)s1), (char *)s2);
	return (s);
}

// char		*ft_strjoin(char const *s1, char const *s2)
// {
// 	char	*s;

// 	if (!s1 || !s2)
// 		return (NULL);
// 	if (!(s = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
// 		return (NULL);
// 	ft_strcpy(s, s1);
// 	ft_strcat(s, s2);
// 	return (s);
// }
