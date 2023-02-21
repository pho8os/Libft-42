/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 07:27:04 by absaid            #+#    #+#             */
/*   Updated: 2022/10/21 22:59:27 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*start;
	const char	*end;
	int			len;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	start = s1;
	end = s1 + len - 1;
	while (*start && ft_strchr(set, *start))
		start++;
	if (start == s1 + len)
		return (ft_strdup(""));
	while (*end && ft_strchr(set, *end))
		end--;
	return (ft_substr(start, 0, end - start + 1));
}
