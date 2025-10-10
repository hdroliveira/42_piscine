/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:06:11 by huda-roc          #+#    #+#             */
/*   Updated: 2025/09/01 19:59:12 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		x = 0;
		while (str[i + x] == to_find[x] && str[i + x])
		{
			x++;
		}
		if (to_find[x] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
    char *str = "My name is human!";
    char *to_find = "name";
    char *res = ft_strstr(str, to_find);

    if (res)
        printf("Encontrado: %s\n", res);
    else
	printf("Nao Encontrado:\n");

    return 0;
}
*/
