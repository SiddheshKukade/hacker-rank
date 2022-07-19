    #include <cmath>
    #include <cstdio>
    #include <vector>
    #include <iostream>
    #include <algorithm>
    using namespace std;


    int main() {
        int n; // size of elements 
        vector<int> v ; //elements
        int q ; // no of queries
        vector<int> query ; //elements to compare
        int temp ;
        vector<int>::iterator itr, itr2;

        cin>>n;
        
        for(int i =0 ; i<n; i++){
            cin>>temp;
            v.push_back(temp);
        }   
        
        cin>>q;
        for(int i =0 ; i<q; i++){
            cin>>temp;
            query.push_back(temp);
        }  
        int index;
        for(int i =0 ; i<q; i++){
            // itr2 = find(v.begin(), v.end(),query[i]);
            itr = lower_bound(v.begin(), v.end(), (int)query[i]);
            if(query[i] != *itr){
                cout
                        << "No "
                        << ((itr - v.begin()))+1
                        <<"\n";
            }else { 
                    // cin>>temp;
                    // itr = lower_bound(v.begin(), v.end(), (int)                          query[i]);
                    //   index = itr2 - v.begin();        
                    cout<<"Yes "<<((itr - v.begin()))+1<<"\n";  
                    
                }
        }
            return 0;
    }
