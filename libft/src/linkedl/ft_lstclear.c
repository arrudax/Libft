/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:49:57 by maanton2          #+#    #+#             */
/*   Updated: 2024/11/12 21:57:38 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief Deletes and frees all elements of a linked list.
 *
 * This function iterates through the linked list, deleting each element
 * and freeing its memory. It also applies the provided delete function
 * to the content of each element before freeing the element itself.
 *
 * @param lst A pointer to the pointer of the first element of the list.
 * @param del A pointer to a function that deletes the content of an element.
 *            This function is called for each element's content
 *            before it is freed.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp_lst;

	while (*lst)
	{
		temp_lst = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp_lst;
	}
}
