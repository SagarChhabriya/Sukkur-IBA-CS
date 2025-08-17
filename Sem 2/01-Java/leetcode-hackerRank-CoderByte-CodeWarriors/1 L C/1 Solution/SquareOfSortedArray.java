class SquareOfSortedArray{
    public int[] sortedSquares(int[] nums) {
        int b=0;
        for(int i=0; i<nums.length; i++)
            nums[i]=nums[i]*nums[i];
        for(int i=0; i<nums.length; i++)
            for(int j=i+1; j<nums.length; j++)
                if(nums[i]>nums[j])
                {
                    b=nums[i];
                    nums[i]=nums[j];
                    nums[j]=b;
                }
        return nums;    
    }
}