/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex07.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 22:11:15 by aantonio          #+#    #+#             */
/*   Updated: 2022/08/16 22:17:24 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	for (int i = -10; i <= 59; i++)
	{
		printf("Next prime after %d: %d\n", i, ft_find_next_prime(i));
	}
	return (0);
}
