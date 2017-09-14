//  
//  product.h
//  Thatcher Lane
//  12 Sep 2017
//  CS 311 hw_01
//
//  Header for class Product
//  Product: _name, _sales
//

#ifndef product_h
#define product_h
#include <iostream>
using std::string;

//  Class Product
//  Invariants: 0 <= _sales
class Product{
    
        friend bool operator==(const Product &lhs, const Product &rhs);
    
    private:
        string _name;
        unsigned int _sales;
    
    public:
        Product();
        Product(string name, unsigned int sales);
    
        string getName() const;
        void setName(string name);
    
        int getSales() const;
        void setSales(int sales);
    
        string toString() const;
    
        Product & operator++(); //Pre
        Product & operator--(); //Pre
    
        Product operator++(int dummy); //Post
        Product operator--(int dummy); //Post
    
        ~Product() = default;
        Product(const Product & other) = default;
        Product(Product && other) = default;
        Product & operator=(const Product & other) = default;
        Product & operator=(Product && other) = default;
    
};

std::ostream & operator<<(std::ostream &os, const Product &p);
bool operator!=(const Product &lhs, const Product &rhs);

#endif /* product_h */
