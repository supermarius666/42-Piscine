/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumitru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 08:45:59 by mdumitru          #+#    #+#             */
/*   Updated: 2023/10/12 12:07:41 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef int	t_bool;
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define EVEN(nbr) (nbr % 2 == 0) 
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

#endif
