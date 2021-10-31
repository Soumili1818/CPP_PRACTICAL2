

#include<bits/stdc++.h>
using namespace std;

class College
{
	int x;//By default x is private
};

struct student
{
	int a;//by default a is public
};

	/*When deriving a struct from a class/struct, 
	the default access-specifier for a base class/struct is public. 
	And when deriving a class, the default access specifier is private. */

struct Derived : College { };
int main()
{
	College t;
	student y;
	
	t.x=20;//this will give compilation error
	y.a=30;//this will work fine

	return 0;
}
