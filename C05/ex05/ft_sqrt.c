/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 19:50:43 by huda-roc          #+#    #+#             */
/*   Updated: 2025/09/04 20:06:17 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
	{
		return (0);
	}
	while ((i * i) < (int)nb)
	{
		i++;
	}
	if (i * i == (int)nb)
	{
		return (i);
	}
	else
		return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d \n", ft_sqrt(25));
	printf("%d \n", ft_sqrt(9));
	printf("%d \n", ft_sqrt(0));
	printf("%d \n", ft_sqrt(145689564));
	printf("%d \n", ft_sqrt(81));
	printf("%d \n", ft_sqrt(-10));
	return (0);
}
*/
