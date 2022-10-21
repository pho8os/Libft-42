/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 07:27:04 by absaid            #+#    #+#             */
/*   Updated: 2022/10/19 21:28:10 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char *s, char c)
{
	int	i;

	i = -1;
	while (s[++i])
		if (*(s + i) == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*s;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && check((char *)set, s1[i]))
		i++;
	j = i;
	i = ft_strlen(s1) - 1;
	while (i >= 0 && check((char *)set, s1[i]))
		i--;
	s = ft_substr(s1, j, i - j + 1);
	return (s);
}
