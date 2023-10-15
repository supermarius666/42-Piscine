/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumitru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 08:51:10 by mdumitru          #+#    #+#             */
/*   Updated: 2023/09/29 08:55:28 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlow(char c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	return (0);
}

int	ft_strup(char c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	return (0);
}

int	ft_is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && ft_strlow(str[i]) == 1)
		{
			str[i] = str[i] - 32;
		}
		else if (i != 0)
		{
			if (ft_is_alphanumeric(str[i - 1]) == 0 && ft_strlow(str[i]) == 1)
				str[i] = str[i] - 32;
			if (ft_is_alphanumeric(str[i - 1]) == 1 && ft_strup(str[i]) == 1)
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
