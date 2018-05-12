#include "../inc/lem-inc.h"

void	ft_print_maze(t_room *start)
{
	t_room *ptr;
	t_link *ptr2;
	ptr = start;
	while (ptr != NULL)
	{
		ft_printf("%s [%ld] [%ld]", ptr->room_name, ptr->x, ptr->y);
		if (ptr->start == 1)
			ft_printf(" start");
		if (ptr->end == 1)
			ft_printf(" end");
		ft_printf(" %ld", ptr->depth);
		ft_printf("\n");
		ptr2 = ptr->links;
		while (ptr2 != NULL)
		{
			ft_printf("%s", ptr2->station->room_name);
			if (ptr2->next)
				ft_printf("-");
			else
				ft_printf("\n");
			ptr2 = ptr2->next;
		}
		ft_printf("\n");
		ptr = ptr->next;
	}
	ft_printf("____________\n");
}

void	ft_print_path(t_link *path)
{
	while (path)
	{
		ft_printf("%s", path->station->room_name);
		if (path->next)
			ft_printf("->");
		else
			ft_printf("\n");
		path = path->next;
	}
}

void	ft_print_ants(t_ants *ants)
{
	t_ants	*ptr;

	ptr = ants;
	while (ptr)
	{
		ft_printf("%zu - room \"%s\"\n", ptr->ant_nbr, ptr->road->station->room_name);
		ptr = ptr->next;
	}
}
