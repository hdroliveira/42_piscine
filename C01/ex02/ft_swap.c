/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 12:04:27 by huda-roc          #+#    #+#             */
/*   Updated: 2025/08/29 12:18:13 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	num;

	num = *a;
	*a = *b;
	*b = num;
}
/*
int main(void)
{
    int va;
    int vb;
    
    va = 10;
    vb = 20;
    ft_swap(&va, &vb);
    printf("Valor de A: %d\n", va);
    printf("Valor de B: %d\n", vb);
    return 0;
}
*/