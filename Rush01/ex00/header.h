/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 12:03:24 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/26 17:59:41 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

int	ft_is_string_valid(char *str);
int	ft_print_result(int arr[][4]);
int	*ft_string_to_array_conversion(char *str);
int	is_valid(int board[][4], int key[], int pos[], int num);
int	solver(int board[][4], int key[], int row, int col);

#endif
