/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:57:41 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/28 21:47:03 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus_includes/get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	i;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	if (s_len - start < len)
		sub_s = (char *)malloc(sizeof(char) * (s_len - start + 1));
	else
		sub_s = (char *)malloc(sizeof(char) * (len + 1));
	if (sub_s == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		sub_s[i] = s[start + i];
		i++;
	}
	sub_s[i] = '\0';
	return (sub_s);
}

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	i;
	size_t	len;

	len = ft_strlen(s1);
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		copy[i] = s1[i];
		i++;
	}
	return (copy);
}

char	*ft_strjoin(char const *s1, const char *s2)
{
	char	*str;
	size_t	str_len;
	size_t	i;

	if (!s1 || !s2)
		return ("");
	str_len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (str_len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (*s1 != '\0')
	{
		str[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		str[i] = *s2;
		s2++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
