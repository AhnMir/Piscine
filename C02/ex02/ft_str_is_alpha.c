/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahn <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 22:31:03 by mahn              #+#    #+#             */
/*   Updated: 2021/03/09 16:47:22 by mahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i++];
		if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
		{
			return (0);
		}
	}
	return (1);
}
