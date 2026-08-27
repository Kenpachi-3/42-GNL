/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <ntshuma@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 17:23:37 by ntshuma           #+#    #+#             */
/*   Updated: 2026/08/27 22:05:41 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

typedef struct s_node
{
    int fd;
    char    *stash;
    struct  s_node *next;
}   t_node;

t_node *create_node(int fd, char *stash)
{
    ;
}