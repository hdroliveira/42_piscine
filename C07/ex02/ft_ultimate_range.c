/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 12:32:58 by huda-roc          #+#    #+#             */
/*   Updated: 2025/09/11 12:46:38 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tem;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	tem = (int *) malloc ((max - min) * sizeof(int));
	if (!tem)
	{
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		tem[i] = min;
		i++;
		min++;
	}
	*range = tem;
	return (i);
}

/*
#include<stdio.h>

int main()
{
	int	**arr;
	int	*arr2;
	int	i = 0;
	arr = &arr2;
	printf("%d \n", ft_ultimate_range(arr, 0, 10));
	
	while (i < 10)
	{
		printf("%d ", arr2[i]);
		i++;
	}
	return 0;
}
*/
