/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_progress.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 19:25:52 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/29 15:08:20 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int read_to_enter(char **ax, char **line, int n)
{
	//printf("ax read-->%s", *ax);
	char *temp;
	char *temp2;

	if (n < 0)
		return (-1);
	if (!n && !*ax)
	{
		*line = ft_strdup("");
		return (0);
	}
	if ((temp = ft_strchr(*ax, '\n')))
	{
		*temp = 0;
		*line = ft_strdup(*ax);
		temp2 = ft_strdup(++temp);
		free(*ax);
		*ax = temp2;
	}
	else
	{
		*line = *ax;
		*ax = NULL;
		return (0);
	}
	
	return (1);
}

int get_next_line(int fd, char **line)
{
	char 			buffer[BUFFER_SIZE + 1];
	static char		*ax[4096];
	int				n;
	char			*temp;

	if (fd < 0 || BUFFER_SIZE < 1 || !line)
		return (-1);
	n = read(fd, buffer, BUFFER_SIZE);
	while(n > 0)
	{

		if(!ax[fd])
		{
			buffer[n] = 0;
			ax[fd] = ft_strdup(buffer);
		}
		else
		{
			temp = ft_strjoin(ax[fd], buffer);
			free(ax[fd]);
			ax[fd] = temp;
			
		}
		if (ft_strchr(buffer, '\n'))
		{	
			break ;
		}
		n = read(fd, buffer, BUFFER_SIZE);
	}
	printf("ax-->%s\n", ax[fd]);
	return(read_to_enter(&ax[fd],line, n));
}


int main()
{
	int fd;
	char *line;
	int n;
	line =(char *)malloc(1);
	fd = open ("1.txt", O_RDWR);
	printf("fd imain>>>>>%d\n", fd);
	if (fd < 0)
		return(0);
	n =  get_next_line(fd, &line);
	n =  get_next_line(fd, &line);
	printf("fd imain>>>>>%d\n", fd);
	free(line);
}