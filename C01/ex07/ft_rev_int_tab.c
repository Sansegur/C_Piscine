/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 20:22:08 by sansegur          #+#    #+#             */
/*   Updated: 2022/12/08 20:35:09 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	half;

	i = 0;
	half = size / 2;
	while (half-- > 0)
	{
		temp = tab[i];
		tab [i] = tab[size -1];
		tab[size -1] = temp;
		i++;
		size--;
	}	
}
