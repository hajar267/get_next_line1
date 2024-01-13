/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfiqar <hfiqar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:15:33 by hfiqar            #+#    #+#             */
/*   Updated: 2024/01/13 16:45:38 by hfiqar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 100
#endif

#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>

// #include<stddef.h>
// here add the functions prototype 
char    *get_next_line (int fd);
size_t  ft_strlen(const char *str);
char    *ft_strdup(const char *s);
char    *ft_strjoin(char const *s1, char const *s2);
size_t  ifstate(size_t len_s, size_t start, size_t len);
char    *ft_substr(char const *s, unsigned int start, size_t len);
#endif