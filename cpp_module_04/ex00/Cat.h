#ifndef CAT_H
#define CAT_H

# include <iostream>
# include <iomanip>
# include <string>
# include "Animal.h"

class Cat : public Animal
{
    std::string type;

    public:
        Cat();
        Cat(const Cat &cat);
        Cat &operator = (const Cat &cat);
        std::string getType(void) const;
        void makeSound(void) const;
        ~Cat();
};

#endif