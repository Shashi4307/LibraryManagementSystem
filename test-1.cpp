#include<iostream>
#include<vector>
#include"admin_database.h"
#include"book_database.h"


using namespace std;

int main()
{
    book b;
     book_database db;
     /*
      for(int i=0;i<3;i++)
    {
        b.new_book();
        db.upload(b); 
    }  */
    char a[100];
    strcpy(a,"hermit");

    vector<book> info=db.download();
    db.extract(info); 
     
    
    


}