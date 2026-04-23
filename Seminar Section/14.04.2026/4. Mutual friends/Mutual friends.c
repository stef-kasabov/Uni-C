#include <stdio.h>
#include <stdlib.h>

/*
4з. В училището на Ели има 1 <= N <= 100,000 човека. Някои от тях се познават с други, като
Ели знае, че съществуват 1 <= M <= 1,000,000 такива приятелства. Тя иска да напише
програма, която бързо отговаря кои са приятелите на даден човек. Ако хората се подават
с номера като цяло число, както и приятелите им изведете при поискан човек колко
приятели има. (ако 1 е приятел с 3 то и 3 е приятел с 1).
Use static memory allocation for the friends list and count.
*/

int main() 
{
    int N, M;
    printf("Enter number of people (N) and friendships (M): ");
    scanf("%d %d", &N, &M);

    int cnt[100001] = {0};

    printf("Enter %d friendships (pairs like: a b):\n", M);
    for (int i = 0; i < M; i++) 
    {
        int a, b;
        printf("Friendship %d: ", i + 1);
        scanf("%d %d", &a, &b);

        cnt[a]++;
        cnt[b]++;
    }

    int Q;
    printf("Enter number of queries (Q): ");
    scanf("%d", &Q);

    printf("Enter %d people to check their number of friends:\n", Q);
    while (Q--) 
    {
        int x;
        printf("Person: ");
        scanf("%d", &x);

        printf("Friends count: %d\n", cnt[x]);
    }

    return 0;
}