/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 15:10:00 by adiaz-do          #+#    #+#             */
/*   Updated: 2019/11/26 14:52:51 by adiaz-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_uppercase(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
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
