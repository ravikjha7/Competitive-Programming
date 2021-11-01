#include<bits/stdc++.h>
using namespace std;

class queue1{
	public:
	stack<int> st1;
	stack<int> st2;
	void push(int n)
	{
		st1.push(n);
		cout<<n<<" pushed"<<endl;
	}
	void pop()
	{
		if(st1.empty() && st2.empty())
		{
			cout<<"Queue Underflow"<<endl;
			return;
		}
		while(!st1.empty())
		{
			st2.push(st1.top());
			st1.pop();
		}
		int popv = st2.top();
		st2.pop();
		cout<<popv<<" Element Popped"<<endl;
	}
	int peek()
	{
		if(st1.empty() && st2.empty())
		{
			cout<<"Queue is Empty"<<endl;
			return -1;
		}
		int topv = st2.top();
		return st2.top();
	}
	bool isEmpty()
	{
		if(st1.empty() && st2.empty())
		{
			return true;
		}
		return false;
	}
};

int main()
{
	queue1 q;
	q.pop();
	q.push(7);
	q.push(8);
	q.push(99);
	q.push(3);
	q.pop();
	q.peek();
	q.pop();
	q.peek();
	q.pop();
	q.peek();
	q.pop();
	q.peek();
	q.pop();
	q.peek();
	cout<<q.isEmpty()<<endl;
	
	return 0;
}
