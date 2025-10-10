/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:56:30 by huda-roc          #+#    #+#             */
/*   Updated: 2025/09/18 10:04:13 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *str)
{
	char	*cpy;

	cpy = (char *) malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!cpy)
	{
		return (NULL);
	}
	cpy = ft_strcpy (cpy, str);
	return (cpy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*strs;

	strs = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!strs)
	{
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		strs[i].str = av[i];
		strs[i].size = ft_strlen(av[i]);
		strs[i].copy = ft_strdup(av[i]);
		i++;
	}
	strs[i].str = 0;
	strs[i].size = 0;
	strs[i].copy = 0;
	return (strs);
}
