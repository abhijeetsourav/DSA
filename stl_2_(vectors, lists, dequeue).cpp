#include <bits/stdc++.h>
using namespace std;



void explainVector(){
    // vector is of dynamic size, unlike arrays which are constant in size
    
    vector<int> v1;              // empty container, {}

    v1.push_back(1);             // {1}
    v1.emplace_back(2);          // dynamically increases it's size, faster than push_back()


    vector<pair<int, int>> vec;

    vec.push_back({1,2});
    vec.emplace_back(1,2);      // automatically assumes it to be a pair<int, int>


    vector<int> v2(5, 100);     // {100, 100, 100, 100, 100}

    vector<int> v3(5);          // 5 instances of garbage value

    vector<int> v4(5, 20);
    vector<int> v5(v4);         // copy of v4 container


    // accessing elements of a vector --> can be accessed similar to arrays
    vector<int>::iterator it = v1.begin();       // v.begin points to the starting memory location of vector v
    
    it++;                                       // iterator moves to the next position in the memory of the vector
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) << " ";

    vector<int>::iterator it1 = v1.end();         // doesn't point to end of the vector, instead points to 1 memory ahead of the last one 
                                                 // to point it to the last use it-- 

    // vector<int>::iterator it2 = v.rend();        // reverse end; points to lacation just before 1st element
    
    // vector<int>::iterator it3 = v.rbegin();      // reverse begin; points to the end of the vector


    cout << v1[0] << " " << v1.at(0);

    cout << v1.back() << " ";                    // last element


    for (vector<int>::iterator it = v1.begin() ; it != v1.end() ; it++) {
        cout << *(it) << " ";
    }
    
    // auto is used to automatically detects the DATA_STRUCTURE being used
    for (auto it = v1.begin() ; it != v1.end() ; it++) {
        cout << *(it) << " ";
    }

    // iterates on datatype
    for (auto it : v1) {
        cout << it << endl;
    }

    
    // deletion in a vector 
    v1.erase(v1.begin()+1); 

    v2.erase(v2.begin() + 2, v2.begin() + 4);        // it deletes the element at 1 to 2 position, the last position is excluded
                                                     // [start, end)


    // INSERT FUNCTION
    vector<int> v10(2,100);//{100, 100}

    v10.insert(v10.begin(), 300);//{300, 100, 100}           // 300 is inserted at the first position                                                
    v10.insert(v10.begin() + 1, 2, 10);//{300, 10, 10, 100, 100}


    // INSERTING A COPY OF VECTOR INTO ANOTHER
    vector<int> copy(2,50);//{50, 50}

    v10.insert(v10.begin(), copy.begin(), copy.end());//{50, 50, 300, 10, 10, 100, 100}

    //{10, 20}
    cout << v1.size() << endl;   //2


    v1.pop_back();       //{10}

    // v1 -> {10, 20}
    // v2 -> {30, 40}
    v1.swap(v2);    // v1 -> {30, 40} , v2 -> {10, 20}

    v1.clear();     // erases the entire vector

    cout << v1.empty();     // returns an integer of bool value, whether vector is empty or not

    // clear() removes all elements from the vector leaving behind a vector of size zero while 
    // erase() deletes a single element or a range of elements from the vector.

}



void explainList() {

    list<int> ls;

    ls.push_back(2);            // {2}
    ls.emplace_back(4);         // {2, 4}

    ls.push_front(5);           // {5, 2, 4}
    ls.emplace_front(6);        // {6, 5, 2, 4}

// insert() method in vector has more time complexity than push_front() method in list

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap 

}


void explainDeque() {

    deque<int> dq;

    dq.push_back(21);            // {21}
    dq.emplace_back(4);          // {21, 4}
    dq.push_front(25);           // {25, 21, 4}
    dq.emplace_front(16);        // {16, 25, 21, 4}

    dq.pop_back();               // {16, 25, 21}
    dq.pop_front();              // {25, 21}

    dq.back();                   // Returns a read/write reference to the data at the last element of the deque.
    dq.front();                  // Returns a read/write reference to the data at the first element of the deque.

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap 

}


void explainStack() {
    // LIFO ->  Last in First out

    stack<int> stk;

    stk.push(1);         // {1}
    stk.push(2);         // {2, 1}
    stk.push(3);         // {3, 2, 1}
    stk.push(3);         // {3, 3, 2, 1}
    stk.emplace(5);      // {5, 3, 3, 2, 1} 

    cout << stk.top() << endl;    // returns the top-most element of the stack
                                  // stk[2] is invalid

    stk.pop();             // {3, 3, 2, 1}
 
    cout << stk.top() << endl;     // returns 3

    cout << stk.size() << endl;    // 4

    cout << stk.empty() << endl;

    stack<int> stk2;
    stk.swap(stk2);         // swaps each other stack
    
}

int main(){

    // explainVector();
    // explainList();
    // explainDeque();
    explainStack();

    return 0;
}