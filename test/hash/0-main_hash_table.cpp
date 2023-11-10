#include "hash.hpp"

int main(void)
{
    char str[10] = "johnmark";
    unsigned long ans;

    ans = (hash_function(str));
    cout << ans << endl;

    return (0);
}