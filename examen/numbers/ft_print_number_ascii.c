/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number_ascii.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:52:30 by sansegur          #+#    #+#             */
/*   Updated: 2022/12/11 20:02:53 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers_ascii(void)
{
	int i; //funciona igual amb char i, pero es como ir en porche!!

	i = 48;
	while (i <= 57)
		{
			write(1, &i, 1);
			i++;
		}
}

int	main(void)
{
	ft_print_numbers_ascii();
	return (0);
}
