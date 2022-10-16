/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_whole_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 06:12:50 by rmiranda          #+#    #+#             */
/*   Updated: 2022/10/16 06:46:51 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_whole_file(int fd)
{
	char	*swap;
	char	*line;
	char	*whole_file;

	whole_file = NULL;
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		swap = whole_file;
		whole_file = ft_strjoin(whole_file, line);
		if (swap)
			free(swap);
		free(line);
	}
	return (whole_file);
}