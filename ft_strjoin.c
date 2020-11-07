/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzelda <bzelda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:47:35 by bzelda            #+#    #+#             */
/*   Updated: 2020/11/05 02:42:59 by bzelda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	countf;
	size_t	counts;

	countf = 0;
	counts = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	res = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (s1[countf])
	{
		res[countf] = s1[countf];
		countf++;
	}
	while (s2[counts])
	{
		res[counts + countf] = s2[counts];
		counts++;
	}
	res[countf + counts] = '\0';
	return (res);
}
