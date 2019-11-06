#include <iostream>
#include <vector>
using namespace std;

void Swap(string *a,string *b){
	string x;
	x=*a;
	*a=*b;
	*b=x;
}
int particion(string *ptr, int low, int high)  {  
	string pivote=*(ptr+high); 
	int i=(low-1);
	for (int j=low;j<=high-1;j++){
		if (*(ptr+j) < pivote){  
			i++;
			Swap(ptr+i,ptr+j); 
		}  
	}  
	Swap(ptr+i+1,ptr+high);  
	return (i + 1);  
}
void Quick(string *ptr, int low, int high){  
	if (low < high){
		int pivote = particion(ptr, low, high);  
		Quick(ptr, low, pivote - 1);  
		Quick(ptr, pivote + 1, high);  
	} 
	return;
}
int main(int argc, char *argv[]) {
	string nombres[]={"algo c","algo a","algo b"},*ptr;
	ptr=nombres;
	Quick(ptr,0,2);
	for(int i=0;i<3;i++){
		cout<<*ptr<<" ";
		ptr++;
	}
	return 0;
}

