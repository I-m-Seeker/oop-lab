#include<iostream.h>
#include<conio.h>
class myself{
char name[10];
char surname[10];
char gender;
int marks;
public:
void get();
void display();
};

void myself::get(){
cout<<"GET:";
cout<<"\n\nEnter name:";
cin>>name;
cout<<"Enter surname:";
cin>>surname;
cout<<"Gender:";
cin>>gender;
cout<<"Enter marks:";
cin>>marks;
}
void myself::display(){
cout<<"\nDISPLAY:";
cout<<"\n\nName:";
cout<<name;
cout<<"\nSurname:";
cout<<surname;
cout<<"\nGender:";
cout<<gender;
cout<<"\nMarks:";
cout<<marks;
}
void main(){
textcolor(BLACK);
textbackground(WHITE);
clrscr();
myself m;
m.get();
m.display();
getch();
}