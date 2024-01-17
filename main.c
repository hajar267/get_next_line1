/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfiqar <hfiqar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:19:34 by hfiqar            #+#    #+#             */
/*   Updated: 2024/01/17 01:07:16 by hfiqar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// char	*ft_strchr(const char *s, int c)
// {
// 	int	i;
//     int j;
//     char *str;

// 	i = 0;
//     j = 0;
// 	if (!s)
// 		return 0;
//     while(s[i] && s[i] != 'c')
//         i++;
//     str = malloc(ft_strlen(s) - i + 1);
//     if (!str)
//         return(free(str), NULL);
// 	while (s[i])
//         str[j++] = s[i++];
//     str[j] = '\0';
// 	return (str);
// // }
// int main()
// {
//     char *t = ft_strchr("hajarfqr", 'j');
//     printf("%s", t);
// }