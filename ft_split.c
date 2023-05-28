/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgravalo <jgravalo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:15:02 by jgravalo          #+#    #+#             */
/*   Updated: 2023/05/11 15:57:45 by jgravalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
#include<stdlib.h>

static int	words2(const char *s, char c)
{
	int	j;

	j = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (*s && *s != c)
			{
				s++;
			}
			j++;
		}
		else
			++s;
	}	
	return (j);
}

char	**ft_split(char const *s, char c)
{
	int		size;
	int		j;
	char	**res;

	size = 0;
	j = 0;
	res = (char **) malloc((words2(s, c) * (sizeof(char *))) + 8);
	if (!res || !s)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			size = 0;
			while (*s && *s != c && ++size)
				s++;
			res[j++] = ft_substr(s - size, 0, size);
		}
		else
			++s;
	}
	res[j] = NULL;
	return (res);
}
