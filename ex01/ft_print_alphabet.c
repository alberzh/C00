/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <azaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 10:14:27 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/14 10:48:16 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}
