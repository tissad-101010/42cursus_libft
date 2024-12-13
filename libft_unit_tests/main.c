/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:57:27 by tissad            #+#    #+#             */
/*   Updated: 2023/11/29 18:32:27 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	main(void)
{
	ft_calloc_tests();
	ft_isc_tests();
	ft_atoi_tests();
	ft_itoa_tests();
	ft_bzero_tests();
	ft_strtrim_tests();
	ft_lstnew_tests();
	ft_lstadd_front_tests();
	ft_lstadd_back_tests();
	ft_lstsize_tests();
	ft_lstdelone_tests();
	ft_lstclear_tests();
	ft_lstlast_tests();
	ft_lstiter_tests();
	ft_lstmap_tests();

	return(0);
}
