//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    
  //Your code here
  
  int st, ed, n;
  
  n = str.length();
  st = 0;
  ed = n-1;
  
  while(st < ed)
  {
      char temp = str[st];
      str[st] = str[ed];
      str[ed] = temp;
      st++;
      ed--;
  }
  
  return str;
  
}

