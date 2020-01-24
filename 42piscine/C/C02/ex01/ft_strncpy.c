/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 17:45:29 by adiaz-do          #+#    #+#             */
/*   Updated: 2019/11/25 10:14:58 by adiaz-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	counter = -1;
	while (src[++counter] && counter < n)
	{
		dest[counter] = src[counter];
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}
