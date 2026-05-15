/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 17:38:10 by casampai          #+#    #+#             */
/*   Updated: 2026/05/15 12:45:14 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	result;

	result = 0;
	if (nb < 0)
		return (0);
	while (!(result * result >= nb))
	{
		result++;
		if ((result * result == nb))
			return ((int)result);
	}
	return (0);
}
