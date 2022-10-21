/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 07:26:06 by absaid            #+#    #+#             */
/*   Updated: 2022/10/19 12:21:35 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = -1;
	if (dst > src)
		while (len--)
			*(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
	else if (src > dst)
		while (++i < len)
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
	return (dst);
}
