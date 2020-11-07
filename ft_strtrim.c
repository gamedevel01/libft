/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzelda <bzelda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 01:43:48 by bzelda            #+#    #+#             */
/*   Updated: 2020/11/07 09:29:00 by bzelda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ifset(char s1, char	const *set)
{
	int res;

	res = 1;
	while (*set)
	{
		if (s1 == *set)
			res = 0;
		set++;
	}
	return (res);
}

static	size_t	begset(char const *s1, char const *set)
{
	size_t res;

	res = -1;
	while (*s1)
	{
		res++;
		if (ifset(*s1, set))
			return (res);
		s1++;
	}
	return (res);
}

static	size_t	endset(char const *s1, char const *set)
{
	size_t res;
	size_t count;

	count = ft_strlen(s1) - 1;
	res = -1;
	while (count >= 0)
	{
		res++;
		if (ifset(s1[count], set))
			return (res);
		count--;
	}
	return (res);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	count;
	size_t	rescount;

	if (s1 == 0)
		return (0);
	count = begset(s1, set);
	rescount = 0;
	if (begset - 1 == endset)
		return ("");
	res = malloc((ft_strlen(s1) - begset(s1, set) - endset(s1, set)) + 1);
	if (res == NULL)
		return (NULL);
	while (s1[count] && count < ft_strlen(s1) - endset(s1, set))
	{
		res[rescount++] = s1[count];
		count++;
	}
	res[rescount] = '\0';
	return (res);
}
