/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 11:19:33 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/27 02:13:40 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_clear(char **a)
{
	int	i;

	i = 0;
	if (!a || !*a)
		return ;
	while (a[i])
	{
		free(a[i]);
		i++;
	}
	free(a);
}
void	ft_clear_lst(t_stack **a)
{
	t_stack	*tmp;

	if (!a || !*a)
		return ;
	while (*a)
	{
		tmp = *a;
		*a = (*a)->next;
		free(tmp);
	}
}

char	*ft_strdup(const char *s1)
{
	char	*buff;
	size_t	size;
	int		i;

	i = 0;
	if (!s1)
		return (NULL);
	size = ft_strlen(s1);
	buff = malloc(size + 1);
	if (!buff)
		return (NULL);
	while (s1[i])
	{
		buff[i] = s1[i];
		i++;
	}
	buff[i] = '\0';
	return (buff);
}

char	*ft_strjoin_2(char *s1, char *s2)
{
	char	*new_str;
	size_t	total_len;
	size_t	i;
	size_t	j;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	new_str = (char *)malloc(total_len * sizeof(char));
	if (!new_str)
	{
		free(s1);
		return (NULL);
	}
	i = -1;
	while (s1[++i])
		new_str[i] = s1[i];
	j = -1;
	while (s2[++j])
		new_str[i++] = s2[j];
	new_str[i] = '\0';
	free(s1);
	return (new_str);
}
