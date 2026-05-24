#include "bookLL.h"
template <class T>
LinkedList<T>::LinkedList(){
    start = NULL;
    /*ifstream in("book.bin",ios_base::binary);
	  T obj;
      int pos=1;
	while(!in.eof())
	{
		in.read((char*)&obj,sizeof(obj));
		if(in.eof())
		{
		      break;
		}
		cout<<"I am here\n";
		this->insertPos(obj,pos);
	}
	in.close();*/
}
template <class T>
void LinkedList<T>::insertPos(T& data,int pos){
    Node<T>* nn = new Node<T>(data);
    if(start==NULL){
        start=nn;
        return;
    }
    if(pos==1){
        nn->setNext(start);
        start=nn;
        return;
    }
    Node<T>* p = start;
    for(int i=1; i<pos-1 && p->getNext()!=NULL ;i++){
        p=p->getNext();
    }
    nn->setNext(p->getNext());
    p->setNext(nn);

}
template <class T>
void LinkedList<T>::deletePos(int pos){
    if(start==NULL){
        cout<<"\nEmpty!!";
        return;
    }
    int i;
    Node<T>* p = start;
    if(pos==1){
        start=NULL;
        p->getData().display();
        cout<<"\n"<<" ----Is deleted!";
        delete p;
        return;
    }
    for(i=1; i<pos-1 && p->getNext()!=NULL;i++){
        p=p->getNext();
    }
    if(i==pos-1){
        Node<T>* q = p->getNext();
        p->setNext(q->getNext());
        q->getData().display();
        cout<<"\n"<<" -----Is deleted!";
        delete q;
    }
}
template <class T>
void LinkedList<T>::display(){
    Node<T>* p=start;
    if(start == NULL){
        cout<<"\nNo nodes to display!!!";
    }
    while(p!=NULL){
        p->getData().display();
        p=p->getNext();
    }
}
template <class T>
LinkedList<T>::~LinkedList(){
    // while (start!=NULL) {
    //     Node<T>* p = start;
    //     start = p->getNext();
    //     delete p;
    // }
    Node<T>* p = start;
    start = p->getNext();
    if(start == NULL){
        return;
    }
    ofstream out("book.bin",ios_base::binary);
    while(start != NULL)
    {
        out.write((char*)&(p->getData()),sizeof(p->getData()));
        start = p->getNext();
        delete p;
    }
    out.close();
} 