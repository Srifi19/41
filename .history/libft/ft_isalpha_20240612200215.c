/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:01:57 by marvin            #+#    #+#             */
/*   Updated: 2024/06/12 20:01:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c){

    // asci code: 65 -> 90 A-Z
    // asci code: 97 -> 122 a-z

    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        return 1;    
    }

    return 0;
}