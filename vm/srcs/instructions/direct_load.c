/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   direct_load.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kgrosjea <kgrosjea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 11:03:23 by matheme      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/03 12:28:36 by kgrosjea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "corewar.h"

void		direct_load(t_process *proc, t_data *data, int verbose)
{
	get_params(data, proc);
	if (!compute_params(data, proc))
		return ;
	proc->reg[proc->param[1] - 1] = proc->param_value[0];
	proc->carry = (proc->reg[proc->param[1] - 1] == 0) ? 1 : 0;
	if (verbose & VERBOSE_SHOW_OPERATIONS)
		ft_printf("P %4d | ld %d r%hhd\n", proc->id,
			proc->reg[proc->param[1] - 1], (char)proc->param[1]);
}
