class FindConsecutiveOnes{
    public int findMaxConsecutiveOnes(int[] nums) {
         int maxCount = 0;
        int currentCount = 0;

        for (int num : nums) {
            if (num == 1) {
                currentCount++;
                maxCount = Math.max(maxCount, currentCount);
            } else {
                currentCount = 0;
            }
        }

        return maxCount;
    }
}
/*
input :
nums = [1,1,0,1,1,1]
output:
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

*/