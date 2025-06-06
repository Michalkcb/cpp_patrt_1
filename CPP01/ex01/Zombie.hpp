/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:08:10 by mbany             #+#    #+#             */
/*   Updated: 2025/05/08 23:42:16 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class Zombie
{
private:
	std::string name;
	
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	
	void setName(std::string name);
	void announce(void) const;
	Zombie* zombieHorde( int N, std::string name );
};

#endif