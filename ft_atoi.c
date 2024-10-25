/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:10:21 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/24 18:59:26 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	isspace(char **str)
{
	while (**str == 32 || (**str >= 9 && **str <= 13))
		(*str)++;
}

static void	isnegative(int *sign, char **str)
{
	int	v;

	v = 0;
	*sign = 0;
	while (**str == '-' || **str == '+')
	{
		if (**str == '-')
			(*sign)++;
		(*str)++;
		v++;
	}
	if (v > 1)
	{
		*str = "0";
		return ;
	}
	if (*sign % 2 == 0)
			*sign = 1;
	else
		*sign = -1;
}

static int	isdigit(char **str)
{
	int	result;

	result = 0;
	while (**str >= 48 && **str <= 57)
	{
		result = result * 10 + (**str - '0');
		(*str)++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	char	*p_s;
	int		signal;
	int		result;

	p_s = (char *) str;
	isspace(&p_s);
	isnegative(&signal, &p_s);
	result = isdigit(&p_s);
	return (result * signal);
}
