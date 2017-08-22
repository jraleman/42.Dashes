/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 09:27:58 by jaleman           #+#    #+#             */
/*   Updated: 2017/03/14 09:27:59 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		gimme_value(char **tab, char c);

int main(void)
{
	char	**tab;

	tab[0] = "I really miss to eat baguette";
	tab[1] = "instead i’m eating burger";
	tab[2] = "i dont think it’s healthy";
	tab[3] = "but, hell yeah, its Tasty !!!!";
	tab[4] = "lol";
	tab[5] = NULL;
	printf("Return: 8/%d\n", gimme_value(tab, 'i'));
	printf("Return: 17/%d\n", gimme_value(tab, ' '));
	printf("Return: 3/%d\n", gimme_value(tab, 'b'));
	printf("Return: 1/%d\n", gimme_value(tab, 'I'));
	printf("Return: 7/%d\n", gimme_value(tab, 'l'));
	return (0);
}
