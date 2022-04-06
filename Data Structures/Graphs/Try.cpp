#include<iostream>
// #include<bits/stdc++.h>
using namespace std;
#include<vector>
void subsetuntil(vector<int>&a,vector<vector<int>>&res,vector<int>&subset, int index){
res.push_back(subset);
for(int i=index;i<a.size();i++){
subset.push_back(a[i]);    
subsetuntil(a,res,subset,i+1);
subset.pop_back();
}
return;
}

void decToOctal(int n)
{
 
}




signed main(){
int n, rn = 0, remainder;
cin>>n;

  while(n != 0) {
    remainder = n % 10;
    rn = rn * 10 + remainder;
    n /= 10;
  }
 
    cout<<"Reverse no"<<rn<<endl;
    int octalNum[100];
 
    int i = 0;
    while (rn!= 0) {
 
        octalNum[i] = rn % 8;
        rn = rn / 8;
        i++;
    }
    cout<<"Octal no";
    for (int j = i - 1; j >= 0; j--)
        cout <<octalNum[j];
    return 0;




}