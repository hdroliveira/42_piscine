/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:15:06 by huda-roc          #+#    #+#             */
/*   Updated: 2025/08/28 13:21:21 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(char x, char y, char z)
{
	ft_putchar (x);
	ft_putchar (y);
	ft_putchar (z);
	if (!(x == '7' && y == '8' && z == '9'))
	{
		ft_putchar (',');
		ft_putchar (' ');
	}
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y +1;
			while (z <= '9')
			{
				ft_print(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}
/*
int main(void)
{
ft_print_comb();
return 0;
}
*/