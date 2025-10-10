/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 15:38:13 by huda-roc          #+#    #+#             */
/*   Updated: 2025/08/31 12:52:52 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int	main ()
{
	printf("%d\n", ft_str_is_lowercase("ABcdEFG"));
    printf("%d\n", ft_str_is_lowercase("ABcdEFG123"));
    printf("%d\n", ft_str_is_lowercase(""));  
	printf("%d\n", ft_str_is_lowercase("oqwneoweneoqweoqw"));
	return 0;
}
*/