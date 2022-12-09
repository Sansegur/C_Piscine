/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:36:34 by sansegur          #+#    #+#             */
/*   Updated: 2022/12/07 18:01:36 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 42;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	printf("div=%d mod=%d\n", div, mod);
	return (0);
}
*/
