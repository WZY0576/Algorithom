#include <iostream>
using namespace std;

#define bitAt(n,k) ((n>>k)&1)
#define lastOf(n,k) (n&((1<<k)-1))
#define toggleAt(n,k) n=n^(1<<k)
#define setAt(n,k) n=n|(1<<k)
#define resetAt(n,k) n=n&(~(1<<k))


int main() {
}
