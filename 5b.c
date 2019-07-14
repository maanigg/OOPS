#include <iostream>
#include <list>
#include <iterator>
using namespace std;

//function for printing the elements in a list
void showlist(list <int> g)
{
	list <int> :: iterator it;
	for(it = g.begin(); it != g.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';
}

bool comparison (int first, int second)
{ return ( first<second ); }


int main()
{

	list <int> l1, l2;
	list <int>::iterator p;


	for (int i = 0; i < 10; ++i)
	{
		l1.push_back(i * 2);
		l2.push_front(i * 3);
	}
	cout << "\nList 1 (Push back) is : ";
	showlist(l1);

	cout<<"Size of list 1: "<<l1.size()<<endl;

	cout << "\nList 2 (Push front) is : ";
	showlist(l2);

	cout<<"Size of list 2: "<<l2.size()<<endl;

	cout << "\nl1.front() : " << l1.front();
	cout << "\nl1.back() : " << l1.back();

	cout << "\nl1.pop_front() : ";
	l1.pop_front();
	showlist(l1);

	cout << "\nl2.pop_back() : ";
	l2.pop_back();
	showlist(l2);

	cout << "\nl2.sort(): ";
	l2.sort();
	showlist(l2);

	cout<<"\nl1.erase(4): ";
	p=l1.begin();
	advance(p,4);
	l1.erase(p);
	showlist(l1);

	l1.merge(l2);
	cout<<"\nMerged!"<<endl;

	cout<<"Merger list: ";
	showlist(l1);

	return 0;

}
