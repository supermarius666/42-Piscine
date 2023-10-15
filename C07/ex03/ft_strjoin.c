/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumitru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 00:40:37 by mdumitru          #+#    #+#             */
/*   Updated: 2023/10/10 10:42:24 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + ft_strlen(str + 1));
}

int	ft_lenght(char **str, int size)
{
	int	i;
	int	j;
	int	len;
---
	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_size;
	int		size_sep;
	int		i;
	char	*res;

	if (size == 0)
		return ((char *) malloc(sizeof(char)));
	size_sep = ft_strlen(sep);
	total_size = ft_lenght(strs, size);
	total_size += (size - 1) * size_sep;
	res = (char *) malloc(sizeof(char) * total_size);
	*res = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(res, *(strs + i));
		if (i++ == size - 1)
			break ;
		ft_strcat(res, sep);
	}
	return (res);
}
