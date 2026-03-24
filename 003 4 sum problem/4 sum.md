# 4 SUM
In this problem we have to find 4 unique pair whose sum is equal to target.
nums[i] + nums[j] + nums[k] + nums[l] = target
but i != j != k != l

## Best optimal approach 
We are using first outer loop for choosing first value(nums[i]) and second inner loop for second value(nums[j]) and then we choose our other two values using two pointer technique so we made two pointer s(start) and e(end) then applied same binary search to get answer.

## Optimizations
1. First optimization is we are skipping same value while choosing first values in first loop.
2. Second optimization is we are skipping same values while choosing second value same as First.
3. In Third optimization we are also skipping same values while pointing the s pointer to the next value.

Note:- we are not skipping the same values in while e pointer is pointing the next value because we are already changed the s value so at one time one pointer should be change if we change  both together then some combination will be skipped which can be cause of answer missed.