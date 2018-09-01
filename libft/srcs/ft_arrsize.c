/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <rmdaba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 02:23:33 by rmdaba            #+#    #+#             */
/*   Updated: 2018/08/29 11:55:00 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_arrsize(char **arr)
{
	int len;

	if (!arr)
		return (0);
	len = 0;
	while (arr[len])
		len++;
	return (len);
}
