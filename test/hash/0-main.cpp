#include "hash.hpp"

int main(void)
{
    // Testing for collision
    char str[20] = "Cau";
    char str1[20] = "Hel";
    unsigned long ans;

    ans = (hash_function(str));
    cout << "size: " << ans << endl << endl;

    ans = (hash_function(str1));
    cout << "size: " << ans << endl; 

    return (0);
}