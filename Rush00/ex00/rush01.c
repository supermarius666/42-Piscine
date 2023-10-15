/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etiberi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:28:19 by etiberi           #+#    #+#             */
/*   Updated: 2023/09/24 18:49:29 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	aux(int i, int j, int x, int y)
{
	if (i == 0 && j == 0)
		ft_putchar('/');
	else if (j == 0 && i == y - 1)
		ft_putchar('\\');
	else if (i == y - 1 && j == x - 1 && i != 0)
		ft_putchar('/');
	else if (i == 0 && j == x - 1)
		ft_putchar('\\');
	else if ((i == 0 && j != 0) || (i == y - 1 && j != 0))
		ft_putchar('*');
	else if ((j == 0 && i != 0) || (j == x - 1 && i != 0))
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x < 0 || y < 0)
	{
		write(1, "U can't do it!!", 15);
		return ;
	}
	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			aux(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
