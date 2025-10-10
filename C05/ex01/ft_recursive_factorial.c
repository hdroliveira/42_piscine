/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 16:58:14 by huda-roc          #+#    #+#             */
/*   Updated: 2025/09/03 18:13:20 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else if (nb > 1)
	{
		return (nb * ft_recursive_factorial (nb - 1));
	}
	else
	{
		return (1);
	}
}
/*
#include <stdio.h>

int	main()
{
	printf ("%d\n", ft_recursive_factorial(0));
	printf ("%d\n", ft_recursive_factorial(12));
	printf ("%d\n", ft_recursive_factorial(13));
	printf ("%d\n", ft_recursive_factorial(1));
	printf ("%d\n", ft_recursive_factorial(5));
	printf ("%d\n", ft_recursive_factorial(0));

}
*/
