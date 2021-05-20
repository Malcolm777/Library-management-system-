/**************                                                                                                
 * File: lab5.cpp                                                                                              
 * The user creates this file to demonstrate use of a course.                                                  
 *************/

#include <iostream>
#include "Book.h"
using namespace std;

int main()
{
    //**Student Requirement**
    //Part 1: Create 2 books by instantiating them
    Book book1, book2;

    //**Student Requirement**
    //Part 2: Set their values for book name, cover type, and amount of check-outs.
    book1.SetName("Pride and Prejudice");
    book1.SetCover(0);
    book1.setCheckOuts(0);

    book2.SetName("Cat in the Hat");
    book2.SetCover(1);
    book2.setCheckOuts(6);

    //**Student Requirement**
    //Part 3: Output their information:  Name, cover type, and amount of check-outs
    cout << "Data of Book1: " << endl;
    cout << "Book Name: " << book1.GetName() << endl;
    cout << "Number of Checkouts: " << book1.getCheckOuts() << endl;
    cout << "Hardcover/Paperback: " << book1.GetCover() << endl;

    cout << "Data of Book2: " << endl;
    cout << "Book name: " << book2.GetName() << endl;
    cout << "Number of Checkouts: " << book2.getCheckOuts() << endl;
    cout << "Hardcover/paperback: " << book2.GetCover() << endl;

    //**Student Requirement**
    //Part 4: Call a custom function: Check if book is hard cover or not
    book1.CheckHardCover();
    book2.CheckHardCover();

    //**Student Requirement**
    //Part 5: Update data members with custom function: Add 1 check-out to the amount of check-outs
    //Display updated amount of check-outs
    if (book1.addCheckout() == false)
    {
        cout << "This book has been checked out too many times already!" << endl;
    }
    else
    {
        cout << "This book has been checked out!" << endl;
    }

    if (book2.addCheckout() == false)
    {
        cout << "This book has been checked out too many times already!" << endl;
    }
    else
    {
        cout << "This book has been checked out!" << endl;
    }
    cout << book1.getCheckOuts() << endl;
    cout << book2.getCheckOuts() << endl;

    return 0;
}
