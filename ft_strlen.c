/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 12:45:17 by davli             #+#    #+#             */
/*   Updated: 2025/12/09 12:47:48 by davli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

extern long ft_strlen(const char *s);

int	main()
{
	const char *str = "Hello World!";
	long len = ft_strlen(str);
	printf("Length: %ld\n", len);
	return (0);
}
