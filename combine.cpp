//=========================================================
//Your name: Alejandro Monje
//Complier:  g++ compiler
//File type: client
//=========================================================
using namespace std;
#include <iostream>
#include <vector>

void Combine(vector<int> &L1, vector<int> &L2, vector<int> &L3);


int main()
{
  
  vector<int> L1;
  vector<int> L2;
  vector<int> L3;
  
  int c;
  int d;
  int size = 0;
  int count1 = 0;
  int count2 = 0;
    
  
  cout << "How many elements would you like: " << endl;
  cin >> size; // holds the value entered by the user
  
  
  cout << "Please enter the numbers in increasing order:  " << endl;

  
  while(count1 != size)
    {
      cout << "Element: ";
      cin >> c;
      L1.push_back(c);
      count1 ++;
    }
  
  cout << " " << endl;
  
 
  while(count2 != size)
    {
      
      cout << "Element: ";
      cin >> d;//holds the value entered by the user
      L2.push_back(d);// pushes the value into the vector
      count2 ++;// adds to count2
    }
  
  cout << " " << endl;
  cout << "The lists will now be combined: " << endl;
  
  
  
  // combined is called
  Combine(L1, L2, L3);
  
  //The for loop will display the contents of the vector
  for(int i = 0; i < L3.size(); i++) // stops when i is the same as L3.size()
    {
      cout << L3[i] << " ";
    } 
  
  cout << " " << endl;
  
  return 0; // ends programs 
}


void Combine( vector<int> &L1, vector<int> &L2, vector<int> &L3)
{
  
  int ia = 0;
  int ib = 0;
  int ic = 0;
  
  int count3 = 0;// will keep count of times compared
  
 
  for(int i = 0; i < (L1.size()*2) && ia < L1.size() && ib < L2.size(); i++)
    { 
      count3++;// adds to the counter
      if(L1[ia] <= L2[ib])
	{ 
	  L3.push_back(L1[ia]);//puts number into L3        
	  ia = ia + 1;// moves to the next number by adding 1 to the index
	}
      else if(L1[ia] > L2[ib])
	{
	  
	  L3.push_back(L2[ib]);// puts numner into L3
	  ib = ib + 1; 
	}
     
      cout << "compared " << count3 << " Times:" << endl;
    }
  
  
  if(ia < L1.size())
    {
      cout << "The rest of the first list goes down: " << endl;
      while(ia < L1.size())
     {
       L3.push_back(L1[ia]);// puts numbers into L3
       ia = ia + 1;// moves to the next number by adding 1 to the index
     }
    }
  

  if(ib < L2.size())
    {
      cout << "The rest of the second list goes down: " << endl;
      while(ib < L2.size())
	{
	  L3.push_back(L2[ib]);// puts numbers into L3
	  ib = ib + 1;// moves to the next number by adding 1 to the index
	}
    }
}
