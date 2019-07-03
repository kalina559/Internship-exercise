#include "third_degree.h"
#include<iostream>
using namespace std;
template< class T>
third_degree<T>::third_degree(T third, T second, T first, T zero)
{
    this->third_coef = third;
    this->second_coef = second;
    this->first_coef = first;
    this->zero_coef = zero;
}

template<typename T>
T third_degree<T>::evaluate(T x) const
{
    return (this->third_coef * x * x * x +this->second_coef * x * x + this->first_coef * x + this->zero_coef);
}


