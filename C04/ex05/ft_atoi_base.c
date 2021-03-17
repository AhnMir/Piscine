/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahn <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:35:52 by mahn              #+#    #+#             */
/*   Updated: 2021/03/16 02:44:54 by mahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_base_len;

int	is_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
				|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_get_idx(char c, char *base)
{
	int	i;

	i = 0;
	while (i < g_base_len)
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	minus;
	int	idx;
	int	result;

	g_base_len = is_base(base);
	if (g_base_len < 2)
		return (0);
	minus = 1;
	while (('\t' <= *str && *str <= '\r') || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	result = 0;
	while (*str)
	{
		idx = ft_get_idx(*(str++), base);
		if (idx == -1)
			break ;
		result = (result * g_base_len) + idx;
	}
	return (minus * result);
}
