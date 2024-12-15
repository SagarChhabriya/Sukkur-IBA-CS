### One-Way ANOVA (Analysis of Variance)

One-way ANOVA is a statistical test used to determine if there are significant differences between the means of three or more independent groups. It is called "one-way" because it tests for differences along one factor (independent variable). The factor has different levels (e.g., treatment groups, categories), and we are interested in seeing if the group means are different.

#### **Assumptions of One-Way ANOVA:**
1. **Independence**: The samples from each group are independent of each other.
2. **Normality**: The data within each group should be approximately normally distributed.
3. **Homogeneity of Variance (Homoscedasticity)**: The variances of the groups should be approximately equal.

### **Hypotheses in One-Way ANOVA:**
- **Null Hypothesis (H₀)**: All group means are equal.
  - $H_0: \mu_1 = \mu_2 = \mu_3 = \dots = \mu_k$
  
- **Alternative Hypothesis (H₁)**: At least one group mean is different.
  - $H_1: \text{At least one of the } \mu \text{ is different}$

Where:
- $\mu_1, \mu_2, \dots, \mu_k$ are the means of the $k$ groups.

### **Steps in Performing One-Way ANOVA:**

#### **1. Calculate the Mean of Each Group:**
For each group, compute the mean.

$$
\bar{Y}_i = \frac{\sum Y_i}{n_i}
$$

Where:
- $\bar{Y}_i$ is the mean of the $i$-th group.
- $n_i$ is the number of observations in group $i$.
- $Y_i$ are the individual data points in group $i$.

#### **2. Calculate the Overall Mean (Grand Mean):**
This is the mean of all the data points across all groups combined.

$\bar{Y}_{\text{overall}} = \frac{\sum_{i=1}^k \sum_{j=1}^{n_i} Y_{ij}}{N}$


Where:
- $N$ is the total number of observations in all groups combined.

#### **3. Calculate the Sum of Squares:**
- **Total Sum of Squares (SST)**: The total variation in the data.

$$
SST = \sum_{i=1}^k \sum_{j=1}^{n_i} (Y_{ij} - \bar{Y}_{\text{overall}})^2
$$

  This measures how much each observation deviates from the overall mean.

- **Sum of Squares Between Groups (SSB)**: Variation due to the differences between group means.

$$
SSB = \sum_{i=1}^k n_i (\bar{Y}_i - \bar{Y}_{\text{overall}})^2
$$

  This measures how much each group mean deviates from the overall mean.

- **Sum of Squares Within Groups (SSW)**: Variation within each group.

$$
SSW = \sum_{i=1}^k \sum_{j=1}^{n_i} (Y_{ij} - \bar{Y}_i)^2
$$

  This measures how much each data point deviates from its respective group mean.

#### **4. Calculate the Degrees of Freedom:**
- **Between Groups Degrees of Freedom (df_between)**:

$$
df_{\text{between}} = k - 1
$$

  Where $k$ is the number of groups.
  
- **Within Groups Degrees of Freedom (df_within)**:

$$
df_{\text{within}} = N - k
$$

  Where $N$ is the total number of observations.

#### **5. Calculate the Mean Squares:**
- **Mean Square Between Groups (MSB)**:

$$
MSB = \frac{SSB}{df_{\text{between}}}
$$
  
- **Mean Square Within Groups (MSW)**:

$$
MSW = \frac{SSW}{df_{\text{within}}}
$$

#### **6. Calculate the F-Statistic:**
The F-statistic is the ratio of the variation between groups to the variation within groups.

$$
F = \frac{MSB}{MSW}
$$

This value follows an F-distribution with $df_{\text{between}}$ and $df_{\text{within}}$ degrees of freedom.

#### **7. Compare the F-Statistic to the Critical Value:**
- **Decision Rule**: If the calculated F-statistic is greater than the critical value from the F-distribution table (for a chosen significance level $\alpha$, usually 0.05), reject the null hypothesis $H_0$.
- **If $F > F_{\text{critical}}$**: Reject $H_0$ (there is a significant difference between the means).
- **If $F \leq F_{\text{critical}}$**: Fail to reject $H_0$ (there is no significant difference between the means).

#### **8. Conclusion:**
Based on the F-statistic and the p-value (calculated from the F-distribution), you make a conclusion:
- If the p-value is less than $\alpha$, you reject the null hypothesis, indicating that at least one group mean is different.
- If the p-value is greater than $\alpha$, you fail to reject the null hypothesis, suggesting no significant difference between the group means.

### **Example:**
Let's say we want to test if the mean exam scores of three different teaching methods (Group 1, Group 2, and Group 3) are significantly different.

**Data:**

| Group | Scores  |
|-------|---------|
| 1     | 75, 80, 85, 90 |
| 2     | 70, 75, 80, 85 |
| 3     | 60, 65, 70, 75 |

1. **Group Means:**
   - Group 1 mean: $\bar{Y}_1 = \frac{75 + 80 + 85 + 90}{4} = 82.5$
   - Group 2 mean: $\bar{Y}_2 = \frac{70 + 75 + 80 + 85}{4} = 77.5$
   - Group 3 mean: $\bar{Y}_3 = \frac{60 + 65 + 70 + 75}{4} = 70$

2. **Overall Mean:**
   - Overall mean: $\bar{Y}_{\text{overall}} = \frac{(75+80+85+90) + (70+75+80+85) + (60+65+70+75)}{12} = 76.25$

3. **Sum of Squares (SS):**
   - Compute SST, SSB, and SSW using the formulas above.

4. **Degrees of Freedom (df):**
   - $df_{\text{between}} = 3 - 1 = 2$
   - $df_{\text{within}} = 12 - 3 = 9$

5. **Mean Squares:**
   - Calculate MSB and MSW.

6. **F-Statistic:**
   - Calculate $F = \frac{MSB}{MSW}$.

7. **Decision:**
   - Compare the F-statistic with the critical F-value or use the p-value to make a decision.

---

### **Summary of Key Formulas:**
- **Null Hypothesis (H₀)**: $\mu_1 = \mu_2 = \dots = \mu_k$
- **SSB (Between groups)**: $SSB = \sum_{i=1}^k n_i (\bar{Y}_i - \bar{Y}_{\text{overall}})^2$
- **SSW (Within groups)**: $SSW = \sum_{i=1}^k \sum_{j=1}^{n_i} (Y_{ij} - \bar{Y}_i)^2$
- **F-statistic**: $F = \frac{MSB}{MSW}$

