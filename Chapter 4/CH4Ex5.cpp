#include <iostream>

using namespace std;
main ()
{
    int n1, n2, n3;
    int ans;
    cin >> n1 >> n2 >> n3;
     
    /*if (n1 < n2)
        if(n1 < n3)
            ans = n1;
        else
            ans = n3;
    else
        if(n2 < n3)
            ans = n2;
        else
            ans = n3;
    cout << "The lowest is " << ans << endl;
    */
   if ((n1 < n2) && (n1<n2))
        ans = n1;
    else if ((n1 < n2) && !(n1<n3))
        ans = n3;
    else if (!(n1 < n2) && (n2 < n3))
        ans = n2;
    else
        ans = n3;
    cout << "The lowest is " << ans << endl;

}