/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 19:08:33 by mbany             #+#    #+#             */
/*   Updated: 2025/05/29 20:12:13 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
#include <iostream>
#include <string>

class WrongAnimal {
protected:
    std::string type;
public:
    WrongAnimal();
    virtual ~WrongAnimal();
    std::string getType() const;
    virtual void makeSound() const;
};

# endif