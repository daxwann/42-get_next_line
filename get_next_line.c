/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 15:00:34 by xwang             #+#    #+#             */
/*   Updated: 2018/12/09 13:27:08 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_list	*get_file(t_list **cache, const int fd)
{
	t_list	*file;

	file = *cache;
	while (file)
	{
		if ((int)file->content_size == fd)
			return (file);
		file = file->next;
	}
	if (!(file = ft_lstnew("\0", fd)))
		return (NULL);
	ft_lstadd(cache, file);
	file = *cache;
	return (file);
}

int		output_line(char **line, t_list *curr_file)
{
	char	*newline;
	char	*tmp;

	*line = NULL;
	newline = ft_strchr(curr_file->content, '\n');
	if (newline)
	{
		*newline = '\0';
		*line = ft_strdup(curr_file->content);
		tmp = ft_strdup(newline + 1);
		free(curr_file->content);
		curr_file->content = tmp;
		return (1);
	}
	if (ft_strlen(curr_file->content))
	{
		*line = ft_strdup(curr_file->content);
		free(curr_file->content);
		curr_file->content = "\0";
		return (1);
	}
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	static t_list	*cache;
	t_list			*curr_file;
	char			buf[BUFF_SIZE + 1];
	int				bytes_read;
	char			*tmp;

	if (fd < 0 || fd >= MAX_FD || line == NULL || BUFF_SIZE <= 0)
		return (-1);
	if (!(curr_file = get_file(&cache, fd)))
		return (-1);
	while ((bytes_read = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[bytes_read] = '\0';
		if (!(tmp = ft_strjoin(curr_file->content, buf)))
			return (-1);
		free(curr_file->content);
		curr_file->content = tmp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (bytes_read < 0)
		return (-1);
	return (output_line(line, curr_file));
}
