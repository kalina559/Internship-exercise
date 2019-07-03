#include "second_degree.h"
#include<iostream>
using namespace std;
template< class T>
second_degree<T>::second_degree(T second, T first, T zero)
{
    this->second_coef = second;
    this->first_coef = first;
    this->zero_coef = zero;
}

template<typename T>
T second_degree<T>::evaluate(T x) const
{
    return (this->second_coef * x * x + this->first_coef * x + this->zero_coef);
}

