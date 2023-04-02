/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Item.cpp
 * Author: aawri
 * 
 * Created on March 23, 2023, 7:42 PM
 */

#include "Item.h"
#include <cstring>
#include <iostream>

using namespace std
Item::Item() {
    string name;
    string desc;
    itemInfo = new ItemStuct;
     cout<<"****Loading a new Item**** \nEnter the Name of the item: ";
     cin >> name;
     strcpy(itemInfo.name, name.str())
     cout <<"\nEnter the Description limit 120 character: ";
     cin.ignore();
     getline(cin,desc); 
     strcpy(itemInfo.desc, name.str())
     cout <<"\nEnter Category as number {add list of categories}:";
     cin >> itemInfo.category;
     cout << "\nEnter Price of item as xx.xx:";
     cin >>itemInfo.price;
}
Item::Item(ItemStuct new){
    itemInfo = new ItemStuct;
    *itemInfo = *new;
}


Item::~Item() {
}

    void displayName(){
        cout <<"Name: ";
        int i =0;
        while(itemInfo.name[i] != '/0'){
            cout<< itemInfo.name[i];   
            i++
        }
        cout << endl;
    }
    void displayDesc(){
        cout <<"Description: ";
        int i =0;
        while(itemInfo.desc[i] != '/0'){
            cout<< itemInfo.desc[i];   
            i++
        }
        cout << endl;
    }
    void displayCat(int){
        cout <<"Category: "<< itemInfo.category << endl;
    }
    void displayPrice(){
        cout <<"Price: "<< itemInfo.price << endl;
    }
    void display(){
        displayName();
        displayDesc();
        displayCat();
        displayPrice();
    }
    float returnPrice(){
        return itemInfo.price;
    }
    int returnId(){
        return itemInfo.id;  
    }
    char  returnCat(){
        return itemInfo.category;
    }
    
    string returnName(){
        string name;
        int i =0;
        while(itemInfo.name[i] != '/0'){
            name += itemInfo.name[i];
        }
        return name;
    }
       string returnName(){
        string desc;
        int i =0;
        while(itemInfo.name[i] != '/0'){
            name += itemInfo.desc[i];
        }
        return desc;
    }
    ItemStuct returnItemStruct(){
        return itemInfo;
                                 };
  
    int sizeofStruct(){
        return sizeof(ItemStruct)
    }