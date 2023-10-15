/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumitru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 00:17:06 by mdumitru          #+#    #+#             */
/*   Updated: 2023/10/09 11:38:36 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*res;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	res = (int *) malloc((max - min) * sizeof(int));
	if (!(res))
		return (-1);
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	*range = res;
	return (i);
}
