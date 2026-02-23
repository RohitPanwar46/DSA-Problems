# 3 Sum Problem 
In this problem we have a array and a target variable and we have to find three elements of array, whose addition is equal to target and then we return those triplet. and all triplet should be unique.

## BruteForce approach
- we will get all possible triplet using three loops and return those which satisfy our problem statement.

## approach with hashing
- In this approach we will use two loops to get first two numbers and then we search for next element which is "c = -a - b", we have a and b so we have to find the c by searching it in set by method s.find() while adding the value to of nums[j] in set.


## Two pointer approach
- In this we will first short the array then use two pointers, j and k and we will use two loops, for loop and while loop and outer loop will be for loop who choose the first element of triplet. so we have a now so now we run our while loop which runs until (j < k). if a + b + c < 0 we will increase j to j++ and if a + b + c > 0 decrease j to j-- and if equal to zero we will return the triplet or will add it to the ans vector. but we have to prevent to same combination of triplet because all combinations should be unique.