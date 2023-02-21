/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:23:10 by absaid            #+#    #+#             */
/*   Updated: 2022/10/19 13:25:16 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (*(s + (++i)))
		if (*(s + i) == (unsigned char)c)
			return ((char *)s + i);
	if (*(s + i) == (unsigned char)c)
		return ((char *)s + i);
	return (NULL);
}
