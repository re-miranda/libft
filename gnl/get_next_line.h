/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:37:09 by rmiranda          #+#    #+#             */
/*   Updated: 2022/05/28 02:34:55 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

typedef struct s_list
{
	int				fd;
	char			*buffer;
	struct s_list	*previous;
	struct s_list	*next;
}	t_list;

char	*get_next_line(int fd);
char	*ft_strdup_gnl(char *str);
t_list	*new_node(int fd, t_list *previous);
t_list	*find_node(int fd, t_list *head);
char	*return_and_free_node(t_list *node);
char	*erase_first_line(t_list *node);
char	*get_line(t_list *node, int fd);

#endif