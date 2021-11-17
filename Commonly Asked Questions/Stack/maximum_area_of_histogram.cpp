#include<bits/stdc++.h>
using namespace std;

// Finding The Nearest Smaller Element To The Left
vector<int> leftsmallest(int arr[],int n)
{
	stack<int> st;
	vector<int> ls;
	for(int i=0;i<n;i++)
	{
		// We are looking for a smaller element , if the element is greater or equal to , we can still expand the area hence , we will continue
		while(!st.empty() && arr[st.top()]>=arr[i])
			st.pop();
		// If there is no element remaining , it means it the smallest element and hence can expand till the leftmost part 
		if(!st.empty())
			ls.push_back(st.top());
		else
			ls.push_back(-1);
		st.push(i);
	}
	return ls;
}

// Finding Nearest Smaller Element To The Right
vector<int> rightsmallest(int arr[],int n)
{
	stack<int> st;
	vector<int> rs(n,0);
	for(int i=n-1;i>=0;i--)
	{
		// Similar as that of above
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
		// Calculating Area At Each Position
		// Example :
		// 4 3  2  6 7  3 8
		// 4 6 14 12 7 12 8
		curr = (right[i]-left[i]-1)*arr[i];
		if(curr>max)
			max = curr;
	}
	cout<<max<<endl;
	return 0;
}
