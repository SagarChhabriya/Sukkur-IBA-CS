class SortColors {
    public void sortColors(int[] arr) {
            for(int i = 0; i < arr.length; i++)
        {
            int cur =  arr[i];
            int j=i;
            for( j = i; j>0 && arr[j-1]>cur; j--)
                arr[j] = arr[j-1];
	       
		 arr[j] = cur;
        }
    }
	public static void main(String[] args)
	{
		System.out.println("Sort Colors " ) ;
	}
}










/*
Given an array numswith nobjects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

 

Example 1:

Input: nums = [2,0,2,1,1,0]
 Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
 Output: [0,1,2]
 

Constraints:

n == nums.length
1 <= n <= 300
nums[i]is either 0, 1, or 2.

*/