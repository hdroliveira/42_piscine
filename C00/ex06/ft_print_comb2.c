/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 13:26:27 by huda-roc          #+#    #+#             */
/*   Updated: 2025/08/28 16:12:50 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;	

	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_putchar (a / 10 + '0');
			ft_putchar (a % 10 + '0');
			ft_putchar (' ');
			ft_putchar (b / 10 + '0');
			ft_putchar (b % 10 + '0');
			if (a / 10 != 9 || a % 10 != 8)
			{
				ft_print();
			}
			b++;
		}
		a++;
	}
}
/*
int main(void)
{
    ft_print_comb2();
    return 0;
}
*/