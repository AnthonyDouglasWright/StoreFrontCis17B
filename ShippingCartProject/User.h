/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   User.h
 * Author: aawri
 *
 * Created on March 23, 2023, 10:07 PM
 */

#ifndef USER_H
#define USER_H
#include "Cart.h"
class User {
public:
    User();
    User(const User& orig);
    virtual ~User();
    display
private:
    struct userStruct{
    int id;
    char name[30];
    char email[30];
    char password[20];
    int permissionLevel; }
};
Cart shoppingCart;
userStruct * Users;

#endif /* USER_H */

