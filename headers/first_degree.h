#ifndef FIRST_DEGREE_H
#define FIRST_DEGREE_H
#include "Polynomial.h"

template <class T>
class first_degree: public Polynomial<T>
{
public:
    first_degree(T, T);
    T evaluate(T) const;
};

#endif // FIRST_DEGREE_H
