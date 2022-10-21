/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 07:27:02 by absaid            #+#    #+#             */
/*   Updated: 2022/10/19 13:39:19 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	i++;
	while (--i > 0)
		if (*(s + i) == (unsigned char)c)
			return ((char *)(s + i));
	if (*s == (unsigned char)c)
		return ((char *)(s + i));
	return (NULL);
}
