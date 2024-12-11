## Table of Contents
1. [What exactly is a test statistic?](#what-exactly-is-a-test-statistic)
2. [Types of test statistics](#types-of-test-statistics)
3. [Interpreting test statistics](#interpreting-test-statistics)
4. [Reporting test statistics](#reporting-test-statistics)

---

## Test statistics | Definition, Interpretation, and Examples

- The test statistic is a number calculated from a statistical test of a hypothesis. It shows how closely your observed data match the distribution expected under the null hypothesis of that statistical test.

- The test statistic is used to calculate the p-value of your results, helping to decide whether to reject your null hypothesis.

A **test statistic** is like a score that tells you how much your data (like test results or measurements) matches what you would expect if nothing special is happening (this is called the **null hypothesis**).

### Example 1: Checking if a Dice is Fair
Imagine you're rolling a dice and you expect each number (1-6) to show up equally. If you roll the dice many times, the **test statistic** helps you figure out if the dice is acting fairly (like showing all numbers equally) or if it's broken and showing some numbers more than others.

### Example 2: Checking if a Class’s Average Height is 5.5 Feet
If you think that the average height of students in a class is 5.5 feet, you can measure a few students and compare their average height to 5.5 feet. The **test statistic** will tell you if the heights you measured are close to 5.5 feet or if something unusual is happening, like the class being taller or shorter than expected.

`In simple terms, a test statistic helps you decide if the results you see are just random or if something real is going on!`

## What exactly is a test statistic?

A test statistic describes how closely the distribution of your data matches the distribution predicted under the null hypothesis of the statistical test you are using.

The **distribution of data** is how often each observation occurs, and it can be described by its **central tendency** and the **variation** around that central tendency. Different statistical tests predict different types of distributions, so it’s important to choose the right statistical test for your hypothesis.

### Test Statistic

The **test statistic** summarizes your observed data into a single number using the central tendency, variation, sample size, and number of predictor variables in your statistical model.

Generally, the test statistic is calculated as the **pattern in your data** (i.e., the correlation between variables or difference between groups) divided by the **variance in the data** (i.e., the standard deviation).

### Example-1: **T-test for Comparing Two Groups**
**Scenario**: Imagine you're testing whether boys and girls in a school have the same average height.

1. **Data**: You collect the heights of 50 boys and 50 girls.
2. **Hypothesis**: You think the average height of boys and girls is the same (null hypothesis). The alternative hypothesis is that they are different.
3. **Test Statistic**: The test statistic is calculated by finding the difference between the average heights of boys and girls, and then dividing it by the spread (variance) of the heights in both groups. This helps you see if the difference you see is large enough compared to the natural variation in the data.
4. **Result**: If the test statistic is large, it suggests a big difference between the groups, meaning you might reject the null hypothesis and conclude that boys and girls have different average heights. If it's small, you don't have enough evidence to reject the null hypothesis.

In this example, the test statistic summarizes the data by considering the difference between observed values and expected values, adjusted for the variation in the data. The larger the test statistic, the more likely it is that something significant is happening.

## Types of Test Statistics

Below is a summary of the most common test statistics, their hypotheses, and the types of statistical tests that use them.

Different statistical tests will have slightly different ways of calculating these test statistics, but the underlying hypotheses and interpretations of the test statistic stay the same.

| **Test Statistic** | **Null and Alternative Hypotheses**                                                                 | **Statistical Tests that Use It**                                      |
|--------------------|---------------------------------------------------------------------------------------------------|------------------------------------------------------------------------|
| **t value**        | Null: The means of two groups are equal <br> Alternative: The means of two groups are not equal     | T-test <br> Regression tests                                           |
| **z value**        | Null: The means of two groups are equal <br> Alternative: The means of two groups are not equal    | Z-test                                                                |
| **F value**        | Null: The variation among two or more groups is greater than or equal to the variation between the groups <br> Alternative: The variation among two or more groups is smaller than the variation between the groups | ANOVA <br> ANCOVA <br> MANOVA                                          |
| **X² (Chi-squared) value** | Null: Two samples are independent <br> Alternative: Two samples are not independent (i.e., they are correlated) | Chi-squared test <br> Non-parametric correlation tests                |

In practice, you will almost always calculate your test statistic using a statistical program (R, Python, SPSS, Excel, etc.), which will also calculate the p-value of the test statistic. However, formulas to calculate these statistics by hand can be found online.

---

### **Example 1: Coin Flip (Is the Coin Fair?)**

**Scenario**: You flip a coin 100 times and get 60 heads and 40 tails. You want to test if the coin is fair. The **null hypothesis (H₀)** is that the coin is fair, meaning the expected result is 50 heads and 50 tails.

1. **Observed Data**:  
   - Heads = 60  
   - Tails = 40

2. **Expected Values**:  
   If the coin is fair, you would expect 50 heads and 50 tails out of 100 flips.

3. **Test Statistic**:  
   To test the fairness, you calculate a **z-score** (test statistic) which shows how far the observed result (60 heads) is from the expected value (50 heads). Here's how you calculate it:

$$
\text{z} = \frac{(\text{Observed heads} - \text{Expected heads})}{\sqrt{\frac{p(1 - p)}{n}}}
$$
   
   Where:
   - $p = 0.5$ (the expected probability of heads),
   - $n = 100$ (the number of flips),
   - **Observed heads** = 60, **Expected heads** = 50.
   
   Plugging in the values:

$$
\text{z} = \frac{60 - 50}{\sqrt{\frac{0.5(1 - 0.5)}{100}}} = \frac{10}{\sqrt{\frac{0.25}{100}}} = \frac{10}{0.05} = 200
$$

4. **p-value**:  
   With a z-value of **200**, you would look up the corresponding p-value from a **z-table**. The p-value for such a high z-value is extremely close to **0**.

5. **Conclusion**:  
   If you set a significance level (alpha) of 0.05, the p-value is **far less** than 0.05, so you **reject the null hypothesis**. This suggests the coin is **likely not fair** because the result is highly unlikely to have happened by chance.

---

### **Example 2: Plant Growth with Fertilizer**

**Scenario**: You test whether a special fertilizer helps plants grow faster. You have 10 plants with fertilizer and 10 plants without fertilizer. You measure their growth in centimeters after 4 weeks.

- **With Fertilizer**: Average growth = 18 cm
- **Without Fertilizer**: Average growth = 14 cm

You want to test if the fertilizer really helps.

1. **Observed Data**:  
   - Average growth with fertilizer = 18 cm  
   - Average growth without fertilizer = 14 cm  
   - Sample size for both groups = 10 plants each

2. **Null Hypothesis (H₀)**:  
   There is **no difference** in growth between plants with and without fertilizer (mean difference = 0).

3. **Test Statistic**:  
   You perform a **t-test** to compare the means of the two groups. Let’s assume the **pooled standard deviation** is 3 cm.

   The formula for the t-test statistic is:

$$
t = \frac{(\bar{X}_1 - \bar{X}_2)}{\sqrt{ \frac{s^2}{n_1} + \frac{s^2}{n_2}}}
$$
   
   Where:
   - $\bar{X}_1 = 18$, $\bar{X}_2 = 14$ (mean growths),
   - $s = 3$ (pooled standard deviation),
   - $n_1 = n_2 = 10$ (sample sizes).

   Plugging in the numbers:

$$
t = \frac{18 - 14}{\sqrt{ \frac{3^2}{10} + \frac{3^2}{10}}} = \frac{4}{\sqrt{\frac{9}{10} + \frac{9}{10}}} = \frac{4}{\sqrt{1.8}} = \frac{4}{1.34} \approx 2.98
$$

4. **p-value**:  
   From the **t-distribution table** (with 18 degrees of freedom, because $df = n_1 + n_2 - 2$), the p-value for a t-value of 2.98 is about **0.008**.

5. **Conclusion**:  
   Since the p-value (0.008) is **less** than 0.05, you **reject the null hypothesis**. This suggests that the fertilizer **did** have a significant effect on plant growth.

---

### **Example 3: Exam Scores for Two Teaching Methods**

**Scenario**: You want to compare the exam scores of two classes: one taught using traditional methods and one using new teaching techniques.

- **Class 1 (Traditional Method)**: Average score = 75, standard deviation = 10
- **Class 2 (New Method)**: Average score = 82, standard deviation = 8
- Sample size for both classes = 30 students

1. **Observed Data**:  
   - Traditional Method: Average score = 75  
   - New Method: Average score = 82  
   - Standard deviations = 10 and 8  
   - Sample sizes = 30 students each

2. **Null Hypothesis (H₀)**:  
   There is **no difference** in the average exam scores between the two classes (mean difference = 0).

3. **Test Statistic**:  
   You perform a **t-test** for two independent samples. The formula is:

$$
t = \frac{(\bar{X}_1 - \bar{X}_2)}{\sqrt{\frac{s_1^2}{n_1} + \frac{s_2^2}{n_2}}}
$$
   
   Where:
   - $\bar{X}_1 = 75$, $\bar{X}_2 = 82$,
   - $s_1 = 10$, $s_2 = 8$,
   - $n_1 = n_2 = 30$.

   Plugging in the numbers:

$$
t = \frac{75 - 82}{\sqrt{\frac{10^2}{30} + \frac{8^2}{30}}} = \frac{-7}{\sqrt{\frac{100}{30} + \frac{64}{30}}} = \frac{-7}{\sqrt{5.47}} = \frac{-7}{2.33} \approx -3.00
$$

4. **p-value**:  
   For a t-value of **-3.00** with **58 degrees of freedom** (since $df = n_1 + n_2 - 2$), the p-value is about **0.004**.

5. **Conclusion**:  
   Since the p-value (0.004) is **less** than 0.05, you **reject the null hypothesis**. This suggests that the new teaching method had a significant effect on exam scores.

---


### Summary of Results:
1. **Coin flip**: The p-value is 0.045, so you reject the null hypothesis and conclude the coin is likely not fair.
2. **Plant growth**: The p-value is 0.008, so you reject the null hypothesis and conclude the fertilizer has an effect.
3. **Exam scores**: The p-value is 0.003, so you reject the null hypothesis and conclude the new teaching method improves scores.

In all three cases, the **p-value** helps you decide if the observed differences are statistically significant or could have occurred by chance.

---

## Interpreting Test Statistics

Test statistics help to quantify the difference between observed data and what we expect under the null hypothesis. Larger values of the test statistic typically indicate that the difference between observed and expected values is more extreme, making it more likely to reject the null hypothesis.

---




## Reporting Test Statistics

Test statistics can be reported in the **results section** of your research paper along with the sample size, p-value of the test, and any characteristics of your data that will help put these results into context.

Whether or not you need to report the test statistic depends on the type of test you are reporting.

| **Type of Test**                   | **Which Statistics to Report**                                                     |
|-------------------------------------|-----------------------------------------------------------------------------------|
| **Correlation and Regression Tests** | - Correlation coefficient or regression coefficient for each predictor variable <br> - p-value for each predictor               |
| **Tests of Difference Between Groups** | - Test statistic <br> - Degrees of freedom <br> - p-value for the test statistic                                       |

### Example:
- **Rep**: In a study testing the correlation between temperature and flowering date, the correlation coefficient and the p-value would be reported for the temperature variable as the predictor.
