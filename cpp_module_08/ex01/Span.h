#ifndef SPAN_H
#define SPAN_H

# include <iostream>
# include <iomanip>
# include <string>

class Span
{
    public:
        Span();
        Span(const Span &span);
        Span &operator = (const Span &span);
        ~Span();
};

#endif