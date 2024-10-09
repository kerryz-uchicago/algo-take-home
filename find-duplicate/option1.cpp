#include <cstdint>
#include <cstdlib>
#include <vector>
#include <unordered_set>
#include <iostream>



using namespace std;

// Implement a function to identify a duplicate integer in an unsorted array
// of integers. Talk about time/space complexity for each method you implement.

// `input` contains exactly N+1 numbers
// `input` elements are integers in the domain [1, N]
// `input` contains all integers in the domain [1, N] at least once
// `findDuplicate` returns an `int`: the duplicate integer



//this is probably the most intuitive solution. unordered set/hash table is pretty efficient
//time O(n), as each lookup/insert is O(1) and we loop through 1-N
//space O(n), as in the worst case visited has to store n numbers
int findDuplicate(vector<int> input) {

    unordered_set<int> visited;

    for(int n : input){
        if(visited.count(n)){
            return n;
        }

        visited.insert(n);
    }

    return -1;

}

int main(){
    //testing
    cout << findDuplicate({1,2,3,4,5,2,6}) << endl; // outputs 2
    cout << findDuplicate({1,2,3,5,45,7,5,4,20,111}); // outputs 5

    return 0;
}