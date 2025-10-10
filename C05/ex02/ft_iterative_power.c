/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 18:15:01 by huda-roc          #+#    #+#             */
/*   Updated: 2025/09/03 19:03:03 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	double	resultado;	

	resultado = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	while (--power)
	{
		resultado *= nb;
		if (resultado < -2147483648 || resultado > 2147483647)
		{
			return (0);
		}
	}
	return (resultado);
}
/*
#include <stdio.h>

int	main()
{
	printf ("%d\n", ft_iterative_power(2, 31));
        printf ("%d\n", ft_iterative_power(0, 0));
        printf ("%d\n", ft_iterative_power(0, 1));
        printf ("%d\n", ft_iterative_power(2, -31));
        printf ("%d\n", ft_iterative_power(-2, 31));
        printf ("%d\n", ft_iterative_power(-2, -31));
}
*/
