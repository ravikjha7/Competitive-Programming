#include<bits/stdc++.h>
using namespace std;

class stack1{
	public:
	queue<int> q1;
	queue<int> q2;
	int N ;
	
	stack1(){
		N = 0;
	}
	
  // simply push into queue no 1
	void push(int x){
		q1.push(x);
		N++;
	}
	
  // pop all elements except for the last one from queue no 1 and push them into queue no 2 , then just pop the last element from queue no 1 and then swap queue no 1 and 2
	void pop(){
		if(q1.empty())
		{
			cout<<"Stack Underflow"<<endl;
			return;
		}
		while(!q1.empty())
		{
			int temp = q1.front();
			q1.pop();
			if(!q1.empty())
				q2.push(temp);
		}
		swap(q1,q2);
		N--;
	}
	
	bool empty()
	{
		if(q1.empty())
			return true;
		return false;
	}
	
	int peek()
	{
		if(q1.empty())
		{
			cout<<"Stack is Empty"<<endl;
			return -1;
		}
		return q1.back();
	}
	
	int size()
	{
		return N;
	}
};

int main()
{
	stack1 s1;
	s1.pop();
	s1.push(7);
	s1.push(8);
	s1.push(99);
	s1.push(3);
	cout<<s1.peek()<<endl;
	s1.pop();
	cout<<s1.size()<<endl;
	cout<<s1.peek()<<endl;
	s1.pop();
	cout<<s1.peek()<<endl;
	s1.pop();
	cout<<s1.peek()<<endl;
	s1.pop();
	cout<<s1.peek()<<endl;
	s1.pop();
	if(s1.empty())
		cout<<"Stack Khali Hai"<<endl;
	else
		cout<<"Kuchh to gadbad hai Daya "<<endl;
	return 0;
}
