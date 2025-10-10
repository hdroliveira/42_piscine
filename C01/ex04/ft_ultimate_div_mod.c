/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 12:49:32 by huda-roc          #+#    #+#             */
/*   Updated: 2025/08/29 13:11:06 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int main (void)
{
	int va;
	int vb;

	va = 50;
	vb = 2;
	ft_ultimate_div_mod(&va, &vb);
	printf("Valor A: %d\n" "Valor B: %d\n", va, vb);
}
*/