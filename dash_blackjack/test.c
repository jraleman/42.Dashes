/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 14:53:23 by jaleman           #+#    #+#             */
/*   Updated: 2017/01/26 14:53:24 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			black_jack_hand(char *hand);

int		main(void)
{
	printf("The hand contains 2, 4 : %d\n",black_jack_hand("24"));
	printf("The hand contains D, 8 : %d\n",black_jack_hand("D8"));
	printf("The hand contains A, 4 : %d\n",black_jack_hand("A4"));
	printf("The hand contains A, T : %d\n",black_jack_hand("AT"));
	printf("The hand contains A, A, T : %d\n",black_jack_hand("AAT"));
	printf("The hand contains A, A, 8 : %d\n",black_jack_hand("AA8"));
	printf("The hand contains 3, 3, 9, A, 6 : %d\n",black_jack_hand("339A6"));
	return (0);
}
