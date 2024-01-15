/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfiqar <hfiqar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:18:23 by hfiqar            #+#    #+#             */
/*   Updated: 2024/01/15 20:29:37 by hfiqar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (0);
}

char    *gal(char *full_line)
{
    size_t  i;
    size_t  j;
    char    *str;
    char    *s = NULL;
    
    str = ft_strchr(full_line, '\n');
    if (str)
    {
        j = ft_strlen(++str);
        i = ft_strlen(full_line) - j;
        s = ft_substr(full_line, i, j);
    }
    return (s);
}

char    *gbl(char *full_line)
{
    char    *line = NULL;
    int     i;
    int     j;
    int size;
    
    i = 0;
    j = 0;
    if (!full_line)
        return (NULL);
    while (full_line[i] && full_line[i] != '\n')
        i++;
    if (!full_line[i])
        size = i+ 1;
    else
        size = i +2;
    line = malloc(size); 
    if (!line)
        return 0;
    i = -1;
    line[size - 1] = '\0';
    while(full_line[++i] && full_line[i] != '\n')
        line[i] = full_line[i];
    line[i] = full_line[i];
    return (line);
}


char    *ft_get_line(int fd)
{
    int     i;
    char    buffer[BUFFER_SIZE + 1];
    char    *line;

    line = NULL;
    while (!ft_strchr(line, '\n')) // while h != 0
    {
        i  = read(fd, buffer, BUFFER_SIZE);  
        if (i == 0 || i == -1)
            break;
        buffer[i] = '\0';
        line = ft_strjoin(line, buffer);
    }
    return (line);
}

char    *get_next_line (int fd)
{
    static char *stv = NULL; //to store the begining of the next line 
    char        *full_line = NULL; // to get the full line with '\n' inside 
    char        *line; // to return
    if (!ft_strchr(stv, '\n'))
        full_line = ft_strjoin(stv, ft_get_line(fd));
    else
        full_line = stv;
    // printf("---%s--\n", full_line);
    line = gbl(full_line); // problem in gbl function that each time we call gnl it retuen first line by each 100 char
    stv = gal(full_line);
    // printf("----\n{%s}\n", stv);
    return (line);
}


int main()
{
    int fd = open("fqr.txt", O_RDONLY);
    // get_next_line(fd);
    // get_next_line(fd);
    // get_next_line(fd);
    // get_next_line(fd);
    // get_next_line(fd);
    // get_next_line(fd);
    // get_next_line(fd);
    // get_next_line(fd);
    // while (1)
    // {
    //     printf("%s", get_next_line(fd));
    //     sleep (1);
    // }
    printf("%s", get_next_line(fd));
    // printf("{------}\n");
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s\n", get_next_line(fd));
    printf("%s\n", get_next_line(fd));
    printf("%s\n", get_next_line(fd));
    printf("%s\n", get_next_line(fd));
}