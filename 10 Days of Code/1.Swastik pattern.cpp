#Ganesha'a Pattern |[Problem](https://hack.codingblocks.com/app/practice/6/1055/problem)

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	//first component
	//star
	cout<<"*";

	//space
	for (int i=1;i<=(n-3)/2;i++){
		cout<<" ";
	}
	//star
	for (int i=1;i<=(n+1)/2;i++){
		cout<<"*";
	}
	cout<<endl;

	//second component
	//star
	for (int row=1;row<=(n-3)/2;row++){
		cout<<"*";
		//space
		for (int i=1;i<=(n-3)/2;i++){
			cout<<" ";
		}
		cout<<"*"<<endl;
	}


	//third component
	//star
	for (int i=1;i<=n;i++){
		cout<<"*";
	}
	cout<<endl;

	//fourth component
	//space
	for (int row=1;row<=(n-3)/2;row++){
		//space
		for(int i=1;i<=(n-3)/2+1;i++){
			cout<<" ";
		}

		//star
		cout<<"*";
		//space
		for(int i=1;i<=(n-3)/2;i++){
			cout<<" ";
		}

		//star
		cout<<"*"<<endl;
	}

	//fifth compontent
	//star
	for (int i=1;i<=(n+1)/2;i++){
		cout<<"*";
	}
	//space
	for (int i=1;i<=(n-3)/2;i++){
		cout<<" ";
	}
	//star
	cout<<"*";
	return 0;

}