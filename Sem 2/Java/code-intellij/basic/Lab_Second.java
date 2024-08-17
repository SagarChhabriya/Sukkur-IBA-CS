import java.util.Scanner;
public class Lab_Second {
    public static void main(String[] args) {
        System.out.println("RADHE RADHE ");
        Scanner enter = new Scanner(System.in);
/*
        //        Question No One Take radius as input and find the area of sphere
        System.out.println("Enter the Radius");
        double rad,area;
        rad = enter.nextDouble();
        area= 4*3.14*rad*rad;
        System.out.println("The Area of the Sphere is "+  area);

//        Question No Two , Calculate Zakar on any amount

        System.out.println("Enter Your Annual Income and the program will Show the Amount of Zakat on you Earned Amount");
        double zak,tot;
        zak= enter.nextDouble();
        tot = zak*0.025;
        System.out.println("The Amount of Zakat on your Income  "+ zak + " is " +  tot);

//    Question No Three, get percentage and Show the Grade

        System.out.println("Enter your Percentage and the Program will show you the Grade of your existing Percentage");
        System.out.println("Please Enter the Percentage");
        double  per=enter.nextDouble();
        if(per>0 && per<= 60)
        {       System.out.println("F Grade");    }
        else if(per>60 && per<= 70)
        {       System.out.println("D Grade");    }
        else if(per>70 && per<= 80)
        {       System.out.println("C Grade");    }
        else if(per>80 && per<= 90)
        {       System.out.println("B Grade");    }
        else if(per>90 && per<= 100)
        {       System.out.println("A Grade");    }
        else {  System.out.println("You Have Entered Percentage out of Range");     }

//        Question No Four,get input and show that the odd,Even,pos,neg,and zero.
        System.out.println("Enter the Number and the Program will Show you whether the " +
                "Number is Even, Odd, zero, positive or Negative");
        System.out.println("Please Enter the Number");
        int number;
        number = enter.nextInt();
        if(number> 0 && number%2==0)
        {   System.out.println("The Entered Number "+number+" is Even and Positive");   }
        else if(number< 0 && number%2==-0)
        {   System.out.println("The Entered Number "+number+" is Even and Negative");   }
        else if(number> 0 && number%2==1)
        {   System.out.println("The Entered Number "+number+" is Odd and Positive");   }
        else if(number< 0 && number%2==-1)
        {   System.out.println("The Entered Number "+number+" is Odd and Negative");   }
        else if (number==0)
        {   System.out.println("Entered Number "+ number + " is Equal to Zero");    }

//        Question No five Small Calculator,get input Numbers and the Operation
        System.out.println("Enter the Number and the Symbol of Operation and the Program will operate that");
        double  fst,scd,sum,dif,mul,qo;    char   symbol;
        System.out.println("Please Enter the First Number");
        fst = enter.nextDouble();
        System.out.println("Enter the Symbol of the Operation");
        symbol = enter.next().charAt(0);
        System.out.println("Enter the Second Number");
        scd =  enter.nextDouble();
        sum = fst + scd;    dif =  fst-scd; mul = fst*scd;   qo = fst/scd;
        if(scd==0 && symbol=='/')
        {   System.out.println("This Value evalutes Undefined with the " + symbol + " operator");  }

        if(symbol=='+')
        {   System.out.println("The Addition of Two Numbers is " +  sum );   }
        else if (symbol=='-')
        {   System.out.println("The Difference of Two Numbers is " +  dif );   }
        else if (symbol=='*')
        {   System.out.println("The Product of Two Numbers is " +  mul );   }
        else if ( symbol=='/')
        {   System.out.println("The Qoutient of Two Numbers is " +  qo ); }


//        Question No Twelfth, Compare Two Numbers

        System.out.println("Enter two Numbers and the Program will prompt you their Condition");
        double fst_num,scd_num;
        System.out.println("Enter first Number");
        fst_num=enter.nextDouble();
        System.out.println("Enter Second Number");
        scd_num=enter.nextDouble();
        if(fst_num>scd_num)
        {   System.out.printf("%.2f is greater than %.2f \n",fst_num,scd_num);   }
        else if(fst_num<scd_num)
        {   System.out.printf("%.2f is greater than %.2f \n",scd_num,fst_num);   }
        else if(fst_num==scd_num)
        {   System.out.printf("%.2f and %.2f are equal ",fst_num,scd_num);   }



//        Question No Thirteen, Fahrenheit to Celcius,→ Formula is Missing
//        System.out.println("Question No Thirteen");
*/
//        Question No Fourteen, Swap two Numbers using two and three variables
    /*
        System.out.println("Question No Fourteen Swapping the variables, with three Variables");
        double fst_swap,scd_swap,main_swap;
        System.out.println("Enter the First Number");
        fst_swap=enter.nextDouble();
        System.out.println("Enter the Second Number");
        scd_swap=enter.nextDouble();
        System.out.printf("Your Entered Numbers, first %.2f  and the second is %.2f \n",fst_swap,scd_swap);
        main_swap=fst_swap;
        fst_swap=scd_swap;
        scd_swap=main_swap;
        System.out.println("After Swapping these Variables Value the result is ");
        System.out.printf("First Number is %.2f, and the Second is %.2f ",fst_swap,scd_swap);

        System.out.println("Swapping via two variables");
        double fst_var,scd_var;
        System.out.println("Enter first Number");
        fst_var=enter.nextDouble();
        System.out.println("Enter the Second Number");
        scd_var=enter.nextDouble();
        System.out.printf("According to your given data, first number is %.1f, and the Second Number is %.1f  \n",fst_var,scd_var);
        fst_var=fst_var+scd_var;
        scd_var=fst_var-scd_var;
        fst_var=fst_var-scd_var;
        System.out.printf("After Swapping the Values, first is %.1f, and the Second is %.1f \n", fst_var,scd_var);
        */

//        Question No Fifteen, find out Vowel and consonant
      /*
        System.out.println("Question No Fifteen, find out Vowel and Consonant");
        char ch,ch_ch;
        System.out.println("Solving with Control Structure Selection's Conditional Statements ");
        System.out.println("Enter the Alphabet Character and the Programe will say you whether it is Vowel or Consonant");
        System.out.println("Enter the Character");
        ch = enter.next().charAt(0);
        if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='U'||ch=='u')
        {   System.out.printf("The Entered charcter %s is  a VOWEL \n",ch);     }
        else
        {   System.out.printf("Entered Character %s is a Consonant \n",ch);   }

        System.out.println("Solving with Control Structure Selection's Switch Statement");
        System.out.println("Enter the Alphabet Character and the program will say whether it is a VOWEL or Consonant");
        System.out.println("Enter the Character");
        ch_ch=enter.next().charAt(0);
        switch (ch_ch)
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'U':
            case 'u':
                System.out.println("VOWEL");    break;
            default:
                System.out.println("Consonant");    break;

        }
    */

//        Question No Sixteen, get number and find its Factorial
        /*
        System.out.println("Question No Sixteen, find the Factorial of a given Number");
        System.out.println("Enter the Number and the Program will show you its Factorial");
        long fact=1L,num;
        System.out.println("Enter the Number");
        num=enter.nextInt();
        if(num>0)
        {
            for(int i=0; i<num; num--)
                fact*=num;
            System.out.println(fact);
        }
        else
        {
            System.out.println("Please Enter a valid input");
//            put a goto Statement must
        }
        */

//        Question No Seventeen, check whether user have entered character, is alphabet or not
     /*
        System.out.println("Question  No Seventeen, entered character is alphabet or not");
        System.out.println("Enter the Character");
        char ch_ar=enter.next().charAt(0);
        if(ch_ar>='a' && ch_ar<='z')
        {   System.out.printf("You Have Entered Alphabet character %s and it is in Small abc \n ",ch_ar);       }
        else if(ch_ar>='A' && ch_ar<='Z')
        {   System.out.printf("You have Entered Alphabet character %s and it is in CAPITAL ABC \n",ch_ar);      }
        else if(ch_ar>='!' && ch_ar<='/')
        {   System.out.printf("Your Entered Character %s is a Special Character \n",ch_ar);                     }
        else if(ch_ar>=':' && ch_ar<='@')
        {   System.out.printf("Your Entered Character %s is a Special Character \n",ch_ar);                     }
        else if(ch_ar>='[' && ch_ar<='`' )
        {   System.out.printf("Your Entered Character %s is a Special Character \n",ch_ar);                     }
        else if(ch_ar>='{' && ch_ar<='~')
        {       System.out.printf("Your Entered Character %s is a Special Character \n",ch_ar);                 }
        else if (ch_ar >= '0' && ch_ar <= '9')
        {   System.out.printf("Your Entered Character %s is a Decimal Number \n",ch_ar);                        }
        else
        {       System.out.println("Your Entered Character is not alphabet or Special Character");              }

      */

//    Question No Eighteen, get basic salary and print the Gross Salaray
       /*
        System.out.println("Question No Eighteen, Calculate basic and gross salary");
        System.out.println("Enter Your Basic Salary and the Program will prompt you the Gross Salary");
        double basic_sal,hra,hra_1,da,da_1,gross,gross_1;
        basic_sal=enter.nextDouble();
        hra=basic_sal/100*20;       da=basic_sal/100*80;            gross=hra+basic_sal;
        hra_1=basic_sal/100*25;       da_1=basic_sal/100*90;      gross_1=hra+basic_sal;
        if(basic_sal>0 && basic_sal<= 10000)
        {
            System.out.printf("Your Basic Salary is %.1f \n",basic_sal);
            System.out.printf("HRA on it is %.1f \n",hra);
            System.out.printf("DA on it is %.1f \n",da);
            System.out.printf("Gross Salary is %.1f \n",gross);
        }
        else if(basic_sal>10000 && basic_sal<=20000)
    {
        System.out.printf("Your Basic Salary is %.1f \n",basic_sal);
        System.out.printf("HRA on it is %.1f \n ",hra_1);
        System.out.printf("DA on it is %.1f \n", da_1);
        System.out.printf("Gross Salary is %.1f \n",gross_1);
    }
        else
    {   System.out.println("Your Entered Salary is not Processable");       }
    */

//    Question No Nineteen, Enter the Square feet and prompt the Acres
       /*
        System.out.println("Question No Nineteen, Enter Square and See the Acres");
        System.out.println("Enter the Square Feet");
        double  feet,acre;
        feet=enter.nextDouble();
        acre=feet/43560;
        System.out.printf("Your Land is %.3f Acres ",acre);
    */
//        Question No Twenty, Distance and Time
        System.out.println("Question No twenty");
        System.out.println("Distance and Time ");
        System.out.println("A car is travelling at 70 miles per hour");
        System.out.printf("The distance car will travel in 6 hours is %d \n",70*6);
        System.out.printf("The distance car will travel in 15 hours is %d \n",70*15);
        System.out.printf("The distance car will travel in 10 hours is %d \n",70*10);


    }
}

