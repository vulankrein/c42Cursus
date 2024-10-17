/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozturk <nozturk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:12:22 by nozturk           #+#    #+#             */
/*   Updated: 2024/10/15 02:32:58 by nozturk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int astrlen(int n)
{
    int temp;
    int res;

    temp = n;
    res = 0;
    if(n == 0)
        return 1;
    if(n < 0)
        res++;
    while (temp != 0)
    {
        temp /= 10;
        res++;
    }
    
    return res;
}
char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	long	longn;

	i = astrlen(n);
	longn=n;
	str = malloc(i + 1);
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (longn == 0)
	{
        str[0]='0'+ 0;
	}
	if (longn < 0)
	{
	str[0] = '-';
	longn = -longn;
	}
	while (longn != 0)
	{
		i--;
		str[i] = '0' + (longn % 10);
        longn /= 10;
	}
	return (str);
}