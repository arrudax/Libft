/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:49:57 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/30 17:25:27 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief Counts the number of nodes in a list.
 *
 * This function iterates through the linked list, counting the total number
 * of nodes and returning that count.
 *
 * @param lst A pointer to the first node of the list.
 * @return The number of nodes in the list. Returns 0 if the list is empty.
 */
int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*p_lst;

	i = 0;
	p_lst = lst;
	while (p_lst != NULL)
	{
		i++;
		p_lst = p_lst->next;
	}
	return (i);
}
