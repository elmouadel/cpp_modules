#include "Span.h"

Span::Span()
{
    std::cout << "Span" << " default constructor called." << std::endl;
}

Span::Span(const Span &span)
{
    *this = span;
}

Span &Span::operator = (const Span &span)
{
    if (this == &span)
        return (*this);
    
    return (*this);
}

Span::~Span()
{
    std::cout << "Span" << " default destructor called." << std::endl;
}
