#include <iostream>
#include <iomanip>
using namespace std;
//1. Creating make file
//2. Swap the value in the array using pointers** to help
//3. Take input from argv


int main(int argc, char **argv){
 int i,n,*a;
			n=argc-1;
 		     a=new int[n];
			for(i=0;i<n;i++) {
			    a[i]=atoi(argv[i+1]);
		       cout<< "a[" << i << "]=" <<a[i]<<endl;
		}

    int*pa=a;
    int*pb;
    int temp;
   pa = a; pb = a+n-1;
  cout<<"Reverse: ";
  for(i=0; i<n/2;i++)
    {
      temp = *pa;
      *pa = *pb;
      *pb = temp;
      pa++; pb--;
    }
  pa -= n/2;
  for(i=0;i<n-1;i++,pa++)
    cout<<setw(3)<<*pa;

  cout<<setw(3)<<*pa<<endl;
	
  

 delete [] a;  
}

  
//}

