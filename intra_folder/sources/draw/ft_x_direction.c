/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_direction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <amaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:55:00 by amaria-m          #+#    #+#             */
/*   Updated: 2022/05/02 16:55:17 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>

int	ft_x_direction(t_pt a, t_pt b)
{
	if (b.x > a.x)
		return (1);
	else
		return (-1);
}