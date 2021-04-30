/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 10:24:37 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/30 14:09:29 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>

int get_next_line(int fd, char **line)
{
	char buffer[BUFFER_SIZE + 1];
	char *save[4096];
	char *temp;
	char *show;
	int n;
	int cont;
	cont = 0;


	
	if(fd < 0 || BUFFER_SIZE < 1 || !line)
		return (-1);
	n = read(fd, buffer, BUFFER_SIZE);
	while (n > 0)
	{
		if(!save[fd])
		{
			buffer[n] = 0;
			save[fd] = ft_strdup(buffer);
			printf("save if>>>>>%s\n", save[fd]);
		}
		else
		{
			temp = 0;
			temp = ft_strjoin(save[fd],buffer);
			free(save[fd]);
			save[fd] = temp;
			printf("save else>>>>>%s\n", save[fd]);
			printf("TEMPS ELSE>>>>>%s\n", temp);
		}	
		if (ft_strchr(buffer, '\n'))
			break ;
		n = read(fd, buffer, BUFFER_SIZE);
	}
	printf("Break--->%s\n",save[fd]);
	while(*save[fd] != '\n')
	{
		printf("while--->%c\n",*save[fd]);
		save[fd]++;
		cont++;
	}
	temp = save[fd];
	save[fd]++;
	printf("TEMP--->%s\n",temp);
	printf("SAVE--->%c\n",*save[fd]++);
	return(0);
}

int main()
{
	int fd;
	char *line;
	int n;
	line =(char *)malloc(1);
	fd = open ("pr.txt", O_RDWR);
	printf("fd imain>>>>>%d\n", fd);
	if (fd < 0)
		return(0);
	n =  get_next_line(fd, &line);
	//n =  get_next_line(fd, &line);
	free(line);
}