#include "../inc/lem-inc.h"

int main(void)
{
	t_room	*start;
	size_t 	ants_q;
    char	*transfer;
	t_ants	*ants;
    t_link  *path;

	if (!ft_get_maze_part_1(&start, &ants_q, &transfer))
		return (1);
    if (!ft_get_maze_part_2(&start, transfer))
	{
        ft_set_depth(start);
        path = ft_find_path(start);
        if (!path)
            return (ft_printf("Error\n"));
        ft_print_path(path);
	}
    ft_printf("\n");
	ft_set_depth(start);
//	ft_print_maze(start);
    path = ft_find_path(start);
//    ft_print_path(path);
	ft_get_ants(ants_q, &ants, path);
//	ft_print_ants(ants);
    ft_move_ants(ants, start);
	return 0;
}
