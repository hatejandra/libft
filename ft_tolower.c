/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 14:38:45 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/13 16:11:29 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int			ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (c + 32);
	}
	return (c);
}

void		main()
{
	int j = 0;
	char str[] = "Prova";
	char ch;

	while (str[j])
	{
		ch = str[j];
		putchar(ft_tolower(ch));
		j++;
	}
	return (0);
}