/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfiqar <hfiqar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 23:16:50 by hfiqar            #+#    #+#             */
/*   Updated: 2024/01/19 23:48:04 by hfiqar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
int main()
{
    // int fd1 = open("testest.txt" , O_RDONLY);
    int fd = open("test.txt" , O_RDONLY);
    get_next_line(fd);
    
    // while (str)
    // {
    //     // printf("%s" ,get_next_line(fd));
    // }
    // get_next_line(fd1);
    // get_next_line(fd1);
    // get_next_line(fd);
    // printf("%s", st);
    // printf("%s", str);
    // printf("%s", str1);
    // // printf("\n");
    // printf("%s", st1);
}