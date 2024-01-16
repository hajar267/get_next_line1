/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfiqar <hfiqar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:19:34 by hfiqar            #+#    #+#             */
/*   Updated: 2024/01/15 23:26:33 by hfiqar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// size_t	ifstate(size_t len_s, size_t start, size_t len)
// {
// 	size_t	size;

// 	if (len_s < start)
// 		size = 0;
// 	else if (len_s < start + len)
// 		size = len_s - start;
// 	else
// 		size = len;
// 	return (size);
// }

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	int		i;
// 	int		j;
// 	char	*str;

// 	j = 0;
// 	i = 0;
// 	if (s1 == NULL)
// 		return (ft_strdup(s2));
// 	else if (s2 == NULL)
// 		return (ft_strdup(s1));
// 	else if (s1 == NULL && s2 == NULL)
// 		return (NULL);
// 	str = (char *)malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
// 	if (!str)
// 		return (NULL);
// 	while (s1[i])
// 	{
// 		str[i] = s1[i];
// 		i++;
// 	}
// 	while (s2[j])
// 	{
// 		str[i++] = s2[j++];
// 	}
// 	str[i] = '\0';
// 	return (str);
// }
// int main()
// {
//     printf("%s\n", ft_strjoin("hajar" ,"fqr"));
// }