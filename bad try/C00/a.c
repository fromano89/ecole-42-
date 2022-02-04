/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 09:49:22 by fromano           #+#    #+#             */
/*   Updated: 2022/02/04 11:45:50 by fromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pianoC(char x, char y)
{
	write(1, &x, 1);
	write(1, &y, 1);
}

int	main(void)
{
	char coordinata1;
	char coordinata2;
		coordinata1 = '4';
		coordinata2 = '6';
	pianoC (coordinata1, coordinata2);
		return (0);
}	
