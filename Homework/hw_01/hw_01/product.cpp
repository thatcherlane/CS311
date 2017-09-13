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

};

Product::Product(string name, unsigned int sales){
    
};

string Product::getName() const {
    return "";
}

int Product::getSales() const {
    return 0; 
}

void Product::setName(string name){
    
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

std::ostream & operator<<(std::ostream &, const Product &){
    return std::cout;
}




