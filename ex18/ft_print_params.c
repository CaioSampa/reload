/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 19:10:15 by casampai          #+#    #+#             */
/*   Updated: 2026/05/15 18:25:00 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char**argv)
{
	int	count;

	count = 0;
	while (++count != argc)
	{
		while (*argv[count])
		{
			ft_putchar(*argv[count]);
			argv[count]++;
		}
		ft_putchar('\n');
	}
	return (0);
}
