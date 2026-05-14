/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 19:10:15 by casampai          #+#    #+#             */
/*   Updated: 2026/05/14 19:17:50 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c);

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char** argv)
{
    int count;

    count = 0;
    while (++count != argc)
    {
        while(*argv[count])
        {
            ft_putchar(*argv[count]);
            argv[count]++;
        }
        write(1, "\n", 1);
    }
}
