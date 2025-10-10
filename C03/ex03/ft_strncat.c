/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 14:18:24 by huda-roc          #+#    #+#             */
/*   Updated: 2025/09/10 12:50:35 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	x = 0;
	while (src[x] != '\0' && x < nb)
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

int	main()
{
	char src[] = "Oi!";
	char dest[] = "Tudo bem?";
	
	unsigned int nb = 5;		
	
	printf ("%s\n", "HUDIGOT ");
	printf ("%s\n", ft_strncat(src, dest, nb));
	return (0);
}

