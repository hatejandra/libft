/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 16:54:56 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/11 14:15:14 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

	int ft_isascii(int c)
{
	return(( c >= 0) && (c <= 127));
}

int main(void)
{
char c = 'C';
if (isascii(c))
printf("%c is ascii\n",c);
else
printf("%c is not ascii\n",c);
return (0);
}
