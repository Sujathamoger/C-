#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &v)
{
	vector<int> :: iterator itr;
	for(itr=v.begin();itr!=v.end();itr++)
	{
		cout << *itr <<endl;
	}
}

int main()
{
	vector<int> v;
	vector <int> :: iterator itr;
	int x;
	cout << "initial size of vector: "<< v.size() << "\n";
	
	cout << "Enter five integer values" << endl;
	for(int i=0;i<5;i++)
	{
		cin >> x;
		v.push_back(x);
	}
	
	cout << "size of vector" << v.size()<< endl;
	
	cout << "Contents of vector" << endl;
	display(v);
	
	v.push_back(6);
	
	cout << "after inserting 6th element"<< "\n";
	display(v);
	
	cout << "inserting element randomly"<<endl;
	itr = v.begin();
	itr = itr +3;
	v.insert(itr,1,9);
	
	cout << "after inserting one more element" << endl;
	display(v);
	
	//v.erase(v.begin()+3,v.begin()+5);
	v.pop_back();
	
	cout << "After popping the elemnt"<< endl;
	display(v);
		
}
