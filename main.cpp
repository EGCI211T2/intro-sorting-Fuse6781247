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
    int i, N;
    int *a;
    
    /* Convert to numbers*/
    N = argc - 1;
    
    if(N <= 0) {
        cout << "Please provide numbers as arguments" << endl;
        return 1;
    }
    
    a = new int[N];
    
    for(i = 1; i < argc; i++){
        cout << "argv[" << i << "] = " << argv[i] << endl;
        a[i-1] = atoi(argv[i]);
    }
    
    cout << "Before sorting: ";
    display(a, N);
    
    sort(a, N);
    cout << "After sorting: ";
    display(a, N);
    
    delete [] a;
    
    return 0;
}
