/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozturk <nozturk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:45:12 by nozturk           #+#    #+#             */
/*   Updated: 2024/10/15 01:55:55 by nozturk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strdup(const char *s1)
{
	char	*new;
	int		i;

	i = ft_strlen(s1);
	if (!(new = malloc(sizeof(char) * (i + 1))))
		return (0);
		ft_memcpy(new, s1, i);
	new[i] = '\0';
	return (new);
}