#include "Book.h"

//Constructor -- Already Implemented
Book::Book()
{
    cout << "Creating a book..." << endl;
    m_bookName = "book";
    m_isHardCover = false;
    m_numCheckOuts = 0;
}

//Here is an example for a getter and a setter

int Book::getCheckOuts()
{
    return m_numCheckOuts;
}

void Book::setCheckOuts(int numTimes)
{
    //If number of check-outs is greater than 6, set to 6.
    if (numTimes > 6)
    {
        m_numCheckOuts = 6;
    }
    else
    {
        m_numCheckOuts = numTimes;
    }
}

//**Student Requirement**
//Implement getters and setters for bookName and isHardCover here
string Book::GetName()
{
    return m_bookName;
}

void Book::SetName(string m_bookName1)
{
    m_bookName = m_bookName1;
}

bool Book::GetCover()
{
    return m_isHardCover;
}

void Book::SetCover(bool m_isHardCover1)
{
    m_isHardCover = m_isHardCover1;
}

//**Student Requirement**                                                                                     \

//Custom Functions -- Implement checkHardCover and addCheckOut
void Book::CheckHardCover()
{
    if (m_isHardCover == true)
    {
        cout << m_bookName << " is a hardcover book!" << endl;
    }
    else
    {
        cout << m_bookName << " is a paperback book!" << endl;
    }
}

bool Book::addCheckout()
{
    if ((m_numCheckOuts + 1) > 6)
    {
        return false;
    }
    else
    {
        m_numCheckOuts += 1;
    }
    return true;
}
