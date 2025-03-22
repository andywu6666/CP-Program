#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> Tickets{1,2,3,4,5};
   
    Tickets.push_back(6);
    Tickets.insert(Tickets.begin() + 1, 666);

    for (int ticket : Tickets){
        cout << ticket << " " << endl;;
    }

    cout << "Number of elements in Tickets:" << Tickets.size() << endl; // int arraySize
    cout << "Is Tickets empty? " << Tickets.empty() << endl; //bool is_empty

    Tickets.erase(Tickets.begin() + 1, Tickets.end());
    Tickets.pop_back();


    for (int ticket : Tickets){// when Tickets.size = 0 , it won't be executed
        cout << ticket << " " << endl; 

        
    }

    cout << "Number of elements in Tickets:" << Tickets.size() << endl; // int arraySize
    cout << "Is Tickets empty? " << Tickets.empty() << endl; //bool is_empty




    return 0;
}