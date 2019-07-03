#include "first_degree.h"
#include<iostream>
using namespace std;
template< class T>
first_degree<T>::first_degree(T first, T zero)
{
    this->first_coef = first;
    this->zero_coef = zero;
}

template<typename T>
T first_degree<T>::evaluate(T x) const
{
    return (this->first_coef * x + this->zero_coef);
}


