/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 14:56:53 by huda-roc          #+#    #+#             */
/*   Updated: 2025/08/31 12:52:45 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
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
	printf("%d\n", ft_str_is_alpha("ABcdEFG"));
    printf("%d\n", ft_str_is_alpha("ABcdEFG123"));
    printf("%d\n", ft_str_is_alpha(""));  
	return 0;
}
*/