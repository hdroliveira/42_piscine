/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 15:46:23 by huda-roc          #+#    #+#             */
/*   Updated: 2025/08/31 12:52:55 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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
	printf("%d\n", ft_str_is_uppercase("ABADDDAD"));
    printf("%d\n", ft_str_is_uppercase("ABcdEFG123"));
    printf("%d\n", ft_str_is_uppercase(""));  
	printf("%d\n", ft_str_is_uppercase("oqwneoweneoqweoqw"));
	return 0;
}
*/