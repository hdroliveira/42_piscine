/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 15:03:00 by huda-roc          #+#    #+#             */
/*   Updated: 2025/09/03 16:57:07 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = nb;
	while (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 0)
	{
		num++;
	}
	while (nb > 1)
	{
		num *= --nb;
	}
	return (num);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(3));
	printf("%d\n", ft_iterative_factorial(13));
	printf("%d\n", ft_iterative_factorial(12));
	printf("%d\n", ft_iterative_factorial(0));

}
*/
