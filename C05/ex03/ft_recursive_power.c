/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 19:04:40 by huda-roc          #+#    #+#             */
/*   Updated: 2025/09/04 19:37:31 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	resultado;

	resultado = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (power == 1)
	{
		return (nb);
	}
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}
/*
#include <stdio.h>

int	main()
{
	printf ("%d\n", ft_recursive_power(2, 4));
        printf ("%d\n", ft_recursive_power(0, 0));
        printf ("%d\n", ft_recursive_power(0, 1));
        printf ("%d\n", ft_recursive_power(2, -31));
        printf ("%d\n", ft_recursive_power(-2, 31));
        printf ("%d\n", ft_recursive_power(-2, -31));
}
*/
