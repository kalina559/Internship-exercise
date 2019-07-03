#ifndef THIRD_DEGREE_H
#define THIRD_DEGREE_H
#include "Polynomial.h"
#include<vector>
using namespace std;

template <class T>
class third_degree: public Polynomial<T>
{
public:
    third_degree(T, T, T, T);
    T evaluate(T) const;
};

#endif // THIRD_DEGREE_H
