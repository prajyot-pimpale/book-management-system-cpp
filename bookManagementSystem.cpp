#include "bookManagementSystem.h"


Book::Book()
{
    this->id = 0;
    strcpy(this->bookName,"Not Given!");
    strcpy(this->authorName,"Not Given!");
    strcpy(this->catagory,"Not Given!");
    this->price = 0;
    this->rating = 0;
}
Book::Book(int id,const char* bookName, const char* authorName, const char* catagory, int price, float rating )
{
    this->id = id;
    strcpy(this->bookName,bookName);
    strcpy(this->authorName,authorName);
    strcpy(this->catagory,catagory);
    this->price = price;
    this->rating = rating;
}
void Book::setId(int id)
{
    this->id = id;
}
int Book::getId()
{
    return id;
}
void Book::setBookName(const char* bookName)
{
    strcpy(this->bookName,bookName);
}
char* Book::getBookName()
{
    return bookName;
}
void Book::setAuthorName(const char* authorName)
{
    strcpy(this->authorName,authorName);
}
char* Book::getAuthorName()
{
    return authorName;
}
void Book::setCatagory(const char* catagory)
{
    strcpy(this->catagory,catagory);
}
char* Book::getCatagory()
{
    return catagory;
}
void Book::setPrice(int price)
{
    this->price = price;
}
int Book::getPrice()
{
    return price;
}
void Book::setRating(float rating)
{
    this->rating = rating;
}
float Book::getRating()
{
    return rating;
}
void Book::display()
{
    cout<<"\n-_-_-_-_-_-_-_-_-_-_-_-\n";
    cout<<"\nBook Id : "<<getId();
    cout<<"\nBook Name : "<<getBookName();
    cout<<"\nAuthor Name : "<<getAuthorName();
    cout<<"\nCatagory : "<<getCatagory();
    cout<<"\nPrice : "<<getPrice();
    cout<<"\nRating : "<<getRating();
    cout<<"\n-_-_-_-_-_-_-_-_-_-_-_-\n";
}