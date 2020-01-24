/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 09:21:27 by adiaz-do          #+#    #+#             */
/*   Updated: 2019/12/03 11:16:58 by adiaz-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if ((nb == 0 && power != 0) || power < 0)
		return (0);
	if (power == 0 || ((nb < 0) && (power == 0)))
		return (1);
	else
	{
		while (power > 0)
		{
			result = result * nb;
			power--;
		}
		return (result);
	}
}
