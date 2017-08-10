#include<iostream.h>
#include<conio.h>
#include<string.h>
class employee{
int emp_no;
char emp_name[10];
public:
void getdata(int a,char b[10]){
 emp_no=a;
 strcpy(emp_name,b);
}
static void getdata(){
 cout<<"\nEmployee ID:";
 cout<<"\nEmployee Name:";
}
};
void main()
{
	textbackground(WHITE);
	textcolor(BLACK);
	clrscr();
	employee e[6];
	cout<<"GETDATA:\n";
	for(int i=0;i<6;i++)
	{
	    int a;
	    cout<<"\nEnter Employee ID "<<i+1<<":";
	    cin>>a;
	    char b[10];
	    cout<<"Enter Employee Name:";
	    cin>>b;
	    e[i].getdata(a,b);
	}

	getch();
}