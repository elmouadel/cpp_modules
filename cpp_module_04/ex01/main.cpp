/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:02:35 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/02 21:09:36 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Brain.h"
#include "Cat.h"
#include "Dog.h"


int main() 
{
    const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;

	delete dog;
	delete cat;
	system("leaks ex01");
	std::cout << std::endl;
	std::cout << std::endl;

	// Proof of deep copy
	Dog medor;
	Cat fifi;

	Dog & medor_ref = medor;
	Cat & fifi_ref = fifi;

	std::cout << std::endl << "creating copies" << std::endl;
	Dog medor_copy(medor_ref);
	Cat fifi_copy(fifi_ref);

	Dog & medor_copy_ref = medor_copy;
	Cat & fifi_copy_ref = fifi_copy;

	std::cout << std::endl << "comparing" << std::endl;
	std::cout << std::endl;


	// Array of animals
	const Animal	*(animal_array[4]);
	std::cout << std::endl;
	// Half filled with dogs
	for (int i = 0; i < 2; i++)
		animal_array[i] = new Dog();
	std::cout << std::endl;

	// Half filled with cats
	for (int i = 2; i < 4; i++)
		animal_array[i] = new Cat();
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		delete animal_array[i];
	std::cout << std::endl;
}