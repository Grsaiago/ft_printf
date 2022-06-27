/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:56:29 by gsaiago           #+#    #+#             */
/*   Updated: 2022/06/18 21:47:55 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	n;
	size_t	i;
		
	if (count == 0 || size == 0)
		return (NULL);
	i = -1;
	n = count * size;
	ptr = malloc(n);
	if (ptr == NULL)
		return (NULL);
	while (++i < n)
		((char *)ptr)[i] = 0;
	return (ptr);
}

/*
void	ft_putchar(void *ptr, size_t numb)
{
	while (numb-- > 0)
			write(1, &ptr[numb], 1);
}

int	main (void)
{
	void	*ptr = ft_calloc(4, 4);
	ft_putchar(ptr, 16);
}
*/
