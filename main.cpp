#include "bookLL.cpp"

int main()
{
    LinkedList<Book> l1;
    int choice;
    do{
        cout<<"\n\n\n1.Insert At Position\n2.delete At Position\n3.Display\n0.Exit\n\nEnter Your Choice : ";
        cin>>choice;
        switch(choice){
            case 1: {
                int id,pos;
                char bookName[20];
                char authorName[20];
                char catagory[20];
                int price;
                float rating;
                cout<<"Enter Book Id: ";   cin>>id;
                cout<<"Enter Book Name : ";    cin>>bookName;
                
                cout<<"Enter Author Name : ";   cin>>authorName;
                
                cout<<"Enter Catagory : ";  cin>>catagory;
                cout<<"Enter Price : ";   cin>>price;
                cout<<"Enter Rating : ";   cin>>rating;
                Book b(id,bookName,authorName,catagory,price,rating);
                cout<<"\n\nEnter Position you want to store : ";
                cin>>pos;
                l1.insertPos(b,pos);
                break;     
            }
            case 2:{
                int pos;
                cout<<"\nEnter Position : ";
                cin>>pos;
                l1.deletePos(pos);
                break;
            }
            case 3:{
                cout<<"\n";
                l1.display();
                
                break;
            }
            case 0:{
                 cout<<"\n\n Thank You!!\n\n";
                break;
            }
            default :
                cout<<"\nEnter correct choice!!";
        }
    }while(choice != 0);  
} 