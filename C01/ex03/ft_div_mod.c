/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 12:00:50 by huda-roc          #+#    #+#             */
/*   Updated: 2025/08/29 12:48:13 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
    int va;
    int vb;
    int divs;
    int rest;
    
    va = 10;
    vb = 5;
    ft_div_mod(va, vb, &divs, &rest);
    printf("Valor de A: %d\n", va); 
	printf("Valor de B: %d\n", vb);
	printf("Div: %d\n", divs);
	printf("Resto: %d\n", rest);
    return 0;
}
*/