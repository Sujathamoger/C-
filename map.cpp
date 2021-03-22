#include <iostream>
#include <map>
#include <string>

using namespace std;
typedef map<string, int> phoneMap;

int main()
{
	string name;
	int number;
	phoneMap phone;
	phoneMap :: iterator p;
	
	int i=0;
	for(int i=0;i<3;i++)
	{
		cout << "Enter name and number\n ";
		cin >> name;
		cin >> number;
		phone[name] = number;
	}
	
	phone["Jacob"] = 4444;
	
	phone.insert(pair<string,int>("Bose",9999));
	
	int n=phone.size();
	
	cout << "size of vector " << n <<endl;
	
	for(p=phone.begin();p!=phone.end();p++)
	{
		cout << (*p).first <<" "<< (*p).second << endl;
	}
	
	cout << "\n";
	cout << "Enter name:";
	cin >> name;
	number = phone[name];
	cout << "Number:" << number << "\n";
	return 0;
	
}
