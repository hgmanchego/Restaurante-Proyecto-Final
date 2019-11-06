#include <iostream>
#include <vector>
using namespace std;

void Swap(string &a,string &b){
	string x;
	x=a;
	a=b;
	b=x;
}
int particion(vector<string>&vec, int low, int high){  
	string pivote=vec[high]; 
	int i=(low-1);
	for (int j=low;j<=high-1;j++){
		if (vec[j] < pivote){  
			i++;
			Swap(vec[i],vec[j]); 
		}  
	}  
	Swap(vec[i+1],vec[high]);  
	return (i + 1);  
}
void Quick(vector<string>&vec, int low, int high){  
	if (low < high){
		int pivote = particion(vec, low, high);  
		Quick(vec, low, pivote - 1);  
		Quick(vec, pivote + 1, high);  
	} 
	return;
}
int main(int argc, char *argv[]) {
	vector<string> nombres={"algo c","algo a","algo b"};
	
	Quick(nombres,0,2);
	for(int i=0;i<3;i++){
		cout<<nombres[i]<<" ";
	}
	return 0;
}
