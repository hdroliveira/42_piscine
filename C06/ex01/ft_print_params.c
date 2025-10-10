/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 15:53:44 by huda-roc          #+#    #+#             */
/*   Updated: 2025/09/06 16:16:58 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	k = 1;
	while (k < argc)
	{
		i = 0;
		while (argv[k][i])
		{
			write (1, &argv[k][i], 1);
			i++;
		}
		write (1, "\n", 1);
		k++;
	}
	return (0);
}
