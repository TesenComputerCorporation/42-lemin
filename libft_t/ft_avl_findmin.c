/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_avl_findmin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstygg <mstygg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 22:01:14 by mstygg            #+#    #+#             */
/*   Updated: 2019/09/27 14:26:44 by mstygg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_avl_t	*ft_avl_findmin(t_avl_t *p)
{
	if (!p->left)
		return (p);
	while (p->left)
		p = p->left;
	return (p);
}