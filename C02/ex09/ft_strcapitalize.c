/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 17:22:58 by huda-roc          #+#    #+#             */
/*   Updated: 2025/08/31 14:47:28 by huda-roc         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		aa;
	char	c;

	aa = 1;
	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		c = str[i];
		if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
		{
			if (aa && (c >= 'a' && c <= 'z'))
			{
				str[i] = c - 32;
			}
			aa = 0;
		}
		else
		{
			aa = 1;
		}
		i++;
	}
	return (str);
}
/*
int	main ()
{

	char str1[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char str2[] = "hhhhh@ll-lll";
	ft_strcapitalize (str1);
	ft_strcapitalize (str2);
	
	printf("%s\n", str1);
    printf("%s\n", str2);  
	return 0;
}
*/