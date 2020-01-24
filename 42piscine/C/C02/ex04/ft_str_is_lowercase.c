/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowecase.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:53:32 by adiaz-do          #+#    #+#             */
/*   Updated: 2019/11/26 09:30:28 by adiaz-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_lowercase(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 127)
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
