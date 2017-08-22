/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gimme_value.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 09:26:55 by jaleman           #+#    #+#             */
/*   Updated: 2017/03/14 09:26:56 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		gimme_value(char **tab, char c)
{
	int	count;

	count = 0;
	for (int i = 0; tab[i] != NULL; i++)
	{
		for (int j = 0; tab[i][j] != '\0'; j++)
			if (tab[i][j] == c)
				count += 1;
	}
	return (count);
}
