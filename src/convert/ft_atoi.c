/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:10:21 by maanton2          #+#    #+#             */
/*   Updated: 2024/11/12 22:04:53 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Advances the pointer to skip whitespace characters at
 * the beginning of the string.
 *
 * This function increments the string pointer until the first character
 * is not whitespace (spaces, tabs, and newline characters).
 *
 * @param str Address of the pointer to the string to be processed.
 */
static void	skip_whitespace(char **str)
{
	while (**str == 32 || (**str >= 9 && **str <= 13))
		(*str)++;
}

/**
 * @brief Evaluates and determines the sign of the number in the string.
 *
 * The function checks for '-' or '+' signs at the start of the string,
 * counting '-' signs to set the final sign. If there are multiple signs,
 * the function sets `str` to "0" and returns without modifying `sign`.
 *
 * @param sign Pointer to an integer that will receive the value 1 or -1.
 * @param str Address of the pointer to the string, which will advance
 * through the signs.
 */
static void	evaluate_sign(int *sign, char **str)
{
	int	count_sign;

	count_sign = 0;
	*sign = 0;
	while (**str == '-' || **str == '+')
	{
		if (**str == '-')
			(*sign)++;
		(*str)++;
		count_sign++;
	}
	if (count_sign > 1)
	{
		*str = "0";
		return ;
	}
	if (*sign % 2 == 0)
		*sign = 1;
	else
		*sign = -1;
}

/**
 * @brief Extracts and converts digit characters from a string to an integer.
 *
 * This function processes the string while characters are digits,
 * calculating the corresponding integer value.
 *
 * @param str Address of the pointer to the string containing digits
 * to be processed.
 * @return int Integer value formed by the digits in the string.
 */
static int	extract_digits(char **str)
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

/**
 * @brief Converts a string to an integer value (works like `atoi`).
 *
 * The `ft_atoi` function skips whitespace, evaluates the sign,
 * and converts the remaining digits in the string to an integer.
 *
 * @param str Input string to be converted.
 * @return int Integer value corresponding to the input string.
 */
int	ft_atoi(const char *str)
{
	char	*p_s;
	int		signal;

	p_s = (char *) str;
	skip_whitespace(&p_s);
	evaluate_sign(&signal, &p_s);
	return (extract_digits(&p_s) * signal);
}
