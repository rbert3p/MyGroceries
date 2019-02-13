#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string list[5]; //array of 5 strings
	int numItems = 0;
	char input;
	string item;
	vector<string> items;
	do{
		cout<<"\n==GROCERY LIST MANAGER==";
		cout<<"\nEnter your choice: ";
		cout<<"\n (A)dd an item";
		cout<<"\n (Q)uit";
		cout<<"\nYour choice (A/Q): ";
		cin>>input;
		if(input == 'A' || input == 'a') {
			cout << "What is the name of the item?  ";
			cin >> item;
			items.push_back(item);
		}
		
	} while (input != 'Q' && input != 'q'); 
	
	for(int i = 0; i < (int)items.size(); i++) {
		cout << i+1 << ". " << items[i] << endl;
	}
	
	return 0;
}
