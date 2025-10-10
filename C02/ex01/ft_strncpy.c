/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 13:29:15 by huda-roc          #+#    #+#             */
/*   Updated: 2025/08/31 12:51:43 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main(void)
{
    char src[] = "Ola, tudo bem?";
    char dest1[20];
    char dest2[20];

    unsigned int n = 5;

	ft_strncpy(dest1, src, n);
    strncpy(dest2, src, n);

    dest1[n] = '\0';
    dest2[n] = '\0';

    printf("Formato Original:%s\n", src);
    printf("ft_strncpy:%s\n", dest1);
    printf("strncpy:%s\n", dest2);

    return 0;
}
*/