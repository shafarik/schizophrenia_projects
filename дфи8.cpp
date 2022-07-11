

#include <iostream>
using namespace std;
int main()
{
int scht=0,scht1=1,scht2=0;
int * uselessvar;
const int s=5;
 //  cout<<"enter m and n value (n>=6 and !=m)";
   int **array=new int*[s];
 //int array[s][s];
   for (int i = 0; i < s; i++)
   {
   array[i]=new int[s];
   }
   for (int i = 0; i < s; i++)
   {
	   for (int j = 0; j < s; j++)
	   {
	   array[i][j] = (int)rand() % 10 - 5;
	   }
   }

	
   for (int i = 0; i < s; i++)
   {
	   for (int j = 0; j < s; j++)
	   {
	   if(array[i][j]==0) scht=j;
	   }
   }
   for (int i = 0; i < s; i++)
   {
	   for (int j = 0; j < i; j++)
	   {
	  scht1*= array[i][j];
	   }
   }
   do
   {
   scht2=0;
	   for (int i = 0; i < s-1; i++)
	   {
	  if(array[i][s-i-1]<array[i+1][s-i-2])
		  {
			  scht2++;
			  uselessvar=array[i][s-i-1];
			  array[i][s-i-1]=array[i+1][s-i-2];
			  array[i+1][s-i-2]=uselessvar;
		  }
	  }
   } while (scht2!=0);
   for (int i = 0; i < s; i++)
   {

	   for (int j = 0; j < s; j++)
	   {
		   cout << array[i][j] << "   ";
	   }
	   cout << endl;
   }
   for (int i = 0; i < s; i++)
   {
	   delete[] array[i];

   }
   delete[] array[];
}

