/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumitru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 23:58:02 by mdumitru          #+#    #+#             */
/*   Updated: 2023/10/10 11:10:18 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*res;

	if (min >= max)
		return (NULL);
	res = (int *) malloc((max - min) * sizeof(int));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}
