/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:39:48 by huda-roc          #+#    #+#             */
/*   Updated: 2025/09/10 11:55:50 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*strcp;

	i = 0;
	while (src[i])
	{
		i++;
	}
	strcp = (char *) malloc(sizeof(char) + (i + 1));
	if (!strcp)
	{
		return (0);
	}
	i = 0;
	while (src[i])
	{
		strcp[i] = src[i];
		i++;
	}
	strcp[i] = '\0';
	return (strcp);
}

/*
#include <stdio.h>

int	main()
{
	char	c[] = "make me laaaaaaaaaaaaaaaaaaaa";
	printf ("%s\n", ft_strdup(c));
}
*/
