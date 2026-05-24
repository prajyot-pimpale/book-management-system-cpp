#ifndef BOOKMANAGEMENTSYSTEM_H
#define BOOKMANAGEMENTSYSTEM_H

#include <iostream>
#include <cstring>
using namespace std;

class Book
{
private:
    int id;
    char bookName[20];
    char authorName[20];
    char catagory[20];
    int price;
    float rating;
public:
    Book();
    Book(int id, const char* bookName, const char* authorName, const char* catagory, int price, float rating);

    void setId(int id);
    int getId();

    void setBookName(const char* bookName);
    char* getBookName();

    void setAuthorName(const char* authorName);
    char* getAuthorName();

    void setCatagory(const char* catagory);
    char* getCatagory();

    void setPrice(int price);
    int getPrice();

    void setRating(float rating);
    float getRating();

    void display();
};

#endif
