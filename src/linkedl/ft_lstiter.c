/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:49:57 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/29 14:03:41 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iterates over a linked list and applies a function to each element.
 *
 * This function traverses the linked list pointed to by `lst` and applies
 * the function `f` to the content of each element. This allows the user to
 * perform operations on each element without modifying the list itself.
 *
 * @param lst A pointer to the first element of the linked list.
 * @param f A pointer to a function that takes a void pointer as an argument
 *          and performs an operation on the content of the list element.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
