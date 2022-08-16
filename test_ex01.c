/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 16:58:15 by vgoncalv          #+#    #+#             */
/*   Updated: 2022/08/15 23:48:22 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int nb;
	int res;

	nb = -5;
	while (nb <= 10)
	{
		res = ft_recursive_factorial(nb);
		printf("> n = %d, n! = %d\n", nb, res);
		nb++;
	}
	return (0);
}