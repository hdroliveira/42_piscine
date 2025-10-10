/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 16:19:16 by huda-roc          #+#    #+#             */
/*   Updated: 2025/08/31 12:53:01 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
int	main ()
{

	char str1[] = "ofdsnpgsdnsgdpgdspsgd";
	char str2[] = "ADONsdanoADNOADS";
	ft_strupcase (str1);
	ft_strupcase (str2);
	
	printf("%s\n", str1);
    printf("%s\n", str2);  
	return 0;
}
*/