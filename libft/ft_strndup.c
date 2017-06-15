/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strndup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 14:01:41 by sjones            #+#    #+#             */
/*   Updated: 2017/01/20 15:15:35 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*str;
	char	*temp;

	if (!(str = (char*)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	temp = str;
	while (n > 0)
	{
		*temp = *s1;
		temp++;
		s1++;
		n--;
	}
	*temp = '\0';
	return (str);
}
