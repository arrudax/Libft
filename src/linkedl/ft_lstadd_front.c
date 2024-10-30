/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:49:57 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/30 17:25:04 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief Adds a new element at the beginning of the linked list.
 *
 * This function takes a pointer to the first element of the list and
 * a pointer to the new element to be added. The new element is added
 * at the front of the list, and it becomes the first element.
 *
 * @param lst A pointer to the pointer of the first element of the list.
 * @param new A pointer to the new element to be added.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
