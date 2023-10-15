/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumitru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:29:09 by mdumitru          #+#    #+#             */
/*   Updated: 2023/10/12 10:49:08 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putnbr(int nb, char c)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n < 10)
	{
		c = n % 10 + 48;
		write(1, &c, 1);
	}
	else
	{
		c = n % 10 + 48;
		ft_putnbr(n / 10, 's');
		write(1, &c, 1);
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size, 's');
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
