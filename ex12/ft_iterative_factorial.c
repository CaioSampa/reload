/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 15:39:35 by casampai          #+#    #+#             */
/*   Updated: 2026/05/13 16:21:36 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int n)
{
    int result;
    
    if(n < 0)
        return (0);
    if(n == 0)
        return (1);
    
    result = n;
    while(n > 1)
        result *= --n;
    
    return (result);
}
