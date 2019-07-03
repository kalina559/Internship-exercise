#include "wrappers.h"
#include"polynomial.h"
#include<iostream>
using namespace std;

template<class T>
T wrappers<T>::operator ()(T x_value)   //przeładowany operator ()
{
    T wynik = pointer->evaluate(x_value);
    cout<<wynik<<endl;                   //dla sprawdzenia drukuje wyniki poszczegolnych podstawien
    return(wynik);
}
template<class T>
wrappers<T>::wrappers(unique_ptr<Polynomial<T>> & ptr)
{
    pointer = move(ptr);
}
template<class T>
wrappers<T>::wrappers(Polynomial<T> &poly){
    if(typeid (poly) == typeid(third_degree<T>)){              //zależnie od stopnia Polynomiala tworzony jest inny new  i wkazuje na niego unique_ptr
        unique_ptr<Polynomial<T>> ptr(new third_degree<T>(poly.third_coef,poly.second_coef,poly.first_coef,poly.zero_coef));
        pointer = move(ptr);
    }else if (typeid (poly) == typeid(second_degree<T>)) {
        unique_ptr<Polynomial<T>> ptr(new second_degree<T>(poly.second_coef,poly.first_coef,poly.zero_coef));
        pointer = move(ptr);
    }else if (typeid (poly) == typeid(first_degree<T>)) {
        unique_ptr<Polynomial<T>> ptr(new first_degree<T>(poly.first_coef,poly.zero_coef));
        pointer = move(ptr);
    }
}




