/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:36:41 by adiaz-do          #+#    #+#             */
/*   Updated: 2019/12/04 15:50:36 by adiaz-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int n;
	int flag;

	flag = 0;
	n = nb;
	while (flag == 0)
	{
		if (ft_is_prime(n) == 1)
			return (n);
		n++;
		flag = 0;
	}
	return (n);
}
