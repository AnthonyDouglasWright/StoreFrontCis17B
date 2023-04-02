/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Items.cpp
 * Author: aawri
 * 
 * Created on April 1, 2023, 1:26 PM
 */

#include "Items.h"
#include "Database.h"
Items::Items() {
    Database db;
    postion = db.itemCount();
    listofItem = new Item(postion);
    db.loadItem(listofItem);
}
Items::~Items() {
    delete[] listofItem
}

    void addItem(){
        Item newItem;
        postion++;
        Item * tmp = new Item[postion];
        for(int i = 0; i < postion-1; i++){
            tmp[i] = listofItem[i];
        }
        tmp[postion-1] = newItem;
        delete[] listofItem;
        listofItem = tmp;
    }
    void removeItem(int id){
        bool matched = false;
        int tmppostion = postion-1;
        Item * tmp = new Item[postion];
        int j = 0;
        for(int i = 0; i < postion+1; i++){
            if(listofItem[i].returnId() != id){
                tmp[j] = listofItem[i];
                j++;
            }
            else{
                matched = true;
            }
        }
        if(matched){
            postion = tmppostion;
            delete[] listofItem;
            listofItem = tmp;
        }
        else cout<< "Item ID has no match" << endl;
    }
    
    
    Item returnItem(int id){
        for(int i = 0; i < postion; i++){
            if(listofItem[i].returnID() == id){
                return listofItem[i];
            }
        }
    }
    Item returnItem(char name){
           for(int i = 0; i < postion; i++){
            if( strcmp(name,listofItem.returnName() == 0 ){
                return listofItem[i];
            }
        }
    }
    Item * returnAllItem(){
        return listofItem;
    }
  
    
    