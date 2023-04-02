/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Items.h
 * Author: aawri
 *
 * Created on April 1, 2023, 1:26 PM
 */

#ifndef ITEMS_H
#define ITEMS_H
#include "Item.h"
class Items {
public:
    //create item list
    Items();
    virtual ~Items();
    void addItem();
    void removeItem(int);
    Item returnItem(int);
    Item returnItem(char);
    Item * returnAllItem();
    
private:
    Item * listofItem;
    int postion;

};

#endif /* ITEMS_H */

