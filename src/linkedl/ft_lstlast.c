/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:49:57 by maanton2          #+#    #+#             */
/*   Updated: 2024/11/12 22:02:56 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief Returns the last element of a linked list.
 *
 * This function traverses the linked list pointed to by `lst` until it
 * finds the last element, which is defined as the element that points
 * to `NULL`. If the list is empty (i.e., `lst` is NULL), the function
 * returns NULL.
 *
 * @param lst A pointer to the first element of the linked list.
 * @return A pointer to the last element of the list, or NULL if
 * the list is empty.
 */
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*p_lst;

	p_lst = lst;
	if (lst == NULL)
		return (NULL);
	while (p_lst->next != NULL)
		p_lst = p_lst->next;
	return (p_lst);
}
