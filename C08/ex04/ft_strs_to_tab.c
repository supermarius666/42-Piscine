/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumitru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 09:59:29 by mdumitru          #+#    #+#             */
/*   Updated: 2023/10/12 10:28:20 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + ft_strlen(str + 1));
}

char	*ft_strdup(char *str)
{
	int		i;
	int		len;
	char	*res;

	len = ft_strlen(str);
	i = 0;
	res = (char *) malloc((len + 1) * sizeof(char));
	while (str[i] != '\0')
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*a;

	a = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	i = 0;
	if (!(a))
		return (0);
	while (i < ac)
	{
		a[i].size = ft_strlen(av[i]);
		a[i].str = av[i];
		a[i].copy = ft_strdup(av[i]);
		i++;
	}
	a[i].str = 0;
	return (a);
}
