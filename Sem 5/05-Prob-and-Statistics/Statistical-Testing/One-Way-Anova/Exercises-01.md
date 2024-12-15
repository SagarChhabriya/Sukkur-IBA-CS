
### **Easy Questions:**

1. **Question 1:**  
   A researcher wants to know if three different fertilizers affect plant growth differently. The data shows the growth of plants under three different fertilizers. What statistical test would you use to determine if there are any significant differences in plant growth between the three fertilizers?

   **Data:**

   | Fertilizer Type | Plant Growth (cm) |
   |-----------------|-------------------|
   | A               | 15                |
   | A               | 16                |
   | A               | 14                |
   | B               | 20                |
   | B               | 21                |
   | B               | 22                |
   | C               | 18                |
   | C               | 19                |
   | C               | 17                |

2. **Question 2:**  
   In a One-Way ANOVA test, what does the null hypothesis state?

3. **Question 3:**  
   If you have 4 groups in a One-Way ANOVA, how many degrees of freedom would there be for the "Between Groups" variation?

4. **Question 4:**  
   What is the meaning of the F-statistic in One-Way ANOVA?

5. **Question 5:**  
   What is the general purpose of conducting a One-Way ANOVA?

---

### **Medium Questions:**

6. **Question 6:**  
   In a One-Way ANOVA, if the F-statistic calculated is 4.5 and the critical F-value at a significance level of 0.05 is 3.9, what is your conclusion regarding the null hypothesis?

7. **Question 7:**  
   A study was conducted on the effect of three types of teaching methods on student performance. The null hypothesis for the One-Way ANOVA is that the means of all three groups are equal. If the p-value from the One-Way ANOVA is 0.03, what do you conclude about the means of the teaching methods?

   **Data:**

   | Teaching Method | Test Scores |
   |-----------------|-------------|
   | Method 1        | 75          |
   | Method 1        | 78          |
   | Method 1        | 80          |
   | Method 2        | 85          |
   | Method 2        | 87          |
   | Method 2        | 86          |
   | Method 3        | 90          |
   | Method 3        | 92          |
   | Method 3        | 91          |

8. **Question 8:**  
   A researcher conducted a One-Way ANOVA and found an F-statistic of 1.8 with a corresponding p-value of 0.12. What is the interpretation of the p-value in this case?

9. **Question 9:**  
   What is the purpose of calculating the "Sum of Squares Between Groups (SSB)" in One-Way ANOVA?

10. **Question 10:**  
    You are performing a One-Way ANOVA with 5 groups. You have calculated the Sum of Squares Between Groups (SSB) as 150, and the degrees of freedom for Between Groups (df_between) as 4. What is the Mean Square Between Groups (MSB)?

---

### **Hard Questions:**

11. **Question 11:**  
    A company is comparing the effectiveness of three different diets on weight loss. The One-Way ANOVA results show an F-statistic of 3.5 with 2 degrees of freedom for the numerator and 27 degrees of freedom for the denominator. At a 0.05 significance level, do you reject the null hypothesis?

12. **Question 12:**  
    In a One-Way ANOVA with 6 groups, the Sum of Squares Between Groups (SSB) is 240 and the Sum of Squares Within Groups (SSW) is 180. If there are 36 observations in total, calculate the F-statistic.

    **Data:**

    | Diet Type | Weight Loss (kg) |
    |-----------|------------------|
    | Diet A    | 4.5              |
    | Diet A    | 5.0              |
    | Diet A    | 4.8              |
    | Diet B    | 6.0              |
    | Diet B    | 6.5              |
    | Diet B    | 5.9              |
    | Diet C    | 3.5              |
    | Diet C    | 4.0              |
    | Diet C    | 4.2              |
    | Diet D    | 5.2              |
    | Diet D    | 5.0              |
    | Diet D    | 5.4              |
    | Diet E    | 4.8              |
    | Diet E    | 5.1              |
    | Diet E    | 5.0              |
    | Diet F    | 6.2              |
    | Diet F    | 6.0              |
    | Diet F    | 5.8              |

13. **Question 13:**  
    In a One-Way ANOVA, if the sum of squares for error (SSE) is 120 and the sum of squares total (SST) is 200, calculate the coefficient of determination (R²) for this ANOVA.

14. **Question 14:**  
    A One-Way ANOVA was performed on a dataset with 4 groups. The following sums of squares were obtained: SSB = 80, SSW = 120, and SST = 200. Calculate the Mean Square Between Groups (MSB), Mean Square Within Groups (MSW), and the F-statistic.

15. **Question 15:**  
    After conducting a One-Way ANOVA, you obtain a p-value of 0.06 and a significance level of 0.05. What would be the correct interpretation of the results and the decision regarding the null hypothesis?

---


`Answers to the One-Way ANOVA questions:`

### **Easy Questions:**

1. **Answer 1:**  
   **Statistical Test:** You would use **One-Way ANOVA** to determine if there are significant differences in plant growth among the three fertilizers.

2. **Answer 2:**  
   The null hypothesis in a One-Way ANOVA states that the **means of all groups are equal**. In other words, there is no significant difference between the groups.

3. **Answer 3:**  
   For **4 groups**, the degrees of freedom between groups $\text{df}_{\text{between}}$ is calculated as:

$$
\text{df}_{\text{between}} = k - 1
$$

   where $k$ is the number of groups.
   
   For 4 groups:  $\text{df}_{\text{between}} = 4 - 1 = 3$

5. **Answer 4:**  
   The **F-statistic** in One-Way ANOVA is a ratio of the **Mean Square Between Groups (MSB)** to the **Mean Square Within Groups (MSW)**. It tests if there is a significant difference between the group means. A large F-statistic suggests that at least one group mean is significantly different from the others.

6. **Answer 5:**  
   The general purpose of conducting a **One-Way ANOVA** is to test if there is a statistically significant difference between the means of **three or more groups**.

---

### **Medium Questions:**

6. **Answer 6:**  
   If the F-statistic is **4.5** and the critical F-value at a 0.05 significance level is **3.9**, since the F-statistic is greater than the critical value (4.5 > 3.9), we **reject the null hypothesis** and conclude that there is a significant difference between the group means.

7. **Answer 7:**  
   If the **p-value** is **0.03** and is less than the significance level (0.05), we **reject the null hypothesis**. This means that the means of the teaching methods are significantly different.

8. **Answer 8:**  
   A **p-value of 0.12** indicates that the result is **not statistically significant** at the 0.05 level (since 0.12 > 0.05). Therefore, we **fail to reject the null hypothesis** and conclude that there is no significant difference between the group means.

9. **Answer 9:**  
   The **Sum of Squares Between Groups (SSB)** represents the variation in the dependent variable that is explained by the independent variable (the factor). It measures the variability of the group means around the overall mean.

10. **Answer 10:**  
    The **Mean Square Between Groups (MSB)** is calculated by dividing the **Sum of Squares Between Groups (SSB)** by its degrees of freedom (df_between):
    $\text{MSB} = \frac{\text{SSB}}{\text{df}_{\text{between}}}$
    Given:  
    $\text{MSB} = \frac{150}{4} = 37.5$

---

### **Hard Questions:**

11. **Answer 11:**  
    **F-statistic** = 3.5, **df_between** = 2, **df_within** = 27, and **significance level** = 0.05.  
    At a 0.05 significance level, we compare the calculated F-statistic to the **critical F-value** from an F-distribution table. If the calculated F is greater than the critical F-value, we **reject the null hypothesis**.  
    If the **F-statistic** (3.5) exceeds the **critical value** from the F-distribution table (which is typically around 3.34 for these degrees of freedom), we reject the null hypothesis and conclude that the diets have different effects on weight loss.

12. **Answer 12:**  
    Given:
    - SSB = 240
    - SSW = 180
    - Total observations = 36  
    The F-statistic is calculated as:
      $F = \frac{\text{MSB}}{\text{MSW}}$  
    Where:

$$
\text{MSB} = \frac{\text{SSB}}{\text{df}_{\text{between}}} = \frac{240}{5} = 48
$$  

$$
\text{MSW} = \frac{\text{SSW}}{\text{df}_{\text{within}}} = \frac{180}{30} = 6
$$  

   So the **F-statistic** is:

$$
F = \frac{48}{6} = 8
$$

14. **Answer 13:**  
    The **coefficient of determination (R²)** is calculated as:

$$
R² = 1 - \frac{\text{SSE}}{\text{SST}}
$$  

   Given:
    - SSE = 120
    - SST = 200  
    
$$
R² = 1 - \frac{120}{200} = 1 - 0.6 = 0.4
$$  

   This means that 40% of the variability in the data is explained by the model.

16. **Answer 14:**  
    Given:
    - SSB = 80
    - SSW = 120
    - SST = 200  
    We calculate:
    
$$
\text{MSB} = \frac{SSB}{\text{df}_{\text{between}}} = \frac{80}{3} = 26.67
$$  

$$
\text{MSW} = \frac{SSW}{\text{df}_{\text{within}}} = \frac{120}{9} = 13.33
$$  

   The **F-statistic** is:

$$
    F = \frac{MSB}{MSW} = \frac{26.67}{13.33} = 2.00
$$

18. **Answer 15:**  
    Since the **p-value** of **0.06** is **greater** than the significance level of **0.05**, we **fail to reject the null hypothesis**. This means there is **no significant difference** between the group means.

---

