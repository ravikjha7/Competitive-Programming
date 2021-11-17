#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	deque<int> q;
	vector<int> v;
	for(int i=0;i<k;i++) 
	{
		// We will store the elemets in queue in non ascending order
		while(!q.empty() && arr[q.back()]<arr[i])
		{
			q.pop_back();
		}
		q.push_back(i);
	}
	// Now the front of the array will be representing the maximum value of k elements hence push them into the ans array
	v.push_back(arr[q.front()]);
	for(int i=k;i<n;i++)
	{
		// If the front element (i.e maximum element) will be outside of the k elements window we need to pop it
		if(q.front()==i-k)
			q.pop_front();
		while(!q.empty() && arr[q.back()]<arr[i])
		{
			q.pop_back();
		}
		q.push_back(i);
		v.push_back(arr[q.front()]);
	}

	for(auto e : v)
		cout<<e<<" ";
	cout<<"\n";
	
	return 0;
}

// int main()
// {
	// int n,k;
	// cin>>n>>k;
	// int arr[n];
	// for(int i=0;i<n;i++) cin>>arr[i];
	// multiset<int,greater<int>> s;
	// vector<int> v;
	// for(int i=0;i<k;i++)
	// {
		// s.insert(arr[i]);
	// }
	// v.push_back(*s.begin());
	// for(int i=k;i<n;i++)
	// {
		// s.erase(s.lower_bound(arr[i-k]));
		// s.insert(arr[i]);
		// v.push_back(*s.begin());
	// }
	// for(auto e : v)
		// cout<<e<<" ";
	// cout<<"\n";
	
	// return 0;
// }
