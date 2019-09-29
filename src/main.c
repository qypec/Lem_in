/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquaro <yquaro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:22:19 by yquaro            #+#    #+#             */
/*   Updated: 2019/09/29 15:28:42 by yquaro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

// debugging
void				print(void *str)
{
	ft_putstr(str);
}
//

int					main(void)
{	
	t_list		*spath;

	//debugging
	// g_fd = open("test.map", O_RDONLY);
	//

	if ((g_graph = graphinit()) == NULL)
		return (-1);
	parsing();
	// print_graph();
	if ((spath = shortest_path_search()) == NULL)
		error_processing(&spath);

// debugging	
	ft_printf("spath:\n");
	ft_putlst(spath, &print);
	ft_lstdel(&spath, &spath_del);
//

	// print_graph();
	graphdel(&g_graph);

	//debugging
	// close(g_fd);
	//
}
