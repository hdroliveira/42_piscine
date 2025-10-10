/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:07:09 by huda-roc          #+#    #+#             */
/*   Updated: 2025/09/03 11:24:10 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i != '\0'])
	{
		write (1, str, 1);
		str++;
	}
}
/*
int	main(void)
{
	char texto[] = "Ola, isso e um teste!";
	ft_putstr(texto);

}
*/
