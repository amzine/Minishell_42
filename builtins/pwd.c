/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 05:51:08 by amimouni          #+#    #+#             */
/*   Updated: 2022/11/23 06:14:12 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../minishell2.h"

int	ft_pwd(void)
{
	char	pwd[PATH_MAX];

	if (pwd == getcwd(pwd, PATH_MAX))
	{
		ft_putendl_fd(pwd, STDOUT);
		return (0);
	}
	else
		return (1);
}
