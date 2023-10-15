/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumitru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 08:55:59 by mdumitru          #+#    #+#             */
/*   Updated: 2023/10/04 10:39:36 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + ft_strlen(str + 1));
}

void	ft_aux(int nbr, char *base, char c)
{
	long int	n;

	n = nbr;
	if (n == 0)
		return (0);
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n < ft_strlen(base))
	{
		c = base[n % ft_strlen(base)];
		write(1, &c, 1);
	}
	else
	{
		c = base[n % ft_strlen(base)];
		ft_aux(n / ft_strlen(base), base, 'c');
		write(1, &c, 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	c = 't';
	while (base[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] && i != j)
				c = 'f';
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			c = 'f';
		i++;
	}
	if (c == 't')
		ft_aux(nbr, base, 'f');
	else
		return ;
}
