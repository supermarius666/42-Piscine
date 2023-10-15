/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumitru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:41:19 by mdumitru          #+#    #+#             */
/*   Updated: 2023/09/25 12:40:50 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		res;
	char	c;

	i = 0;
	res = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A')))
			return (0);
		i++;
	}
	return (res);
}