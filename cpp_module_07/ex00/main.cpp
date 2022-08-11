/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:54:07 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/09 18:32:41 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.h"

int main(void)
{
    std::cout << "max 42 | 1337: " <<  max(42, 1337) << std::endl;
    std::cout << "max Forty-two | Leet ==> " << max("Forty-two", "Leet") << std::endl;
    
    std::cout <<std::endl;
    std::cout << "min 42 | 1337: " << min(42, 1337) << std::endl;
    std::cout << "min Forty-two | Leet ==> " << min("Forty-two", "Leet") << std::endl;
    
    std::cout <<std::endl;
    std::cout << "swap : Forty-two | Leet ==> ";
    {
        std::string a = "Forty-two";
        std::string b = "Leet";
    
        swap(a, b);
         std::cout << a << " | " << b << std::endl;
    }
    std::cout <<std::endl;
    std::cout << "swap : 42 | 1337 ==> ";
    {
        int a = 42;
        int b = 1337;
    
        swap(a, b);
        std::cout << a << " | " << b << std::endl;
    }
}


// int main( void ) 
// {
//     int a = 2;
//     int b = 3;
//     ::swap( a, b );
//     std::cout << "a = " << a << ", b = " << b << std::endl;
//     std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
//     std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
//     std::string c = "chaine1";
//     std::string d = "chaine2";
//     ::swap(c, d);
//     std::cout << "c = " << c << ", d = " << d << std::endl;
//     std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
//     std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
//     return 0; 
// }