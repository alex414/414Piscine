/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 08:52:14 by adiaz-do          #+#    #+#             */
/*   Updated: 2019/12/04 10:43:49 by adiaz-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	long	result;
	long	i;

	i = 2;
	if ((nb < 0) || (nb > 12))
		return (0);
	if (nb == 1)
		return (1);
	result = 1;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
