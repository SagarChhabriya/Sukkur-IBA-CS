

class ThirdMaximumNumber{
    public int thirdMax(int[] nums) {
         Integer first = null;
        Integer second = null;
        Integer third = null;

        for (Integer num : nums) {
            if (num.equals(first) || num.equals(second) || num.equals(third)) {
                continue;
            }

            if (first == null || num > first) {
                third = second;
                second = first;
                first = num;
            } else if (second == null || num > second) {
                third = second;
                second = num;
            } else if (third == null || num > third) {
                third = num;
            }
        }

        return (third != null) ? third : first;
        
    }
	public static void main(String[] args)
	{
	System.out.println("Given an integer array nums, return the third distinct maximum number in this array. If the third maximum doesn't exist, return the maximum number");
	}
}
/*
Example 1:

Input: nums = [3,2,1]
Output: 1
Explanation:
The first distinct maximum is 3.
The second distinct maximum is 2.
The third distinct maximum is 1.
Example 2:

Input: nums = [1,2]
Output: 2
Explanation:
The first distinct maximum is 2.
The second distinct maximum is 1.
The third distinct maximum does not exist, so the maximum (2) is returned instead.
Example 3:

Input: nums = [2,2,3,1]
Output: 1
Explanation:
The first distinct maximum is 3.
The second distinct maximum is 2 (both 2's are counted together since they have the same value).
The third distinct maximum is 1.

*/