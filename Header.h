#include <iostream>
#include <queue>
#include <string>
using namespace std;

// Function to return the reversed queue
queue<int> reverse(queue<int> q)
{
    // Size of queue
    int s = q.size();

    // Second queue
    queue<int> ans;

    for (int i = 0; i < s; i++) {

        // Get the last element to the
        // front of queue
        for (int j = 0; j < q.size() - 1; j++) {
            int x = q.front();
            q.pop();
            q.push(x);
        }

        // Get the last element and
        // add it to the new queue
        ans.push(q.front());
        q.pop();
    }
    return ans;
}


// A recursive C++ program to check whether a given number is palidrome or not

// A recursive function that
// check a str[s..e] is
// palindrome or not.
bool isPalRec(char str[],
    int s, int e)
{

    // If there is only one character
    if (s == e)
        return true;

    // If first and last
    // characters do not match
    if (str[s] != str[e])
        return false;

    // If there are more than
    // two characters, check if
    // middle substring is also
    // palindrome or not.
    if (s < e + 1)
        return isPalRec(str, s + 1, e - 1);

    return true;
}

bool isPalindrome(char str[])
{
    int n = strlen(str);

    // An empty string is
    // considered as palindrome
    if (n == 0)
        return true;

    return isPalRec(str, 0, n - 1);
}
