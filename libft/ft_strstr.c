/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgils <jgils@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:30:07 by jgils             #+#    #+#             */
/*   Updated: 2024/02/10 03:07:45 by jgils            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	ibig;
	size_t	ilit;
	char	*str;

	if (!(ft_strlen(little)) || big == little)
		return ((char *) big);
	ibig = 0;
	ilit = 0;
	while (big && big[ibig])
	{
		if (big[ibig] == little[0])
		{
			str = &str[ibig];
			ilit = 0;
			while (big[ibig + ilit]
				&& (big[ibig + ilit] == little[ilit]))
				ilit++;
			if (little[ilit++] == '\0')
				return (str);
		}
		ibig++;
	}
	return (NULL);
}
