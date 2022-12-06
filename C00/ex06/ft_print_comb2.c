/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 15:37:39 by sansegur          #+#    #+#             */
/*   Updated: 2022/12/05 17:22:38 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < 100)
	{
		b = a;
		while (++b < 100)
		{
			ft_putchar (a / 10 + 48);
			ft_putchar (a % 10 + 48);
			ft_putchar (' ');
			ft_putchar (b / 10 + 48);
			ft_putchar (b % 10 + 48);
			if (!(a == 98 && b == 99))
			{
				ft_putchar (',');
				ft_putchar (' ');
			}
		}
		a++;
	}
}
