#include <bits/stdc++.h>
using namespace std;
int main()
{
  stack<int> s;
  s.push(1000);
  s.push(12);
  s.pop();
  cout << s.top() << endl;
  if (s.empty())
  {
    cout << "stack is empty" << endl;
  }
  else
  {
    cout << "stack is not empty" << endl;
  }
  cout << s.size() << endl;

  return 0;
}