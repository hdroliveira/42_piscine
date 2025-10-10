/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 10:42:03 by huda-roc          #+#    #+#             */
/*   Updated: 2025/08/30 11:12:54 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	cont;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		cont = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = cont;
		i++;
	}
}
