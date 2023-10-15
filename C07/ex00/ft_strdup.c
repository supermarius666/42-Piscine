/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumitru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 23:45:27 by mdumitru          #+#    #+#             */
/*   Updated: 2023/10/10 10:37:11 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + ft_strlen(str + 1));
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*res;

	i = 0;
	res = (char *) malloc(ft_strlen(src) * sizeof(char));
	while (src[i] != '\0')
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
