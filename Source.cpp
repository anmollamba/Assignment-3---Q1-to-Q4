#include <iostream>
#include <queue>
#include "Header.h"

using namespace std;

int main()
{
	queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    q = reverse(q);

    // Print the queue
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    

    char str[] = "geeg";

    if (isPalindrome(str))
        cout << endl << "Yes";
    else
        cout << endl << "No";

    return 0;

}