/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltacos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 02:18:35 by ltacos            #+#    #+#             */
/*   Updated: 2021/08/11 14:54:09 by ltacos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	clon;

	i = 0;
	clon = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while ((i < power - 1) && ++i)
		nb *= clon;
	return (nb);
}
