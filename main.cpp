//
//  main.cpp
//  First arg
//
//  Created by Mingmanas Sivaraksa on 2/1/2567 BE.
//

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
#include "sorting.h"

int main(int argc, char * argv[]) {
    
    cout<<"argc is "<<argc<<endl;
    vector<int> vals;

    for(int i = 1; i < argc; i++){
        const char *s = argv[i];
        char *endptr = nullptr;
        long v = strtol(s, &endptr, 10);
        if(endptr != s && *endptr == '\0'){
            vals.push_back((int)v);
        }
    }

    int N = (int)vals.size();
    if(N <= 0){
        cout << "Please provide numbers as arguments" << endl;
        return 1;
    }

    int *a = new int[N];
    for(int i = 0; i < N; ++i) a[i] = vals[i];

    cout << "Before sorting: ";
    display(a, N);

    sort(a, N);
    cout << "After sorting: ";
    display(a, N);

    delete [] a;
    
    return 0;
}
