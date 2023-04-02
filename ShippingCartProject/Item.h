/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Item.h
 * Author: aawri
 *
 * Created on March 23, 2023, 7:42 PM
 */

#ifndef ITEM_H
#define ITEM_H
   struct ItemStuct{
    int id;
    char name[30];
    char desc[120];
    int category;//map!!!!
    float price;};
};
class Item {
public:
    Item();
    virtual ~Item();
    void displayName();
    void displayDesc();
    void displayCat();
    void displayPrice();
    float returnPrice();
    char * returnCat();
    void updateName(char);
    void updateDesc(char);
    void updateCat(int);
    void updatePrice(int);
    ItemStuct returnItemStruct();
    
private:
ItemStuct itemInfo;

#endif /* ITEM_H */

