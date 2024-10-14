/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:18:32 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/07 16:18:34 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static void	free_node(void *data)
{
	t_list	*node;
	node = (t_list *)data;
	free(node->content);
}*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;
	t_list	*next;

	aux = *lst;
	while (aux != NULL)
	{
		next = aux->next;
		del(aux->content);
		free(aux);
		aux = next;
	}
	*lst = aux;
}
