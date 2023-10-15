/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumitru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:17:07 by mdumitru          #+#    #+#             */
/*   Updated: 2023/09/29 12:46:17 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	if (*str == 0)
		return (0);
	else
		return (1 + ft_strlen(str + 1));
}

char	*ft_strstr(char  *str, char *to_find)
{
	int	i;
	int	len_tofind;

	i = 0;
	while (*str != '\0')
	{
		while (*str == *to_find && i < ft_strlen(to_find));
		{
			
		}
	}
}
