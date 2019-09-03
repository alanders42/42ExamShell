/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanders <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 09:19:32 by alanders          #+#    #+#             */
/*   Updated: 2019/09/03 09:44:45 by alanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_fprime(unsigned int n)
{
	unsigned int prime;

	if (n == 1)
		printf("1");
	else
	{
		prime = 2;
		while (n > 1)
		{
			if (n % prime == 0)
			{
				printf("%d", prime);
				n /= prime;
				if (n > 1)
					printf("*");
				prime--;
			}
			prime++;
		}
	}
}

int		main(int argc, char **argv)
{
	if (ac == 2 && atoi(av[1]) > 0)
		ft_fprime(atoi(av[1]));
	printf("\n");
	return (0);
}
