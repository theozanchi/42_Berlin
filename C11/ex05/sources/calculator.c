/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 21:20:24 by tzanchi           #+#    #+#             */
/*   Updated: 2023/04/03 21:52:53 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math_functions.h"

long	compute(long a, long b, long (*f)(long, long))
{
	return (f(a, b));
}

long	call_math_ft(long a, long b, char *operand)
{
	if (*operand == '+')
		return (compute(a, b, &ft_sum));
	else if (*operand == '-')
		return (compute(a, b, &ft_sub));
	else if (*operand == '/')
		return (compute(a, b, &ft_div));
	else if (*operand == '*')
		return (compute(a, b, &ft_mul));
	else
		return (compute(a, b, &ft_mod));
}
