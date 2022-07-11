
#include <iostream>
using namespace std;
int main()
{
int put,scht=0,x=0,scht2=0,scht3=0;
char** a=new char*[3];
for (int i = 0; i < 3; i++)
{
a[i]=new char[3];
a[i][0]='_';
a[i][1] = '_';
a[i][2] = '_';
}
a[2][0]=' ';
a[2][1] = ' ';
a[2][2] = ' ';
cout<<a[0][0]<<"|"<<a[0][1]<<"|"<<a[0][2]<<endl;
cout << a[1][0] << "|" << a[1][1] << "|" << a[1][2] << endl;
cout << a[2][0] << "|" << a[2][1] << "|" << a[2][2] << endl;
do
{

do
{
	cin >> put;
scht2=0;
switch (put)
{
case 1:
	if (a[0][0] == '_')
	{
		a[0][0] = 'X';
		scht2++;
	}
	break;
case 2:
	if (a[0][1] == '_')
	{
		a[0][1] = 'X';
		scht2++;
	}
	break;
case 3:
	if (a[0][2] == '_')
	{
		a[0][2] = 'X';
		scht2++;
	}
	break;
case 4:
	if (a[1][0] == '_')
	{
		a[1][0] = 'X';
		scht2++;
	}
	break;
case 5:
	if (a[1][1] == '_')
	{
		a[1][1] = 'X';
		scht2++;
	}
	break;
case 6:
	if (a[1][2] == '_')
	{
		a[1][2] = 'X';
		scht2++;
	}
	break;
case 7:
	if (a[2][0] == ' ')
	{
		a[2][0] = 'X';
		scht2++;
	}
	break;
case 8:
	if (a[2][1] == ' ')
	{
		a[2][1] = 'X';
		scht2++;
	}
	break;
case 9:
	if (a[2][2] == ' ')
	{
		a[2][2] = 'X';
		scht2++;
	}
	break;
}
} while (scht2==0);
cout << "\033[2J\033[1;1H";
cout << a[0][0] << "|" << a[0][1] << "|" << a[0][2] << endl;
cout << a[1][0] << "|" << a[1][1] << "|" << a[1][2] << endl;
cout << a[2][0] << "|" << a[2][1] << "|" << a[2][2] << endl;
(a[0][0]=='X'&& a[0][1] == 'X'&& a[0][2] == 'X')?scht++: (a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X') ? scht++ : (a[2][0]=='X'&& a[2][1] == 'X'&& a[2][2] == 'X')?scht++:  (a[0][0]=='X'&& a[1][1] == 'X'&& a[2][2] == 'X')? scht++ : (a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X')?scht++: (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X') ? scht++ : (a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X') ? scht++ : (a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X') ? scht++ : x++;
if (scht==0)
{


do
{
	cin >> put;
scht3=0;
switch (put)
{
case 1:
if(a[0][0]=='_')
{
	a[0][0] = 'O';
	scht3++;
	}
	break;
case 2:
	if (a[0][1] == '_')
	{
		a[0][1] = 'O';
		scht3++;
	}
	break;
case 3:
	if (a[0][2] == '_')
	{
		a[0][2] = 'O';
		scht3++;
	}
	break;
case 4:
	if (a[1][0] == '_')
	{
		a[1][0] = 'O';
		scht3++;
	}
	break;
case 5:
	if (a[1][1] == '_')
	{
		a[1][1] = 'O';
		scht3++;
	}
	break;
case 6:
	if (a[1][2] == '_')
	{
		a[1][2] = 'O';
		scht3++;
	}
	break;
case 7:
	if (a[2][0] == ' ')
	{
		a[2][0] = 'O';
		scht3++;
	}
	break;
case 8:
	if (a[2][1] == ' ')
	{
		a[2][1] = 'O';
		scht3++;
	}
	break;
case 9:
	if (a[2][2] == ' ')
	{
		a[2][2] = 'O';
		scht3++;
	}
	break;
}
} while (scht3==0);
}
cout << "\033[2J\033[1;1H";
cout << a[0][0] << "|" << a[0][1] << "|" << a[0][2] << endl;
cout << a[1][0] << "|" << a[1][1] << "|" << a[1][2] << endl;
cout << a[2][0] << "|" << a[2][1] << "|" << a[2][2] << endl;
(a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O') ? scht++ : (a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O') ? scht++ : (a[2][0] == 'O' && a[2][1] == 'O' && a[2][2] == 'O') ? scht++ :  (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O') ? scht++ : (a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O') ? scht++ : (a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O') ? scht++ : (a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O') ? scht++ : (a[0][2] == 'O' && a[1][2] == 'O' && a[2][2] == 'O') ? scht++ : x++;
if(x==9) break;
} while (scht==0);

}