#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int x=1,total;
	while(x<=10){
		total+=x;
		++x;
		cout<<x<<endl;
		cout<<total<<endl;
	}	
}