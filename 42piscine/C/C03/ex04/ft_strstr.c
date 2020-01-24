/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 13:20:04 by adiaz-do          #+#    #+#             */
/*   Updated: 2019/11/28 16:01:46 by adiaz-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int cont;
	int find;

	cont = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[cont] != '\0')
	{
		find = 0;
		while (str[cont + find] != '\0'
				&& str[cont + find] == to_find[find])
		{
			if (to_find[find + 1] == '\0')
				return (&str[cont]);
			find++;
		}
		cont++;
	}
	return (0);
}
