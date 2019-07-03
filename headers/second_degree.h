#ifndef SECOND_DEGREE_H
#define SECOND_DEGREE_H
#include "Polynomial.h"

template <class T>
class second_degree: public Polynomial<T>
{
public:
    second_degree(T, T, T);
    T evaluate(T) const;
};

#endif // SECOND_DEGREE_H
