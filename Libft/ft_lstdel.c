/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aernie <aernie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 19:19:31 by aernie            #+#    #+#             */
/*   Updated: 2019/06/19 16:03:29 by aernie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*acnt;
	t_list	*anxt;

	acnt = *alst;
	while (acnt)
	{
		anxt = acnt->next;
		del((acnt->content), (acnt->content_size));
		free(acnt);
		acnt = anxt;
	}
	*alst = NULL;
}
