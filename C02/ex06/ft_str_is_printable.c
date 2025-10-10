/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 15:50:50 by huda-roc          #+#    #+#             */
/*   Updated: 2025/08/31 14:47:00 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str >= 0 && *str <= 31)
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
	printf("%d\n", ft_str_is_printable("ABADDDAD"));
    printf("%d\n", ft_str_is_printable("ABcd/*-+44EFG123"));
    printf("%d\n", ft_str_is_printable(""));  
	printf("%d\n", ft_str_is_printable("oqwneoweneoqweoqw"));
	printf("%d\n", ft_str_is_printable("oqwneowene$#@)(*oqweoqw"));
	return 0;
}
*/