/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahn <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 11:38:51 by mahn              #+#    #+#             */
/*   Updated: 2021/03/17 16:04:26 by mahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n, char *base)
{
	write(1, &base[n], 1);
}

void	ft_putnbr(unsigned int num, unsigned int base_len, char *base)
{
	if (num >= base_len)
		ft_putnbr(num / base_len, base_len, base);
	ft_putchar(num % base_len, base);
}

int		is_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
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

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	num;
	int				base_len;

	base_len = is_base(base);
	if (base_len < 2)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		num = nbr * -1;
	}
	else
		num = nbr;
	ft_putnbr(num, base_len, base);
}
