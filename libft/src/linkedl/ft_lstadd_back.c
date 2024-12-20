/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:49:57 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/30 17:25:01 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief Adds a new element at the end of the linked list.
 *
 * This function takes a pointer to the first element of the list and
 * a pointer to the new element to be added. If the list is empty,
 * the new element becomes the first element. Otherwise, the function
 * traverses the list to find the last element and adds the new element
 * at the end.
 *
 * @param lst A pointer to the pointer of the first element of the list.
 * @param new A pointer to the new element to be added.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p_lst;

	p_lst = *lst;
	if (lst == NULL || new == NULL)
		return ;
	if (p_lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (p_lst->next != NULL)
		p_lst = p_lst->next;
	p_lst->next = new;
}
