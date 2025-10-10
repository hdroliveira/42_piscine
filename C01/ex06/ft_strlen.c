/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:43:23 by huda-roc          #+#    #+#             */
/*   Updated: 2025/08/30 10:42:12 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (*str)
	{
		str++;
		cont++;
	}
	return (cont);
}
/*
int	main()
{
	printf("%d\n", ft_strlen("oi tudo bem?"));
}
*/