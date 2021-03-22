#include<iostream>
#include<list>

using namespace std;

void display(list<int> &l)
{
	list<int> :: iterator itr;
	
	for(itr=l.begin();itr!=l.end();itr++)
	{
		cout << *itr << endl;
	}
}

int main()
{
	list<int> list1,list2;
	list<int> ::iterator itr;
	
	list1.push_back(1);
	list1.push_back(3);
	list1.push_back(5);
	list1.push_back(7);
	
	cout << "list 1 items\n";
	display(list1);
	
	list1.push_front(100);
	cout<<"push front result\n";
	display(list1);
	
	cout<<"push back result\n";
	list1.push_back(200);
	
	
	display(list1);
	
	list1.pop_front();
	cout<<"pop_front result\n";
	display(list1);
	
	cout<<"pop_back result\n";
	list1.pop_back();
	display(list1);
	
	
	list2.push_back(8);
	list2.push_back(4);
	list2.push_back(2);
	list2.push_back(10);
	
	cout << "list2\n";
	display(list2);
	
	list2.sort();
	cout << "sorted list2\n";
	display(list2);
	
	list2.reverse();
	cout << "Reverse list2\n";
	display(list2);
	
	list1.merge(list2);
	cout << "Merging list2 with list1\n";
	display(list1);
	
	return 0;
}
