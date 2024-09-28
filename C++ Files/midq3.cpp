#include <bits/stdc++.h>

int main()
{
    std::cout << "work";
    int n;
    static long long index = 0;
    static long long arr[20000003] = {0};
    std::cin >> n;
    std::cout <<"stop";
    for (int i = 0; i < n; i++)
    {
        std::cout << "work";
        int temp1, temp2;
        std::cin >> temp1, temp2;
        while (temp1 != temp2)
        {
            index++;
            arr[temp1]++;
            temp1++;
        }
    }
    index /= 2;
    int run = 0;
    for (int i = 0;; i++)
    {
        run += arr[i];
        if (run >= index)
            ;
        {
            std::cout << i;
            break;
        }
    }
    return 0;
}