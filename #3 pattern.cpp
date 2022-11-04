#include<bits/stdc++.h> 

using namespace  std; 

int main()
{
	int n ; 
  cout<<"enter the number for with u want to generate the pattern"; 
  cin>>n; 

  for(int i =0;i<=(2*n-1);i++)
  {
  	if(i<=n)
  	{
  	for(int j = 0 ;j<i;j++)
  	{
  		cout<<"*";
  	} //j  for loop 
  }// if ;loop

  else
  {
  	for(int j =0;j<=(2*n-i);j++)
  	{

  	cout<<"*";
  }
}

	return 0 ;
}
}