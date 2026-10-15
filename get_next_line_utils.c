/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <ntshuma@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 17:23:30 by ntshuma           #+#    #+#             */
/*   Updated: 2026/10/15 15:39:16 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[1] != '\0')
	{
		if (s[i] == char (c))
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

char	*ft_strjoin(char *stash, char *buffer)
{
	size_t	i;
	size_t	j;
	char	*new_stash;

	new_stash = malloc(ft_strlen(stash) + ft_strlen(buffer) + 1);
	if (!new_stash)
	{
		free(stash);
		return (NULL);
	}
	i = 0;
	while (stash && stash[i] != '\0')
	{
		new_stash[i] = stash[i];
		i++;
	}
	j = 0;
	while (buffer[j] != '\0')
	{
		new_stash[i + j] = buffer[j];
		j++;
	}
	new_stash[i + j] = '\0';
	free(stash);
	return (new_stash);
}
