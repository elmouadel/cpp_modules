/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:02:35 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/02 19:56:32 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "WrongAnimal.h"
#include "WrongCat.h"


int main() 
{
    const Animal* animal = new Animal(); 
    const Animal* cat = new Cat();
    const Animal* dog = new Dog();
    std::cout << animal->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    std::cout << dog->getType() << " " << std::endl;
    animal->makeSound();
    cat->makeSound();
    dog->makeSound();
    delete animal;
	delete cat;
	delete dog;
    
    std::cout << std::endl;
    const WrongAnimal* wronganimal = new WrongAnimal(); 
    const WrongAnimal* wrongcat = new WrongCat();
    std::cout << wronganimal->getType() << " " << std::endl;
    std::cout << wrongcat->getType() << " " << std::endl;
    wronganimal->makeSound();
    wrongcat->makeSound();
    delete wronganimal;
	delete wrongcat;
    
    std::cout << std::endl;
    const WrongAnimal wwronganimal; 
    const WrongCat wwrongcat;
    std::cout << wwronganimal.getType() << " " << std::endl;
    std::cout << wwrongcat.getType() << " " << std::endl;
    wwronganimal.makeSound();
    wwrongcat.makeSound();
    return 0; 
}