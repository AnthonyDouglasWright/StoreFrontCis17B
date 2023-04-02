/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Cart.h
 * Author: aawri
 *
 * Created on March 23, 2023, 9:38 PM
 */

#ifndef CART_H
#define CART_H
#include "Item.h"
class Cart {
public:
    Cart();
    Cart(const Cart& orig);
    virtual ~Cart();
private:
    Item *items;
    float total;
    int size;
};

#endif /* CART_H */

