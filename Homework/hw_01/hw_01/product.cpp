//
//  main.cpp
//  hw_01
//
//  Created by Thatcher Lane on 9/11/17.
//  Copyright © 2017 Thatcher Lane. All rights reserved.
//

#include "product.h"
#include <iostream>

//  Default ctor
//  Set name to blank
//  Set sales to zero
//  Pre:
//  Post:
Product::Product(){
    _name = "";
    _sales = 0;
};

//  Ctor from post
//  Set name to given string
//  Set sales to given #
//  Pre: none
//  Post:
//      name is represented by a provided string, and sales is represented by an unsigned integer
Product::Product(string name, unsigned int sales){
    _name = name;
    _sales = sales;
};

//  getName()
//  Returns name from Product
//  Pre: None
//  Post:
string Product::getName() const {
    return _name;
}

//  setName()
//  Sets name of Product to provided string
//  Pre: none
//  Post:
//      Product name is now represented by the new provided string
void Product::setName(string name){
    _name = name;
}

//  getSales()
//  Returns sales from Product
//  Pre: None
//  Post:
int Product::getSales() const {
    return _sales;
}

//  setSales()
//  Sets sales of Product to provided string
//  Pre: none
//  Post:
//      Product sales is now represented by the new provided int
void Product::setSales(int sales){
    _sales = sales; 
}

//  toString()
//  Returns a string containing the attributes of Product
//  Pre: none
//  Post:
//      Casts _sales to string named sales
//      Returns a string in the format of _name (sales: sales)
string Product::toString() const {
    string sales = std::to_string(_sales);
    return _name + " " + "(" + "sales: " + sales + ")";
}

//  Operator++ [pre]
//  Pre: none
//  Post:
//      Sales represented have been increased by one
//      Return is *this
Product & Product::operator++(){
    
        ++_sales;
        return *this;
    
}

//  Operator-- [pre]
//  Pre: none
//  Post:
//      Sales represented have been decreased by one
//      Return is *this
Product & Product::operator--(){
    if (_sales == 0){
        return *this;
    }
    else {
        --_sales;
        return *this;
    }
}

//  Operator++ [post]
//  Pre: none
//  Post:
//      Sales represented have been increased by one
//      Return is former value of *this
Product Product::operator++(int dummy){
    Product save = *this;
    ++*this;
    return save;
}

//  Operator-- [post]
//  Pre: none
//  Post:
//      Sales represented have been decreased by one
//      Return is former value of *this
Product Product::operator--(int dummy){
    Product save = *this;
    --*this;
    return save;
}

//  Operator==
//  Pre: none
//  Post:
//      Returns a boolean value based on if both name and sales are equal for two objs
bool operator==(const Product &lhs, const Product &rhs){
    if (lhs._name == rhs._name && lhs._sales == rhs._sales ){
        return true;
    }
    else {
        return false; 
    }
}

//  Operator!=
//  Pre: none
//  Post:
//      Returns a boolean value based on if both name and sales are equal for two objs
//      Calls operator ==
bool operator!=(const Product &lhs, const Product &rhs){
    return !(lhs==rhs); 
}

//  Operator<<
//  Pre: none
//  Post:
//      calls toString and print value to ostream
//      Returns same ostream as was passed
std::ostream & operator<<(std::ostream &os, const Product &p){
    os << p.toString(); 
    return os;
}




