/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvdovenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:33:07 by dvdovenk          #+#    #+#             */
/*   Updated: 2016/12/12 18:57:59 by dvdovenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
