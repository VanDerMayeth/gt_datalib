/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   que_stats.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbruzzi <mbruzzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:53:46 by antgalan          #+#    #+#             */
/*   Updated: 2023/06/27 14:14:35 by mbruzzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

int	que_empty(t_queue *queue)
{
	return (queue == NULL);
}

int	que_size(t_queue *queue)
{
	int	i;

	i = 0;
	while (queue)
	{
		queue = queue->next;
		i++;
	}
	return (i);
}

t_queue	*que_first(t_queue *queue)
{
	return (queue);
}

t_queue	*que_last(t_queue *queue)
{
	// TODO
}

t_queue	*que_search(t_queue *queue, void *data)
{
	// TODO
}
