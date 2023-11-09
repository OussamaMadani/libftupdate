/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-el- <oait-el-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:23:29 by oait-el-          #+#    #+#             */
/*   Updated: 2023/11/05 15:23:29 by oait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*tmp;
	size_t		i;

	i = 0;
	if (!s)
		return (NULL);
	if (start < (unsigned int)ft_strlen(s))
	{
		if ((unsigned int)ft_strlen(s + start) < len)
			len = ft_strlen(s + start);
		tmp = (char *)malloc(sizeof(char) * (len + 1));
		if (!tmp)
			return (NULL);
		while (i < len && s[start + i])
		{
			tmp[i] = s[start + i];
			i++;
		}
		tmp[i] = '\0';
	}
	else
		return (ft_strdup(""));
	return (tmp);
}

/*Cette fonction ft_substr extrait une sous-chaîne de caractères à partir 
d'une chaîne d'origine, en spécifiant un indice de départ et une longueur.
 Elle alloue dynamiquement la mémoire nécessaire pour la sous-chaîne et
  renvoie un pointeur vers cette sous-chaîne.*/