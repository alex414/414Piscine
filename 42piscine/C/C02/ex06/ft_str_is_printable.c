/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 15:23:00 by adiaz-do          #+#    #+#             */
/*   Updated: 2019/11/25 09:47:33 by adiaz-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_printable(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
