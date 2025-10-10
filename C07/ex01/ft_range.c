/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:46:07 by huda-roc          #+#    #+#             */
/*   Updated: 2025/09/10 17:00:32 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	tam;
	int	*m;

	tam = max - min;
	if (min >= max)
	{
		return (NULL);
	}
	m = (int *) malloc (tam * sizeof(int));
	if (!m)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		m[i] = min;
		min++;
		i++;
	}
	return (m);
}

/*
#include <stdio.h>

int	main ()
{
	int	min = 3;
	int	max = 7;
	int	*arr;
	int	i;

	arr = ft_range(min, max);
	if (!arr)
	{
		printf("Error");
		return (1);
	}

	i = 0;
	while (i < max - min)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	free (arr);

	return (0);
}
*/
