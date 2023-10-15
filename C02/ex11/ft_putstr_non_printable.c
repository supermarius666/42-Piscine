/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumitru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 07:59:04 by mdumitru          #+#    #+#             */
/*   Updated: 2023/09/29 09:19:25 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_inverti(char *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

char	*ft_to_hex(int n, char *str)
{
	int	i;
	int	re;

	if (n / 16 == 0)
		str[1] = '0';
	i = 0;
	while (n != 0)
	{
		re = n % 16;
		if (re > 9)
			str[i] = 'a' + re - 10;
		else
			str[i] = '0' + re;
		n = n / 16;
		i++;
	}
	ft_inverti(str, ft_len(str));
	return (str);
}

void	ft_print(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	s[3];

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 127 && str[i] >= 32)
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			ft_print(ft_to_hex(str[i], s));
		}
		i++;
	}
}
