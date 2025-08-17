class DuplicateZeros{
    public void duplicateZeros(int[] arr) {
        int length = arr.length;
        int i = 0;

        while (i < length) {
            if (arr[i] == 0) {
                // Shift elements to the right
                for (int j = length - 1; j > i; j--) {
                    arr[j] = arr[j - 1];
                }

                // Duplicate zero
                i++;
                if (i < length) {
                    arr[i] = 0;
                }
            }

            i++;
        }

        // Assign zero to the remaining positions
        for (int j = length; j < arr.length; j++) {
            arr[j] = 0;
        }
        
    }
}