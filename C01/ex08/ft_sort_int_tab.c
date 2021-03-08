/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahn <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 22:46:09 by mahn              #+#    #+#             */
/*   Updated: 2021/03/08 10:07:44 by mahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int cnt;
	int idx;
	int tmp;

	cnt = 0;
	while (cnt < size - 1)
	{
		idx = 0;
		while (idx < size - 1)
		{
			if (tab[idx] > tab[idx + 1])
			{
				tmp = tab[idx];
				tab[idx] = tab[idx + 1];
				tab[idx + 1] = tmp;
			}
			idx++;
		}
		cnt++;
	}
}
