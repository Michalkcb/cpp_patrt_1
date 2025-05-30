/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 00:01:36 by mbany             #+#    #+#             */
/*   Updated: 2025/05/17 13:27:35 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 02: Now we’re talking
Exercise 02
Now we’re talking
Turn-in directory : ex02/
Files to turn in : Makefile, main.cpp, Fixed.{h, hpp}, Fixed.cpp
Allowed functions : roundf (from <cmath>)
Add public member functions to your class to overload the following operators:
• The 6 comparison operators: >, <, >=, <=, == and !=.
• The 4 arithmetic operators: +, -, *, and /.
• The 4 increment/decrement (pre-increment and post-increment, pre-decrement and
post-decrement) operators, that will increase or decrease the fixed-point value from
the smallest representable ϵ such as 1 + ϵ > 1.
Add these four public overloaded member functions to your class:
• A static member function min that takes as parameters two references on fixed-point
numbers, and returns a reference to the smallest one.
• A static member function min that takes as parameters two references to constant
fixed-point numbers, and returns a reference to the smallest one.
• A static member function max that takes as parameters two references on fixed-point
numbers, and returns a reference to the greatest one.
• A static member function max that takes as parameters two references to constant
fixed-point numbers, and returns a reference to the greatest one.
It’s up to you to test every feature of your class. However, running the code below:


#include <iostream>
int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}

Should output something like (for greater readability, the constructor/destructor messages are removed in the example below):
$> ./a.out
0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016
$>
*/

#include "Fixed.hpp"
#include <iostream>

int main( void ) {
// Fixed a;
// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
Fixed a = 10;
Fixed b = 5;
std::cout << "a: " << a << std::endl;
std::cout << "++a: " << ++a << std::endl;
std::cout << "++a: " << ++a << std::endl;
std::cout << "++a: " << ++a << std::endl;
std::cout << "a: " << a << std::endl;
std::cout << "++a: " << ++a << std::endl;
std::cout << "++a: " << ++a << std::endl;
std::cout << "a++: " << a++ << std::endl;
std::cout << "a: " << a << std::endl;
std::cout << "b: " << b << std::endl;
std::cout << "max: " << Fixed::max( a, b ) << std::endl;

std::cout << "min: " << Fixed::min( a, b ) << std::endl;
std::cout << ">: " << ( a > b ? a : b ) << std::endl;
std::cout << "<: " << ( a < b ? a : b) << std::endl;
std::cout << ">=: " << ( a >= b ? a : b) << std::endl;
std::cout << "<=: " << ( a <= b ? a : b) << std::endl;
std::cout << "==: " << ( a == b) << std::endl;
std::cout << "!=: " << ( a != b) << std::endl;
std::cout << "/: " << ( a / b) << std::endl;
std::cout << "+: " << ( a + b) << std::endl;
std::cout << "-: " << ( a - b) << std::endl;
std::cout << "--a: " << --a << std::endl;
std::cout << "--a: " << --a << std::endl;
std::cout << "--a: " << --a << std::endl;
std::cout << "--a: " << --a << std::endl;
std::cout << "b--: " << b-- << std::endl;
std::cout << "b--: " << b-- << std::endl;
std::cout << "b--: " << b-- << std::endl;
std::cout << "b--: " << b-- << std::endl;


return 0;
}