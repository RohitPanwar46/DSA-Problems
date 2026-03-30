#include<iostream>
#include<vector>
using namespace std;

int checkValidity(vector<int> books, int m, int maxP){
    int ans = 0, pages = 0, st = 1;
    int n = books.size();

    for (int i = 0; i < n; i++)
    {
        if (books[i] > maxP)
        {
            return 0;
        }
        if ((pages+books[i]) <= maxP)
        {
            pages += books[i];
        }else{
            pages = books[i];
            st += 1;
        }
    }

    if (st == m)
    {
        ans = 1;
    }else {
        ans = 0;
    }

    return ans;
}

int bookAllocate(vector<int> books, int m){
    int n = books.size();
    int sum = 0, ans;
    
    if (n<m)
    {
        return 0;
    }
    

    for (int i = 0; i < n; i++)
    {
        sum += books[i];
    }
    
    int start = 0, end = sum;
    int mid = (start + end)/2;

    while (start<=end)
    {
        mid = (start + end)/2;
        if (checkValidity(books, m, mid))
        {
            ans = mid;
            end = mid-1;
        }else{
            start = mid+1;
        }
        
    }
    
    return ans;
}


int main() {
   vector<int> books = {250};
int students = 1;

    cout << bookAllocate(books, students);
    
    return 0;
}