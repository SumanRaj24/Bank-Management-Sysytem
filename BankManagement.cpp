#include<iostream>
#include<windows.h>
using namespace std;
//----------Bank Management system--------------||
class Bank
{
    private:
       int total;
       string ch;
       struct Person{
          string name,ID,address;
          int contact,cash;
       }persion[1000];
    public:
      Bank(){
        total=0;
      }  
      void choice();
      void PerData();
      void show();
      void update();
      void search();
      void transactions();
      void Remove();
     // void exit();    
};

int main()
{
    cout<<"\n\n\tBank Management System"<<endl;
    cout<<"\n\n\tCanndidate--------Sign Up--------Please"<<endl;
    string username1;
    int password1;
    cout<<"\n\tEnter Username-:";
    cin>>username1;
    cout<<"\n\tEnter Password-:";
    cin>>password1;
    cout<<"\n\tYour id is creating please wait";
    for(int i=0;i<4;i++)
     {
          cout<<".";
          Sleep(500);   
     }
//---Create succefully id --------------
    cout<<"\n\t\tYour id created succefully"<<endl;
     system("CLS");
    Start:
        system("CLS");
    cout<<"\n\n\tEmployee Management System"<<endl;
//------Login Id-----------------------
    cout<<"\n\n\t-Please----Login-------Id-"<<endl;
    string username;
    int password;
    cout<<"\n\tUsername-: ";
    cin>>username;
    cout<<"\n\tPassword-:";
    cin>>password;
    if(username1==username && password1==password)
     {
        system("CLS");
        //char user;
     }
//---------call by function-------

    Bank b;
        b.choice();

 //--------Increate Password ----------       
    if(username1==username)
     {
        cout<<"Your Username in incorrect"<<endl;
       // system("CLS");
        Sleep(3000);
        goto Start;
     }
     else if(password1==password)
     {
          cout<<"Your Password is incorrect"<<endl;
         // system("CLS");
          Sleep(3000);
          goto Start;
     }
     else{
     	cout<<"\t\aInvalid username and password";
     	Sleep(3000);
     	goto Start;
	 }
//--------------Call by Function-----
    // Bank b;
    //     b.choice();  
        b.PerData();
        b.show();
        b.update();
        b.search();
        b.transactions();
        b.Remove();     

}
void Bank::choice()
{
    char ch;
    while(true){
        cout<<"\n\t#----PRESS The Button..................!!"<<endl;
        cout<<"\n\t1.Create New Account"<<endl;
        cout<<"\n\t2.View Customers List"<<endl;
        cout<<"\n\t3.Update Information of Existing account"<<endl;
        cout<<"\n\t4.Check the details of an existing account"<<endl;
        cout<<"\n\t5.For transactions"<<endl;
        cout<<"\n\t6.Remove exicting account "<<endl;
        cout<<"\n\t7.Exit"<<endl;
        cin>>ch;
        switch(ch){
            case '1':
               Bank::PerData();
               break;
            case '2':
               Bank::show();
               break;
            case '3':
               Bank::update();
               break;
            case '4':
               Bank::search();
            case '5':
               Bank::transactions();
               break;
            case '6':
               Bank::Remove();
               break;
            default:
            	cout<<"Invalid Input";
            	break;
        }
    }   
}
void Bank::PerData()
{
    cout<<"\n\tEnter data of preson---"<<total+1<<endl;
    cout<<"\n\tEnter Name-:";
    cin>>persion[total].name;
    cout<<"\n\tEnter ID-:";
    cin>>persion[total].ID;
    cout<<"\n\tEnter Address-:";
    cin>>persion[total].address;
    cout<<"\n\tContact-:";
    cin>>persion[total].contact;
    cout<<"\n\tTotal Cash-:";
    cin>>persion[total].cash;
    total++;
}
void Bank::show()
{
    for(int i=0;i<total;i++){
        cout<<"\n\tData of person-:"<<i+1<<endl;
        cout<<"\n\tName-: "<<persion[i].name<<endl;
        cout<<"\n\tId-:"<<persion[i].ID<<endl;
        cout<<"\n\tAddress-:"<<persion[i].address<<endl;
        cout<<"\n\tContact-:"<<persion[i].contact<<endl;
        cout<<"\n\tCash-:"<<persion[i].cash<<endl;
        break;
    }
    cout<<"Customber Data Is Not Found"<<endl;
    
}
void Bank::update()
{
    cout<<"\n\tEnter your ID is this Update"<<endl;
    cin>>ch;
    for(int i=0;i<total;i++)
    {
        if(ch==persion[i].ID)
        {
            //----privorites data---------------------------
            cout<<"\n\tProrite data"<<endl;
            cout<<"\n\tData of persion"<<i+1<<endl;
            cout<<"\n\tName"<<persion[i].name<<endl;
            cout<<"\n\tId"<<persion[i].ID<<endl;
            cout<<"\n\tAddress"<<persion[i].address<<endl;
            cout<<"\n\tContact"<<persion[i].contact<<endl;
            cout<<"\n\tCase"<<persion[i].cash<<endl;
            //---update new data---------------------------
            cout<<"\n\tNew data Update"<<endl;
            cout<<"\n\tEnter data of preson"<<total+1<<endl;
            cout<<"\n\tEnter Name";
            cin>>persion[total].name;
            cout<<"\n\tEnter ID";
            cin>>persion[total].ID;
            cout<<"\n\tEnter Address";
            cin>>persion[total].address;
            cout<<"\n\tContact:";
            cin>>persion[total].contact;
            cout<<"\n\tTotal Cash:";
            cin>>persion[total].cash;
        }
        else{
            cout<<"\n\tYour Id is Not match"<<endl;
        }
    }   
}
void Bank::search()
{
    cout<<"\n\tEnter Id of studend those data you want to search"<<endl;
    cin>>ch;
    for(int i=0;i<total;i++)
      if(ch==persion[i].ID)
	  {
        cout<<"\n\tData of persion"<<i+1<<endl;
        cout<<"\n\tname"<<persion[i].name<<endl;
        cout<<"\n\tid"<<persion[i].name<<endl;
        cout<<"\n\tAddress"<<persion[i].address<<endl;
        cout<<"\n\tcontact"<<persion[i].contact<<endl;
        cout<<"\n\tcash"<<persion[i].cash<<endl;
        break;
      }
//	      else(i==total-1)
//		  {
//	        cout<<"No such record found"<<endl;
//	      }
}
void Bank::transactions()
{
    int cash;
    char c;
    cout<<"\n\tEnter id of student those data you want to transactions"<<endl;
    cin>>ch;
    for(int i=0;i<total;i++){
        if(ch==persion[i].ID){
            cout<<"\n\tName:"<<persion[i].name<<endl;
            cout<<"\n\tAddress:"<<persion[i].address<<endl;
            cout<<"\n\tcontact"<<persion[i].contact<<endl;
            cout<<"\n\tExisting Cash"<<persion[i].cash<<endl;
            cout<<"\n\tPress 1 to deposit"<<endl;
            cout<<"\n\tPress 2 to withdrew"<<endl;
            cin>>c;
            switch(c)
            {
                case '1':
                   cout<<"\n\tHow much cash you want to deposit?"<<endl;
                   cin>>cash;
                   persion[i].cash=+cash;
                   cout<<"\n\tYour new cash Amount-:"<<persion[i].cash<<endl;
                   break;
                case '2':
                  cout<<"\n\tHow much cash you want to withdraw??"<<endl;
                  cin>>cash;
                  if(cash>persion[i].cash){
                    cout<<"\n\tYour existing cash is just-:"<<persion[i].cash<<endl;
                    Sleep(3000);
                   // goto back;
                  }
                  persion[i].cash-=cash;
                  cout<<"\n\tYour New Account Balance "<<persion[i].cash<<endl;
                  break;
                default:
                  cout<<"Invalid Input"<<endl;
                  break;   
            }
            break;
        }
        if(i==total-1){
            cout<<"\n\tNo such record found"<<endl;
        }

    }


}
void Bank::Remove()
{
    char c;
    cout<<"\n\tPress 1 to remove specific record "<<endl;
    cout<<"\n\tPress 2 to remove full record "<<endl;
    cin>>c;
    switch (c)
    {
        case '1':
           cout<<"\n\tEnter id of studend those data you want to "<<endl;
           cin>>c;
           for(int i=0;i<total;i++)
           {
              if(ch==persion[i].ID)
              {
                //for(int j=i;j<total;j++)
                persion[i].name=persion[i].name;
                persion[i].ID=persion[i].ID;
                persion[i].address=persion[i].address;
                persion[i].contact=persion[i].contact;
                persion[i].cash=persion[i].cash;
                total--;
                break;
              }
              else{
                 cout<<"Data Is Empty"<<endl;
                 break;
                }
            }
        break;
        case '2':
            total=0;
            cout<<"\n\tAll record is deleted........!!"<<endl;
            break; 
        default:
          cout<<"Data Is Empty"<<endl;
          break;    
    }
}



