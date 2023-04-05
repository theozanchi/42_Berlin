/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculator.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 21:44:49 by tzanchi           #+#    #+#             */
/*   Updated: 2023/04/03 21:54:06 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CALCULATOR_H
# define CALCULATOR_H

long	compute(long a, long b, long (*f)(long, long));
long	call_math_ft(long a, long b, char *operand);

#endif
