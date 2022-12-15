/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_rev_numbers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:41:17 by sansegur          #+#    #+#             */
/*   Updated: 2022/12/11 19:51:28 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_rev_numbers(void)
{
	int	i;

	i = '9';
	while (i >= '0')
	{
		write(1, &i, 1);
		i--;
	}
	write(1, \n, 1);
   /*	es pot possar tant a la funci'o com al main, si no veig el salt de liania en poso "\n\n" per veure'l i p l'elimino
*/
}

int	main(void)
{
	ft_print_rev_numbers();
	//write(1, "\n", 2);
	return (0);
}
