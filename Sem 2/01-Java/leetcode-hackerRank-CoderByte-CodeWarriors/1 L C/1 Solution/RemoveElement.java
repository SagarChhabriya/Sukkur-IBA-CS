class RemoveElement{
    public int removeElement(int[] nums, int val) {
       int i = 0; // pointer for the next element to be overwritten
        for (int j = 0; j < nums.length; j++) {
            if (nums[j] != val) {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
	public static void main(String[] args)
	{
		System.out.print("Remove Element Class");
	}
}