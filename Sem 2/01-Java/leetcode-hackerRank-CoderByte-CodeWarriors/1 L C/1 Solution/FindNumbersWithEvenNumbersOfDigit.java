class FindNumbersWithEvenNumbersOfDigit{
    public int findNumbers(int[] nums) {
           int count=1,even=0;
        for(int i=0; i<nums.length; i++)
        {
            while(nums[i]>=10)
            {
                nums[i]=nums[i]/10;
                count++;        
            }
            if(count%2==0)
            {++even; count=1;}
        }           
        return even;
           
    }
}