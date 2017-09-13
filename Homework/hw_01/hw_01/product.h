//
//  product.h
//  hw_01
//
//  Created by Thatcher Lane on 9/11/17.
//  Copyright © 2017 Thatcher Lane. All rights reserved.
//

#ifndef product_h
#define product_h
#include <iostream>
using std::string;

class Product{
    public:
        Product();
        Product(string name, unsigned int sales);
        string getName() const;
        int getSales() const;
        void setName(string name);
        void setSales(int sales);
        string toString() const;
        Product & operator++();
        Product & operator--();
        Product operator++(int dummy);
        Product operator--(int dummy);
        bool operator==(const Product &b) const;
        bool operator!=(const Product &b) const;
    
    private:
        string name;
        unsigned int sales;
};

std::ostream & operator<<(std::ostream &, const Product &);

#endif /* product_h */
