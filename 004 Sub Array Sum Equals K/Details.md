# Problem
In this problem we have an array and we have to return the count of subArrays whose sum is equal to k. 

## Imp. Formulas

1. subArraySum(i, j) = PS[j] - PS[i-1]
2. k = PS[j] - PS[i-1] => PS[i-1] = PS[j] - k  where k -> target
