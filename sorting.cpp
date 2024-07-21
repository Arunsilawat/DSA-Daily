#include <iostream>
using namespace std;
//--------------------- bubble sort -----------------------------
//void bubble_sort(int a[],int n){
//	int temp,flag;
//	for(int i=0;i<n-1;i++){
//		flag=0;
//		for(int j=0;j<n-i-1;j++){
//			if(a[j]>a[j+1]){
//				temp=a[j];
//				a[j]=a[j+1];
//				a[j+1]=temp;
//				flag=1;
//			}
//		}
//		if(flag==0)
//		break;
//	}
//}
//void print(int a[],int n){
//	for(int i=0;i<n;i++){
//		cout<<a[i]<<" ";
//	}
//}
//int main(){
//	int ar[5]={17,14,3,21,5};
//	print(ar,5);
//	cout<<endl;
//	bubble_sort(ar,5);
//	print(ar,5);
//}

//--------------------- insertion sort --------------------------
//void insertion_sort(int a[],int n){
//	int key,j;
//	for(int i=1;i<n;i++){
//		key=a[i];
//		j=i-1;
//		while(j>=0 && a[j]>key){
//			a[j+1]=a[j];
//			j--;
//		}
//		j++;
//		a[j]=key;
//	}
//}
//void print(int a[],int n){
//	for(int i=0;i<n;i++){
//		cout<<a[i]<<" ";
//	}
//}
//int main(){
//	int ar[5]={17,14,3,21,5};
//	print(ar,5);
//	cout<<endl;
//	insertion_sort(ar,5);
//	print(ar,5);
//}
//--------------------- selection sort ----------------------------

//void selection_sort(int a[],int n){
//	int temp,index;
//	for(int i=0;i<n-1;i++){
//		index=i;
//		for(int j=i+1;j<n;j++){
//			if(a[index]>a[j]){
//				index=j;
//			}
//		}
//		if(i!=index){
//			temp=a[i];
//			a[i]=a[index];
//			a[index]=temp;
//		}
//	}
//}
//void print(int A[],int n){
//	for(int i=0;i<n;i++){
//		cout<<A[i]<<" ";
//	}
//}
//int main(){
//	int ar[5]={17,14,3,21,5};
//	print(ar,5);
//	cout<<endl;
//	selection_sort(ar,5);
//	print(ar,5);
//}
//-----------------------------------------------------------------
//void bubble(int a[],int n){
//	int temp,flag;
//	for(int i=0;i<n-1;i++){
//		flag=0;
//		for(int j=0;j<n-i-1;j++){
//			if(a[j]>a[j+1]){
//				temp=a[j];
//				a[j]=a[j+1];
//				a[j+1]=temp;
//				flag=1;
//			}
//		}
//		if(flag==0)
//		 break;
//	}
//}
//void insertion(int a[],int n){
//	int key,j;
//	for(int i=1;i<n;i++){
//		key=a[i];
//		j=i-1;
//		while(j>=0 && a[j]>key){
//			a[j+1]=a[j];
//			j--;
//		}
//		j++;
//		a[j]=key;
//	}
//}
//void selection(int a[],int n){
//	int temp,index;
//	for(int i=0;i<n-1;i++){
//		index=i;
//		for(int j=i+1;j<n;j++){
//			if(a[index]>a[j]){
//				index=j;
//			}
//		}
//		if(i!=index){
//			temp=a[i];
//			a[i]=a[index];
//			a[index]=temp;
//		}
//	}
//}
//void print(int A[],int n){
//	for(int i=0;i<n;i++){
//		cout<<A[i]<<" ";
//	}
//}
//int main(){
//	int ar[5]={17,14,3,21,5};
//	print(ar,5);
//	cout<<endl;
//	cout<<"Bubble sort"<<endl;
//	bubble(ar,5);
//	print(ar,5);
//	cout<<endl;
//	cout<<"Insertion sort"<<endl;
//	insertion(ar,5);
//	print(ar,5);
//	cout<<endl;
//	cout<<"selection sort"<<endl;
//	insertion(ar,5);
//	print(ar,5);
//}

//---------------------------------------
void Bubble(int A[],int n){
	int temp,flag;
	for (int i=0;i<n-1;i++){
		flag=0;
		for(int j=0;j<n-i-1;j++){
			if(A[j]>A[j+1]){
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0){
			break;
		}
	}
}
void insertion(int A[],int n){
	int key,j;
	for(int i=1;i<n;i++){
		key=A[i];
		j=i-1;
		while(j>=0 && A[j]>key){
			A[j+1]=A[j];
			j--;
		}
		j++;
		A[j]=key;
	}
}
void selection(int a[],int n){
	int temp,index;
	for(int i=0;i<n-1;i++){
		index=i;
		for(int j=i+1;j<n;j++){
			if(a[index]>a[j]){
				index=j;
			}
		}
		if(i!=index){
			temp=a[i];
			a[i]=a[index];
			a[index]=temp;
		}
	}
}
 
void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int ar[6]={90,9,23,5,43,12};
	print(ar,6);
	cout<<endl;
	Bubble(ar,6);
	print(ar,6);
	cout<<endl;
	insertion(ar,6);
	print(ar,6);
	cout<<endl;
	selection(ar,6);
	print(ar,6);
}
