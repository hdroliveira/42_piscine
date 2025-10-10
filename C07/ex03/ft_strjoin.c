/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 14:21:41 by huda-roc          #+#    #+#             */
/*   Updated: 2025/09/13 14:33:22 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_cont(int size, char **strs, char *sep)
{
	int	i;
	int	cont;

	cont = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
	{
		cont += ft_strlen(strs[i]);
		i++;
	}
	if (cont <= 0)
	{
		return (0);
	}
	return (cont + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*tab;

	tab = (char *)malloc(ft_cont(size, strs, sep) * sizeof(char));
	if (size == 0)
	{
		return (tab);
	}
	i = 0;
	k = 0;
	while (i < size)
	{
		j = -1;
		while (strs[i][++j])
			tab[k++] = strs[i][j];
		j = -1;
		while (sep[++j] && i < size - 1)
			tab[k++] = sep[j];
		i++;
	}
	tab[k] = '\0';
	return (tab);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{

	int	size;
	char	*sep;
	char	**strs;
	char	*str;

	(void)argc;
	(void)argv;
	strs = (char**)malloc(sizeof(strs) * 5);
	strs[0] = "Eu";
	strs[1] = "Estou";
	strs[2] = "Testando";
	strs[3] = "Esse";
	strs[4] = "Programa!";
	sep = " - ";
	size = 0;
	while (size < 6)
	{
		str = ft_strjoin(size, strs, sep);
		printf("%d: %s\n", size, str);
		free(str);
		size++;
	}
}
*/
