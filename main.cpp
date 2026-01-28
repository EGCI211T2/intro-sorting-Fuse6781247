//
//  main.cpp
//  First arg
//
//  Created by Mingmanas Sivaraksa on 2/1/2567 BE.
//

#include <iostream>
using namespace std;
#include "sorting.h"

int main(int argc, char * argv[]) {
    
 
  cout<<"argc is "<<argc<<endl;
    int i,N;
    int *a;
    for(i=1;i<argc;i++){
      
      
      a = new int[N];

      cout<<"argv[" << i<<"]" <<argv[i]<<endl;

      for(i=1; i<argc; i++){
        a[i-1] = atoi(argv[i]);
      }
    }
    /* Convert to numbers*/
    N=argc-1;
    cout<<"Before sorting:";
    display(a,N);
    
    sort(a,N);
    cout<<"After sorting:";
    display(a,N);
    
    delete [] a;
    
    return 0;
}
