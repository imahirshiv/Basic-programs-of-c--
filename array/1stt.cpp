int count(int arr[], int n)
{
    // we will count the number of odd elements and subtract it from n which will give
    // even elements
    int count_odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count_odd++;
        }
    }
    return count_odd;
}