/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmart3 <lucmart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:46:01 by lucmart3          #+#    #+#             */
/*   Updated: 2024/07/15 16:15:26 by lucmart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	totallen;
	size_t	i;
	size_t	j;
	char	*buffer;

	totallen = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	j = 0;
	buffer = (char *)malloc(sizeof(char) * (totallen + 1));
	while (s1[i] != '\0')
	{
		buffer[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		buffer[i] = s2[j];
		i++;
		j++;
	}
	buffer[i] = '\0';
	return (buffer);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	size_t	i;
	char	*mem;

	total = count * size;
	mem = malloc(total);
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (i < total)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
