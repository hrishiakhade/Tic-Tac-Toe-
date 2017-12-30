#include<iostream>
#include<cstdlib>
#include<cstring>
#include<windows.h>
#include<stdio.h>
using namespace std;

 char num[10]={'0','1','2','3','4','5','6','7','8','9'};
 class tic
 {
 	public:
 		char name1[100],name2[50];
 		void name()
 		{
 			cout<<"\n\nEnter name of player 1 playing with  'X' : ";
			fflush(stdin);
			gets(name1);
			for(int i=0;name1[i]!='\0';i++)
			{
				if(name1[i]>96 && name1[i]<123)
				name1[i]=name1[i]-32;
			}
			cout<<"\n\nEnter name of player 2 playing with 'O' : ";
			fflush(stdin);
			gets(name2);
			for(int i=0;name2[i]!='\0';i++)
			{
				if(name2[i]>96 && name2[i]<123)
				name2[i]=name2[i]-32;
			}
		 }
		 void game();
		 void game1();
		 int win();
		 void clear();
 };
void tic::game()
{
	system("clear");
	cout<<"\n\t\t\t********************************\n";
	cout<<"\t\t\t           TIC-TAC-TOE         \n";
	cout<<"\t\t\t********************************\n\n\n";

	cout << "     |     |     " << endl;
    cout << "  " << num[1] << "  |  " << num[2] << "  |  " << num[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << num[4] << "  |  " << num[5] << "  |  " << num[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << num[7] << "  |  " << num[8] << "  |  " << num[9] << endl;

    cout << "     |     |     " << endl << endl;
}
void tic::game1()
{
	system("clear");
	cout<<"\n\t\t\t********************************\n";
	cout<<"\t\t\t           TIC-TAC-TOE         \n";
	cout<<"\t\t\t********************************\n\n\n";
	cout << "  "<<name1<<" (X)  V/S  "<< name2<<" (O)"<<endl << endl;
	cout << "     |     |     " << endl;
    cout << "  " << num[1] << "  |  " << num[2] << "  |  " << num[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << num[4] << "  |  " << num[5] << "  |  " << num[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << num[7] << "  |  " << num[8] << "  |  " << num[9] << endl;

    cout << "     |     |     " << endl << endl;
}
int tic::win()
{
	if(num[1]==num[2] && num[2]==num[3])
		return 1;

	else if(num[4]==num[5] && num[5]==num[6])
		return 1;

	else if(num[7]==num[8] && num[8]==num[9])
		return 1;

	else if(num[1]==num[5] && num[5]==num[9])
		return 1;

	else if(num[3]==num[5] && num[5]==num[7])
		return 1;

	else if(num[1]==num[4] && num[4]==num[7])
		return 1;

	else if(num[2]==num[5] && num[5]==num[8])
		return 1;

	else if(num[3]==num[6] && num[6]==num[9])
		return 1;
	else if (num[1] != '1' && num[2] != '2' && num[3] != '3'
                    && num[4] != '4' && num[5] != '5' && num[6] != '6'
                  && num[7] != '7' && num[8] != '8' && num[9] != '9')

        return 0;
    else
        return -1;
}
void tic::clear()
{
	num[1]='1';
    num[2]='2';
    num[3]='3';
    num[4]='4';
    num[5]='5';
    num[6]='6';
    num[7]='7';
    num[8]='8';
    num[9]='9';
}
int main()
{
	tic s;
	int i,count=0,count1=0,count2=0;
	string b,ch,opt,player,sign;
	string f="(X)";
	string g="(O)";
do{
	s.game();
	s.name();

	cout<<"\n\n\n";
	char a=1;
	char m;
	system("clear");
	string str("LET'S PLAY...");
	cout<<"\n\n\n\n\n\t\t\t";
	for(int k=0;k<str.size();k++)
    {
        cout<<str[k];
        Sleep(100);
    }

	do{
		do{
			system("clear");
			cout << "  "<<s.name1<<" (X)  V/S  "<< s.name2<<" (O)"<<endl << endl;
			s.game1();

			player=(a%2==1)? s.name1 : s.name2;
			sign=(a%2==1) ? f : g ;
			if(strcmp(s.name1,s.name2)==0)
			cout<<"\nTURN FOR --> "<<player<<" "<<sign<<endl;
			else
                cout<<"\nTURN FOR --> "<<player<<endl;
			cout<<"\nEnter your choice : ";
			cin>>ch;

			m=((player== s.name1) && (sign=="(X)" ))? 'X' : 'O';

			if(ch== "1" && num[1]=='1')
				num[1]=m;

			else if(ch=="2" && num[2]=='2')
				num[2]=m;

			else if(ch=="3" && num[3]=='3')
				num[3]=m;

			else if(ch=="4" && num[4]=='4')
				num[4]=m;

			else if(ch=="5" && num[5]=='5')
				num[5]=m;

			else if(ch=="6" && num[6]=='6')
				num[6]=m;

			else if(ch=="7" && num[7]=='7')
				num[7]=m;

			else if(ch=="8" && num[8]=='8')
				num[8]=m;

			else if(ch=="9" && num[9]=='9')
				num[9]=m;

			else
				{
					cout<<"\t\t*******INVALID CHOICE***********\n";
					cout<<"\n  Please Re-enter your choice";
					Sleep(1000);
					a--;
					cin.ignore();

				}
			i=s.win();
			a++;
		}while(i==-1);
		s.game1();
		count++;


		if(player==s.name1 && i==1 && sign=="(X)")
			count1++;

		else if(player==s.name2 && i==1 && sign=="(O)")
			count2++;
        if(strcmp(s.name1,s.name2)==0 && i==1)
            cout<<"\n\t\t**********     "<<player<<sign<<"    WINS !!!!!!     **********";
    	else if(i==1)
        {
        	cout<<"\n\t\t**********     "<<player<<"   WINS !!!!!!     **********";
        }
    	else
       		cout<<"\t   **********    IT'S A DRAW    **********";

		cin.ignore();
    	Sleep(1000);


    	cout<<"\n\n\nDo you want to play again  (Y/N) ? : ";
   		cin>>b;
   		while(b!= "y" && b!= "n" && b!="Y" && b!="N")
   		{
   			cout<<"\n........PLEASE Enter valid choice........\n\n";
   				cout<<"Do you want to play again  (Y/N) ? : ";
   				cin>>b;
		}
    	 if(b=="y" | b=="Y")
    	{
    		cout<<"\n\n1.Existing players \n\n2.New players\n";
    		cout<<"\n\nEnter your choice :";
    		cin>>opt;

			do{
    			if(opt!="1" && opt!="2")
    				{
    					cout<<"\t\t\n*******INVALID CHOICE***********\n";
						cout<<"\nPlease  Re-Enter your choice :" ;
						cin>>opt;
					}
			}while(opt!="1" && opt!="2");

    	if(player==s.name1 && sign=="(X)")
    	a--;
    		s.clear();
	  	}
	}while(opt=="1" && (b=="y" | b=="Y"));
	if(b=="n" && opt=="1" )
{
	if(count1>count2 )
	{
		if(strcmp(s.name1,s.name2)==0)
				cout<<"\n\n\t   **********   "<<s.name1<<" "<<"(X)"<<" WINS THE  "<<count<<"  MATCH SERIES  "<<count1<<"-"<<count2<<"  **********";
		else
				cout<<"\n\n\t   **********   "<<s.name1<<" WINS THE  "<<count<<"  MATCH SERIES  "<<count1<<"-"<<count2<<"  **********";

	}
	else if(count1<count2 )
	{
	if(strcmp(s.name1,s.name2)==0)
		cout<<"\n\n\t   **********   "<<s.name2<<" "<<"(O)"<<" WINS THE  "<<count<<"  MATCH SERIES  "<<count2<<"-"<<count1<<"  **********";
	else
		cout<<"\n\n\t   **********   "<<s.name2<<" WINS THE  "<<count<<"  MATCH SERIES  "<<count2<<"-"<<count1<<"  **********";
	}
	else if(count1==count2)
	cout<<"\n\n         ***********  "<<count<<" MATCH SERIES IS DRAWN  "<< count1<<"-"<<count2<<"   *************";
}

    s.clear();

}while(b=="y" && opt=="2" | b=="Y" && opt=="2");

cout<<"\n\n\n\t\t\t\t";
string sd("THANK YOU !!!!\n");
for(int b=0;b!=sd.size();b++)
{
    cout<<sd[b];
    Sleep(100);
}
cin.ignore();
return 0;
}
