class SortArrayByParity{
    public int[] sortArrayByParity(int[] nums) {
        int[] even=new int[nums.length];
        int[] odd=new int[nums.length];
        int EvenIndex=0;
        int OddIndex=0;
        for(int i=0; i<nums.length; i++)
        {
            if(nums[i]%2==0 || nums[i]%2==-0)even[EvenIndex++]=nums[i];
            if(nums[i]%2==1 || nums[i]%2==-1)odd[OddIndex++]=nums[i];
        }
       
        int[] combinedArray = new int[EvenIndex + OddIndex];
        System.arraycopy(even , 0 , combinedArray, 0 , EvenIndex);
        System.arraycopy(odd  , 0, combinedArray , EvenIndex, OddIndex);
        
        return combinedArray;
    }
	public static void main(String[] args)
	{
	System.out.println("Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers. Return any array that satisfies this condition ");


}
/*
Example 1:

Input: nums = [3,1,2,4]
Output: [2,4,3,1]
Explanation: The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
Example 2:

Input: nums = [0]
Output: [0]
*/
}