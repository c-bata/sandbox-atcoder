#include <cstdio>
#include <stack>
#include <queue>

using namespace std;

int main() {
    // queue
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    printf("%d\n", q.front());

    q.pop();
    printf("%d\n", q.front());

    q.pop();
    printf("%d\n", q.front());

    q.pop();
    printf("%d\n", q.front());

    // stack
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    printf("%d\n", s.top());

    s.pop();
    printf("%d\n", s.top());

    s.pop();
    printf("%d\n", s.top());

    s.pop();
    printf("%d\n", s.top());
    return 0;
}
