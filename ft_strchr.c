/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-el- <oait-el-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:34:04 by oait-el-          #+#    #+#             */
/*   Updated: 2023/11/05 14:34:04 by oait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int i)
{
	int	j;

	j = 0;
	if (!s)
		return (0);
	while (s[j])
	{
		if (s[j] == (char)i)
			return ((char *)&s[j]);
		j++;
	}
	if (s[j] == (char)i)
		return ((char *)&s[j]);
	return (0);
}
// strchr rends la premiere occurence de i dans la chaine s