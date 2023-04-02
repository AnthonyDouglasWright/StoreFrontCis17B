/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Database.h
 * Author: aawri
 *
 * Created on March 23, 2023, 10:52 PM
 */

#ifndef DATABASE_H
#define DATABASE_H
#include "User.h"
#include "Item.h"
class Database {
public:
    Database();
    Database(const Database& orig);
    virtual ~Database();
    userStruct query(int);
    void write(userStruct *);
private:

};

#endif /* DATABASE_H */

