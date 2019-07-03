#include <iostream>
#include"polynomial.h"
#include<first_degree.cpp>
#include<second_degree.cpp>
#include<third_degree.cpp>
#include<wrappers.cpp>
#include<aggregator.cpp>
#include<memory>
#include<deque>
#include <vector>
using namespace std;

int main()
{
    deque<wrappers<int>> dq;  //kolejka wrapperów

    second_degree<int> a(2,2,1);   // przykładowe Polynomiale różnego stopnia
    third_degree<int> b(2,3,2,2);
    second_degree<int> c(6,2,1);

    unique_ptr<Polynomial<int>> ptr(new first_degree<int>(2,9));       // przykładowe unique pointery na Polynomiale różnego stopnia
    unique_ptr<Polynomial<int>> ptr1(new third_degree<int>(1,1,1,3));
    unique_ptr<Polynomial<int>> ptr2(new second_degree<int>(1,3,1));


    wrappers<int> w(a);        //wrappery wywoływane oboma konstruktorami
    wrappers<int> w1(b);
    wrappers<int> w2(c);
    wrappers<int> wrap(ptr);
    wrappers<int> wrap1(ptr1);
    wrappers<int> wrap2(ptr2);

    dq.push_back(move(w));      //załadowanie wrapperów do kontenera
    dq.push_back(move(w1));
    dq.push_back(move(w2));
    dq.push_back(move(wrap));
    dq.push_back(move(wrap1));
    dq.push_back(move(wrap2));

    aggregator<int> agg(dq, aggregator<int>::sum);  //wywołanie aggregatora


    return 0;
}
