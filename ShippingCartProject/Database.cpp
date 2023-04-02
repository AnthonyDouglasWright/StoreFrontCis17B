/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Database.cpp
 * Author: aawri
 * 
 * Created on March 23, 2023, 10:52 PM
 */

#include "Database.h"
#include "Item.h"
#include "User.h"
#include <fstream>
#include <iostream>
using namespace std

Database::Database() {
}

Database::Database(const Database& orig) {
}

Database::~Database() {
}


void write(userStruct* user){
//    int hashAddress = 0;
//for (int counter = 0; user->name[counter]!='\0'; counter++){
//    hashAddress = user->name[counter] + (hashAddress << 6) + (hashAddress << 16) - hashAddress;
//}
    ofstream outfile("userDB.bin", std::ios::out | std::ios::binary);
    if(outfile.is_open()){
        if(user->id = 0){
            outfile.seekg(0,outfile.end};
            int size =(int)outfile.tellg()/sizeof(userStruct);
            user->id = size+1;
            outfile.write(reinterpret_cast<const char*>(&user), sizeof(userStruct));}
    else{
        int record = user->id * sizeof(userStruct);
        outfile.seekg(record);
        outfile.write(reinterpret_cast<const char*>(&user), sizeof(userStruct));
    }
}  else{
        cout << "File Could Not Open" << endl;
    } 
    outfile.close();  
}  


void write(Item items,postion){
    ofstream outfile("itemDB.bin", std::ios::out | std::ios::binary);
    if(outfile.is_open()){
        for(int i = 0; i < postion; i++);
            outfile.write(reinterpret_cast<const char*>(&items[i].returnItemStruct()), items[i].sizeofStruct);}
}  else{
        cout << "File Could Not Open" << endl;
    } 
    outfile.close();  
}
    
void query(Item items )){
    ItemStuct *temp;
     ifstream infile("itemDB.bin", std::ios::in | std::ios::binary);
     if (!infile.is_open()) {
        cout << "Error opening file " <<endl;
    }
    infile.seekg(0, std::ios::end);
    streampos file_size = infile.tellg();
    infile.seekg(0, std::ios::beg);
    int i = 0;
    while (infile.tellg() < file_size){
      infile.read(reinterpret_cast<char*>(&temp), sizeof(ItemStuct));
      items[i] = temp;
      }
    }
  infile.close();
}
    
 userStruct query(char username){
    userStruct *temp;
     ifstream infile("userDB.bin", std::ios::in | std::ios::binary);
     if (!infile.is_open()) {
        cout << "Error opening file " <<endl;
    }
    infile.seekg(0, std::ios::end);
    streampos file_size = infile.tellg();
    infile.seekg(0, std::ios::beg);
    while (infile.tellg() < file_size){
      infile.read(reinterpret_cast<char*>(&temp), sizeof(userStruct));
      if(temp->name == username){
          return temp;
      }
    }
  infile.close();
}
    