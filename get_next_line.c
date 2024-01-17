/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfiqar <hfiqar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:18:23 by hfiqar            #+#    #+#             */
/*   Updated: 2024/01/17 18:27:01 by hfiqar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void    lk()
{
    system("leaks a.out");
}

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
    free(full_line);
    full_line = NULL;
    return (s);
}

char    *gbl(char *full_line)
{
    char    *line = NULL;
    int     i;
    int     j;
    int     size;
    
    i = 0;
    j = 0;
    if (!full_line)
        return (NULL);
    while (full_line[i] && full_line[i] != '\n')
        i++;
    if (!full_line[i])
        size = i + 1;
    else
        size = i + 2;
    line = malloc(size);
    if (!line)
        return (free (line), NULL);
    i = -1;
    line[size - 1] = '\0';
    while(full_line[++i] && full_line[i] != '\n')
        line[i] = full_line[i];
    line[i] = full_line[i];
    return (line);
}


char    *ft_get_line(int fd, char *stv)
{
    int     i;
    char    *buffer;
    char    *line;

    i = 1;
    line = ft_strdup(stv);
    while (!ft_strchr(line, '\n'))
    {
        buffer = malloc(BUFFER_SIZE + 1);
        if (!buffer)
            return (free(buffer), NULL);
        i  = read(fd, buffer, BUFFER_SIZE);  
        if (i == 0 || i == -1)
            break;
        buffer[i] = '\0';
        line = ft_strjoin(line, buffer);
        free(buffer);
    }
    if (!ft_strlen(line))
        return (free(line), NULL);
    return (line);
}

char    *get_next_line (int fd)
{
    static char *stv = NULL;
    char        *full_line = NULL;
    char        *line;
    char        *tmp;

    if (fd < 0 || BUFFER_SIZE < 0)
        return (NULL);
    full_line = ft_get_line(fd, stv);
    if (!full_line)
        return (NULL);
    line = gbl(full_line);
    if (!line)
        return (NULL);
    stv = gal(full_line);
    if (!stv)
        return (NULL);
    return (line);
}


int main()
{
    int fd = open ("fqr.txt", O_RDONLY);
    char *str = get_next_line(fd);

    printf("%s\n", str);
    atexit(lk);
}