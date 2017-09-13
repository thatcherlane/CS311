//
//  main.cpp
//  hw_01
//
//  Created by Thatcher Lane on 9/11/17.
//  Copyright © 2017 Thatcher Lane. All rights reserved.
//

#include "product.h"
#include <iostream>

Product::Product(){
    _name = "";
    _sales = 0;
};

Product::Product(string name, unsigned int sales){
    _name = name;
    _sales = sales;
};

string Product::getName() const {
//    std::cout << name << "!!!!!!!!!!!!!!!!!!!!!"; 
    return _name;
//    return "";
}

void Product::setName(string name){
    _name = name;
}

int Product::getSales() const {
    return 0; 
}

void Product::setSales(int sales){
    
}

string Product::toString() const {
    return "";
}

Product & Product::operator++(){
    return *this;
}

Product & Product::operator--(){
    return *this;
}

Product Product::operator++(int dummy){
    return *this;
}

Product Product::operator--(int dummy){
    return *this;
}

bool Product::operator==(const Product &b) const{
    return true;
}

bool Product::operator!=(const Product &b) const{
    return false; 
}

std::ostream & operator<<(std::ostream &os, const Product &){
    return os;
}




