public class MultiDimensional {
    static int sum(int...arr)
    {
        int operation=0;
        for(int x: arr)
            operation+=x;
        return operation;
    }
    static int product(int ...arr)
    {
        int operation=1;
        for(int x : arr)
            operation*=x;
        return operation;
    }

    public static void main(String[] args) {
        System.out.println("RADHE RADHE");
//        can also be float arr[][]... and also changing the enchanced FLCV (FLCV have to the Same type as array's)
        int arr[][]={
//                😯 methods are placed on the indexes of an array
                {sum(1,2,3,4,5,6),product(),2,3,4,5,6},
                {1,2,3,4,5,6}
        };

        System.out.println(sum(5,6,7,8,9,10));
//        calling function as a parameter of other function
        System.out.println(product(sum(1,0),sum(1,1),sum(1,2),sum(1,3),sum(1,4)));
//        printing MD array with two for each loop
        for(int coll[] : arr)
            for(int x : coll)
                System.out.print(x + " ");

//three dimensional
        int[][][] array=
                {
                        {{1,2,3,4},{5,6,7,8}},
                        {{9,10,11,12},{13,14,15,16}},
                        {{17,18,19,20},{21,22,23,24}},
                        {{25,26,27,28},{39,30,31,32}},

                };
        for(int i=0; i<4; i++)
        {
            for(int j=0; j<2; j++)
            {
                for(int k=0; k<4; k++)
                {
                    System.out.print(array[i][j][k]+" → " + i +" " + j +" "+ k + " ," );
                }
                System.out.println();
            }
            System.out.println();
        }
        System.out.println("printing via for each");
        for(int[][] row: array )
        {
            for(int[] col : row )
            {
                for(int item : col )
                {
                    System.out.print(item + " ");
                }
                System.out.println();
            }System.out.println();
        }
        for(int[][] row: array )
            for(int[] col : row ) {
                for (int item : col) {
                    System.out.print(item + " ");
                }
                System.out.println();
            }
 /*
        char arr[][]=
                {
                        {'*','*','*','*','*'},
                        {'*','*','*','*','*'},
                        {'*','*','*','*','*'},
                };
        int i=0,j=0,condition=5,upd=0;
        for( i=2; i>=0; i--,upd++,condition-=1)
        {
            for( j=upd; j<condition; j++)
            {
//                System.out.print("i = " +i + "  j= " + j+ " ");
                    System.out.print(i+" "+ j +",");
            }
//        enter.close function is used to close the input and here enter is an object of class Scanner;
            enter.close();
*/




    }
}
