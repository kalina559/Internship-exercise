#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include <type_traits>
#include<tuple>
using namespace std;

template <class T>
class Polynomial{
public:
    virtual T evaluate(T) const = 0;
    T third_coef;
    T second_coef;
    T first_coef;
    T zero_coef;
};

#endif // POLYNOMIAL_H

