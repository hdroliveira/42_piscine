/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 17:08:53 by huda-roc          #+#    #+#             */
/*   Updated: 2025/08/31 12:53:05 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
int	main ()
{

	char str1[] = "PSAUDDAPSDBSBP";
	char str2[] = "ADONsdanoADNOADS";
	ft_strlowcase (str1);
	ft_strlowcase (str2);
	
	printf("%s\n", str1);
    printf("%s\n", str2);  
	return 0;
}
*/