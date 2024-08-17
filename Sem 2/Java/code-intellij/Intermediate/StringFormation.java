import java.util.Scanner;

public class StringFormation {
    static int index=-1;
    static int arr2[];
    public static int[] duplicateZeros(int arr[])
    {
        arr2=new int[arr.length];
        for(int i=0; i<arr.length; i++) {
            if (arr[i] == 0)
            {
                 arr2[++i]=arr[i];
            }
            else
                arr2[i]=arr[i];

    }
    return arr;
    }
    public static int findMaxConsecutiveOnes(int[] nums) {
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
    public static int[] sortedSquares(int[] nums) {
        int b=0;
        for(int i=0; i<nums.length; i++)
            nums[i]=nums[i]*nums[i];
        for(int i=0; i<nums.length; i++)
        {
            for(int j=i+1; j<nums.length; j++)
            {
                if(nums[i]>nums[j])
                {
                    b=nums[i];
                    nums[i]=nums[j];
                    nums[j]=b;

                }
            }

        }
        return nums;
    }

    public static int findNumbers(int[] nums) {
        int count=1,even=0;
        for(int i=0; i<nums.length; i++)
        {
            while(nums[i]>=10)
            {
                nums[i]=nums[i]/10;
                count++;        }
            if(count%2==0)
            {++even; count=1;}
        }
        return even;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int nums[]={1,1,0,1,1,1};
        int bums[]={12,345,2,6,7896,100000};
        int gums[]={-4,-1,0,3,10};

//        System.out.println(findNumbers(bums));

        System.out.println(findMaxConsecutiveOnes(nums));
//        System.out.println(-5*5);
//        int arr[]=sortedSquares(gums);
//        for(int item: arr)
//            System.out.print(item+" ");
        int arr[]={1,0,2,3,0,4,5,0};
//        int res[]=duplicateZeros(arr);
//        for(int item: res)
//            System.out.print(item + " ");
       /*
        int n=3 ;
        n=++n + ++n;
       */
//        System.out.println(n);

    }
}
