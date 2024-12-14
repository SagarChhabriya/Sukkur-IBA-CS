## T-test

 A t-test is a statistical test used to determine if there is a significant difference between the means of two groups or a group and a known value. It's commonly used when the sample size is small and the population standard deviation is unknown.

The t-test formula helps us to compare the average values of two data sets and determine if they belong to the same population or are they different. The t-score is compared with the critical value obtained from the t-table. The large t-score indicates that the groups are different and a small t-score indicates that the groups are similar.


The t-test formula is applied to the sample population. The t-test formula depends on the mean, variance, and standard deviation of the data being compared. There are 3 types of t-tests that could be performed on the n number of samples collected.

### Types of t-tests:
- `One-Sample t-test`: Compares the sample mean to a known population mean.
- `Independent Two-Sample t-test`: Compares the means of two independent groups.
- `Paired Sample t-test`: Compares means from the same group at different times or under different conditions.


The critical value is obtained from the t-table looking for the degree of freedom(df = n-1) and the corresponding α value(usually 0.05 or 0.1). If the t-test obtained statistically > CV then the initial hypothesis is wrong and we conclude that the results are significantly different.




# One-Sample t-Test Formula

The one-sample t-test is used to determine if the sample mean is significantly different from a known or hypothesized population mean.

The formula for the one-sample t-test is:

$$
t = \frac{\bar{X} - \mu}{\frac{s}{\sqrt{n}}}
$$

Where:
- $t$ = t-statistic
- $\bar{X}$ = sample mean
- $\mu$ = population mean (or hypothesized value)
- $s$ = sample standard deviation
- $n$ = sample size

### Degrees of Freedom:
The degrees of freedom (df) for the one-sample t-test is calculated as:

$$
df = n - 1
$$

## One-Sample t-Test Steps

### 1. State the Hypotheses:
- **Null Hypothesis (H₀):** $\mu = \mu_0$ (the sample mean is equal to the population mean).
  
- **Alternative Hypothesis (Hₐ):** $\mu \neq \mu_0$ (the sample mean is not equal to the population mean).

### 2. Calculate the t-statistic using the formula:

$$
t = \frac{\bar{X} - \mu}{\frac{s}{\sqrt{n}}}
$$

Where:
- $\bar{X}$ = sample mean
- $\mu$ = population mean (or hypothesized value)
- $s$ = sample standard deviation
- $n$ = sample size

### 3. Find the Degrees of Freedom (df): $df = n - 1$

### 4. Determine the Critical Value:
Use the t-distribution table to find the critical value for the desired significance level (e.g., 0.05) and degrees of freedom.

### 5. Compare the Calculated t-statistic to the Critical Value:
- If $|t|$ is greater than the critical value, **reject the null hypothesis**.
- If $|t|$ is less than or equal to the critical value, **do not reject the null hypothesis**.


# 2. Independent Two-Sample t-test

This test compares the means of two independent groups.

### Formula:

$$
t = \frac{\bar{x}_1 - \bar{x}_2}{\sqrt{\frac{s_1^2}{n_1} + \frac{s_2^2}{n_2}}}
$$

Where:
- $\bar{x}_1$ and $\bar{x}_2$ = Sample means of group 1 and group 2
- $s_1^2$ and $s_2^2$ = Sample variances of group 1 and group 2
- $n_1$ and $n_2$ = Sample sizes of group 1 and group 2

### Steps:
1. **State the Hypotheses**:
   - **Null Hypothesis (H₀)**:  $\mu_1 = \mu_2$ (the means are equal).
   - **Alternative Hypothesis (Hₐ)**: $\mu_1 \neq \mu_2$ (the means are not equal).
   
2. **Calculate the t-statistic** using the formula above.

3. **Find the degrees of freedom**:

$$
df = \frac{\left( \frac{s_1^2}{n_1} \right)^2}{\left( \frac{s_1^2}{n_1} \right)^2 / (n_1 - 1) + \left( \frac{s_2^2}{n_2} \right)^2 / (n_2 - 1)}
$$

   Alternatively, you can use a simplified approximation for $df$ if the sample sizes are equal.

4. **Determine the critical value** from the t-distribution table.

5. **Compare the calculated t-statistic to the critical value**:
   - If the absolute value of the t-statistic is greater than the critical value, reject the null hypothesis.
   - Otherwise, fail to reject the null hypothesis.

---

# 3. Paired Sample t-test

This test compares the means of two related groups, for example, measuring the same group before and after a treatment.

### Formula:

$$
t = \frac{\bar{d}}{\frac{s_d}{\sqrt{n}}}
$$

Where:
- $\bar{d}$ = Mean of the differences between paired observations
- $s_d$ = Standard deviation of the differences
- $n$ = Number of pairs

### Steps:
1. **State the Hypotheses**:
   - **Null Hypothesis (H₀)**: $\mu_d = 0$ (the mean difference is zero).
   - **Alternative Hypothesis (Hₐ)**: $\mu_d \neq 0$ (the mean difference is not zero).

2. **Calculate the t-statistic** using the formula above.

3. **Find the degrees of freedom**: $df = n - 1$

4. **Determine the critical value** from the t-distribution table.

5. **Compare the t-statistic to the critical value** to make a decision.

---

# Example: One-Sample t-test

Let's say you're using a one-sample t-test to check if the average height of a class is different from 5.5 feet. You have the following data for the heights of 10 students: 5.3, 5.7, 5.5, 5.8, 5.4, 5.6, 5.5, 5.9, 5.3, 5.6.

### Hypotheses:
- **H₀**: The average height = 5.5 feet.
- **Hₐ**: The average height ≠ 5.5 feet.

### Calculate the sample mean and standard deviation:
- $\bar{x} = \frac{5.3 + 5.7 + \dots + 5.6}{10} = 5.55$
- $s = 0.20$

### t-statistic:

$$
t = \frac{5.55 - 5.5}{\frac{0.20}{\sqrt{10}}} = 0.79
$$

### Degrees of freedom:  $df = 10 - 1 = 9$

Find the critical t-value from the t-table for $df = 9$ at a 0.05 significance level (two-tailed). The critical value is approximately ±2.262.

### Compare:
Since $0.79 < 2.262$, we **fail to reject the null hypothesis**.

---

# Key Points to Remember:
- The t-test is used when dealing with small sample sizes and unknown population standard deviations.
- Significance level ($\alpha$): Usually set at 0.05 (5% chance of making a Type I error).
- Always check whether the assumptions of normality and independence are met before performing the t-test.

Let me know if you need help with specific examples or have any questions!
