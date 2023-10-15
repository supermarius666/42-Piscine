/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumitru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 08:28:59 by mdumitru          #+#    #+#             */
/*   Updated: 2023/10/04 11:24:28 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	prod;

	prod = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		prod = prod * i;
		i++;
	}
	return (prod);
}
