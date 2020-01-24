/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 11:49:23 by adiaz-do          #+#    #+#             */
/*   Updated: 2019/11/26 09:29:46 by adiaz-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_numeric(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			flag++;
		}
		i++;
	}
	if (flag != i)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
