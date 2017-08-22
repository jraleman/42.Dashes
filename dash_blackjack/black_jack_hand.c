/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   black_jack_hand.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 14:53:23 by jaleman           #+#    #+#             */
/*   Updated: 2017/01/26 14:53:24 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			black_jack_hand(char *hand)
{
	int		i;
	int		ace;
	char	card;
	int		score;

	i = 0;
	ace = 0;
	score = 0;
	while (hand[i])
	{
		card = hand[i++];
		if (card >= '2' && card <= '9')
			score += (card - '0');
		if (card == 'T' || card == 'J' || card == 'D' || card == 'K')
			score += 10;
		if (card == 'A')
		{
			ace += 1;
			score += 11;
		}
	}
	while (ace--)
		score > 21 ? score -= 10 : score;
	return (score);
}
