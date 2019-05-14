/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 16:50:31 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/13 00:43:39 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int			ft_toupper(int c)
{
	if ((c >= 'a') && (c <='z'))
	{
		return (c-32);
	}
	return (c);
}

int		main()
{
	int j = 0;
	char str[] = "Prova";
	char ch;

	while (str[j])
	{
		ch = str[j];
		putchar(ft_toupper(ch));
		j++;
	}
	return (0);
}