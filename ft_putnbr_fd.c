/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 02:38:55 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/27 02:39:51 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    unsigned int i;
    
    i = 0;
    if (n >= 0)
        i = n;
    if (n < 0)
    {
        i = n * -1;
        ft_putchar_fd('-', fd);
    }
    if (i > 9) {
        ft_putnbr(i / 10, fd);
        ft_putchar_fd((i % 10) + '0', fd);
    }
}