#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

//Tharindu Rewatha
int main() {
   int q ; 
cin >> q ;
int type ;
int x ;
set<int> st ; 
for (int i=0 ; i < q ; i++) {
    cin >> type ; 
    if (type==1){
        cin >> x ; 
        st.insert(x) ;       
    }
    else if (type==2){
        cin >> x; 
        st.erase(x) ; 
    }
    else if (type==3){
        cin >> x ; 
        if (st.count(x))
            cout << "Yes" << endl ;
        else 
            cout << "No" << endl;   
    }
}     
    return 0;
}
//Seekthefreak


