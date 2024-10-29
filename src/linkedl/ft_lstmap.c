/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:49:57 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/29 14:05:45 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Creates a new list by applying a function to each element of the given list.
 *
 * This function iterates through the original linked list `lst`, applying the function
 * `f` to the content of each element. It creates a new element for each result and
 * adds it to the new list. If memory allocation fails while creating a new element,
 * the function clears the new list and returns NULL.
 *
 * @param lst A pointer to the first element of the original linked list.
 * @param f A pointer to the function to be applied to each element's content.
 *          This function should take a pointer to the content and return a pointer
 *          to the new content.
 * @param del A pointer to a function to delete the content of the elements in case
 *            of an allocation failure. This function is called for each element's
 *            content in the new list that was successfully created before the failure.
 * @return A pointer to the new linked list, or NULL if the allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_lst;

	new_lst = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
