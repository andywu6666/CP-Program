#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main ()
{
    string N;

while (cin >> N && N != "0")
{
    string result = N;
    bool flag = false;
    int count = 1;
    // store numbers up to 1000 digits
    recursive:
    int i = result.length() - 1;
    int sum = 0;
    int digit = 0;
    while (i >=0)
    {

         digit = (i >= 0) ? result[i--] - '0' : 0;
        sum += digit;
       

    }

     if (sum % 9 == 0)
    {
        if (sum >= 10)
        {
            count++;
            result = to_string(sum);
            goto recursive;
        }
        else
        {
            flag = true;
        }
    }

     if (flag)
        cout << N << " is a multiple of 9 and has 9-degree " << count << "." << endl;
     else
        cout << N << " is not a multiple of 9." << endl;
    

}







    return 0;
}