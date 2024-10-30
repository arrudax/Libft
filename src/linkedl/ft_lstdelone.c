/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:49:57 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/30 17:25:10 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief Deletes a single element from a linked list.
 *
 * This function deletes the specified element from the linked list. It calls
 * the provided delete function to free the content of the element, and then
 * frees the element itself.
 *
 * @param lst A pointer to the element to be deleted.
 * @param del A pointer to a function that deletes the content of the element.
 *            This function is called to free the element's content before
 *            freeing the element itself.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
