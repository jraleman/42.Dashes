/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 14:51:06 by jaleman           #+#    #+#             */
/*   Updated: 2017/02/09 15:08:38 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct		s_list
{
	int 			data;
	struct s_list 	*next;
}					t_list;

void	clear_duplicate(t_list *begin)
{
	t_list	*ptr1;
	t_list	*ptr2;
	t_list	*dup;

	ptr1 = begin;
	while (ptr1 != NULL && ptr1->next != NULL)
	{
		ptr2 = ptr1;
		while (ptr2->next != NULL)
		{
			if (ptr1->data == ptr2->next->data)
			{
				dup = ptr2->next;
				ptr2->next = ptr2->next->next;
			}
			else
				ptr2 = ptr2->next;
		}
		ptr1 = ptr1->next;
	}
}
