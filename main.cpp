//
//  main.cpp
//  First arg
//
//  Created by Mingmanas Sivaraksa on 2/1/2567 BE.
//

#include <iostream>
#include <cstdlib>
using namespace std;
#include "sorting.h"

int main(int argc, char * argv[]) {
    
 
  cout<<"argc is "<<argc<<endl;
  int i, N;
  int *a;
  if(argc >1){
      cout<<"argc is " << argc << endl;
    N = argc - 1;
    a = new int [N];
    for(i = 1; i < argc; i++){
      cout<<"argv[" << i << "] "<< argv[i]<<endl;
      a[i-1] = atoi(argv[i]);
    }
  }

  else {
    cout<< "Howmany numbers"<<endl;
    cin>> N;

    a = new int [N];
    cout<<"Enter numbers"<<endl;
    for(i=0; i < N; i++){
        cin>> a[i];
      }
  }
    /* Convert to numbers*/
    cout<<"Before sorting:";
    display(a,N);
    
    sort(a,N);
    cout<<"After sorting:";
    display(a,N);
    
    delete [] a;
    
    return 0;
}
