/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:18:15 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/07 16:18:18 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (*lst == NULL)
		*lst = new;
	else
	{
		aux = ft_lstlast(*lst);
		aux->next = new;
	}
}

/*
void print_list(t_list *lst)
{
    while (lst != NULL)
    {
        printf("%s -> \n", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main(void)
{
    // Creating list with two nodes
    t_list *list = ft_lstnew("I ");
    t_list *second = ft_lstnew("love ");

    list->next = second;

    // Printing list before adding the new node
    printf("List before adding:\n");
    print_list(list);

    // Creating a new node and adding in the list
    t_list *new_node = ft_lstnew("Video games!");
    ft_lstadd_back(&list, new_node);

    // Printing the list after add the new node
    printf("List before adding:\n");
    print_list(list);

    return 0;
}*/
