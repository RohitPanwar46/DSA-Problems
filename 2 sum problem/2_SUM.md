# 2 SUM

In this problem we just have to find 2 pairs in a given array which sum is equal to target.

## Brute force approach 

in brute force we just have to use two loops on array and get the all possible pairs and check the sum of them if sum is equal to target, just return the index of elements.

Time complexity - ◯(n²)

## Batter approach

we will use two pointer approach but first we need sort the array in ascending order.

start will be first index and end will be last index if we got sum of pair greater then target will decrease the end-- or we got lower sum we will increase the start++ or we got the target means target == sum we will return the index of pair

Time Complexity - ◯(nlogn)

## Optimized approach 

in this approach we will use a single loop for choosing first element then we calculate the second element by using given target so second element will be second = target-first and then we have to choose first value by loop and then we will find the second element in unordered map which is cpp stl data type and but first have to create map like this unordered_map <int, int > m and if we got the sec. element we just have to return index of elements and and if didn't we just have insert first element like this m[first] = i;
here m.find method is a game changer which have nearly constant time complexity and loop have ◯(n) complexity so overall time complexity will be ◯(n)

Time Complexity ◯(n)


