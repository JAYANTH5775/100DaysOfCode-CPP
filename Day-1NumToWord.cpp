#include<bits/std++.h>
using namespace std; 
 

 int main()
 {
string arr1[20] ={ "zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelev","thirteen","fourteen","fifteen","sixteen","seventeen"
,"eighteen","nineteen"};

  string arr2[10
  	]={"twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety","hundred"};
int num;
  while(1)
  {
  	cout<<"enter the number from 1 -100 to which u want to convert to the word-format\n\n";
  	cin>>num;
  	if(num<19)
  		cout<<arr1[num];
  	else if (num>100 && num<0)
  		cout<<"invalid entry";
  	else if (num%10==0)
  	{
  		cout<<arr2[num];
  	}
  	else {
  		 int fst =((num/10)-2);
  		 int lst = num%10;
  		 cout<<arr2[fst]<<" "<<arr2[lst];

  	}
  cout<<"do u want to enter the some more  numbers ";
  int x; 
  cin>>x;
   if(!x)
   	break;

  	}
  }
 
 
 //number that can be entered 10 20 30 
 //0-19
 //21 36 47 89 28 random number
