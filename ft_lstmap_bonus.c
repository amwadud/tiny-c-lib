/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:21:53 by abait-el          #+#    #+#             */
/*   Updated: 2025/10/23 21:47:28 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, tmp);
		lst = lst->next;
	}
	return (head);
}

/* t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	head = ft_lstnew(f(lst->content));
	lst = lst->next;
	if (!head)
		return (NULL);
	tmp = head;
	while (lst)
	{
		tmp->next = ft_lstnew(f(lst->content));
		if (!tmp->next)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		tmp = tmp->next;
		lst = lst->next;
	}
	return (head);
} */

/*
void	tdel(void *val)
{
	(void)val;
}

void	*tf(void *con)
{
	*((int *)con) = (*(int *)con) * 2;
	return con;
}

void	dis_lst(void *con)
{
#include <stdio.h>
	printf("%i\n", *((int *)con));
}

int	main(void)
{
	int	n1 = 5;
	int	n2 = 10;
	t_list *l1 = ft_lstnew(&n1);
	ft_lstadd_back(&l1, ft_lstnew(&n2));
	t_list *lm = ft_lstmap(l1, tf, tdel);
	ft_lstiter(lm, dis_lst);
}
*/
