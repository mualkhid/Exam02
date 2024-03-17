int ft_list_size(t_list *begin_list)
{
	int i = 0;
	t_list *list;

	list = begin_list;
	while (list)
	{
		list =  list -> next;
		i++;
	}
	return(i);
}

int		ft_list_size(t_list *begin_list)
{
	t_list *list;
	int i;

	list = begin_list;
	i = 0;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}
