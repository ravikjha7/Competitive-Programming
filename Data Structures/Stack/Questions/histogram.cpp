#include<bits/stdc++.h>
using namespace std;

vector<int> leftsmallest(int arr[],int n)
{
	stack<int> st;
	vector<int> ls;
	for(int i=0;i<n;i++)
	{
		while(!st.empty() && arr[st.top()]>=arr[i])
			st.pop();
		if(!st.empty())
			ls.push_back(st.top());
		else
			ls.push_back(-1);
		st.push(i);
	}
	return ls;
}

vector<int> rightsmallest(int arr[],int n)
{
	stack<int> st;
	vector<int> rs(n,0);
	for(int i=n-1;i>=0;i--)
	{
		while(!st.empty() && arr[st.top()]>=arr[i])
			st.pop();
		if(!st.empty())
			rs[i]= st.top();
		else
			rs[i] = n;
		st.push(i);
	}
	return rs;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	int curr=0,max=0;
	vector<int> left;
	left = leftsmallest(arr,n);
	vector<int> right;
	right = rightsmallest(arr,n);
	for(int i=0;i<n;i++)
	{
		curr = (right[i]-left[i]-1)*arr[i];
		if(curr>max)
			max = curr;
	}
	cout<<max<<endl;
	return 0;
}
