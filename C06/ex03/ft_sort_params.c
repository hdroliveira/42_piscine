/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:44:20 by huda-roc          #+#    #+#             */
/*   Updated: 2025/09/07 14:06:52 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;	

	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort(int ac, char **av)
{
	int		i;
	int		k;
	char	*swap;

	i = 0;
	while (i < ac -1)
	{
		k = i + 1;
		while (k < ac)
		{
			if (ft_strcmp(av[i], av[k]) > 0)
			{
				swap = av[i];
				av[i] = av[k];
				av[k] = swap;
			}
			k++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	if (argc < 2)
	{
		return (0);
	}
	ft_sort(argc - 1, argv + 1);
	i = 0;
	while (i < argc - 1)
	{
		k = 0;
		while (argv[i + 1][k] != '\0')
		{
			k++;
		}
		write (1, argv[i + 1], k);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
