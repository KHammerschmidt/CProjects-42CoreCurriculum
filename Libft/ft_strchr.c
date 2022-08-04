/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khammers <khammers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 08:32:39 by khammers          #+#    #+#             */
/*   Updated: 2022/08/04 11:23:36 by khammers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft.h"

/* Locates the first occurence of c, the character to be searched in s. Returns
a pointer to the (first occurence) located character, or NULL if the character
does not appear in the string. */
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != (unsigned char)c && s[i] != '\0')
		i++;
	if (s[i] == (unsigned char)c)
		return ((char *)(s + i));
	else
		return (NULL);
}


