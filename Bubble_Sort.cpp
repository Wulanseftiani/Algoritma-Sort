#include <iostream>

using namespace std;


	
	int data[10], data2[10];
	int i;
	
	void tukar (int a, int b){
		int t;
		t = data [b];
		data[b] = data [a];
		data[a] = t;
	}
	
	void bubblesort()
	{
		for (int a=1; a<=i; a++)
		{
			for (int b=1; b>=a; b--)
			{
				if (data[b] < data[b-1])
				{
					tukar (b, b-1);
				}
			}
		}
	}


main ()
{
	cout<<"Masukan Jumlah Data: "<<endl;
	cin>> i;
	cout<<endl;
	for (int a=1; a<=i; a++)
	{
		cout<<"Masukan Data Ke- "<<a<<" :";
		cin >> data[a];
		data2[a] = data[a];
	}
	
	bubblesort();
	
	cout<<"Data Setelah Diurutkan"<<endl;
	cout<<endl;
	
	for (int a=1; a<=i; a++)
	
	cout<<data[a]<<" ";
	cout<<endl;
	
	system("pause");
}
