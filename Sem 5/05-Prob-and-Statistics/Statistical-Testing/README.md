### **T-test**:
- **One-Sample T-test**:
  - Compares the mean of a **single sample** to a known value or population mean.
  - Can be **one-tailed** (testing if the mean is greater or less than the known value) or **two-tailed** (testing if the mean is simply different from the known value).

- **Independent Samples T-test**:
  - Compares the means of **two independent groups** (unpaired).
  - Can be **one-tailed** (testing if one group's mean is greater or less than the other) or **two-tailed** (testing if the two group means are different, without specifying direction).

- **Paired Samples T-test**:
  - Compares the means of the **same group** at two different times or under two different conditions (paired or dependent samples).
  - Can be **one-tailed** (testing a directional difference) or **two-tailed** (testing if there is any difference). 


### **F-test**:
- **Used for comparing variances**, so it requires at least **two groups** (samples) to test. You can compare the **variances** between two groups (two-sample F-test) or more groups (as part of ANOVA).
- **One-sample F-test** is not typically used because F-tests compare **variances between at least two groups**.

### **One-way ANOVA**:
- **Used when comparing means of three or more groups**.
  - If you only have two groups, you would typically use a **t-test** instead.
  - **One-way ANOVA** tests whether there is a **significant difference** in means across three or more groups (or levels of a single factor).




---

### **1. One-Sample T-test**:
The formula for the **one-sample t-test** is:

$$
t = \frac{\bar{X} - \mu_0}{\frac{s}{\sqrt{n}}}
$$

Where:
- $\bar{X}$ = Sample mean
- $\mu_0$ = Population mean (or hypothesized mean)
- $s$ = Sample standard deviation
- $n$ = Sample size


### **2. Independent Two-Sample T-test**:
The formula for the **two-sample t-test** (assuming unequal variances) is:

$$
t = \frac{\bar{X}_1 - \bar{X}_2}{\sqrt{\frac{s_1^2}{n_1} + \frac{s_2^2}{n_2}}}
$$

Where:
- $\bar{X}_1, \bar{X}_2$ = Sample means of the two groups
- $s_1^2, s_2^2$ = Sample variances of the two groups
- $n_1, n_2$ = Sample sizes of the two groups

For equal variances, the formula simplifies to:

$$
t = \frac{\bar{X}_1 - \bar{X}_2}{\sqrt{ \left(\frac{s_1^2}{n_1} + \frac{s_2^2}{n_2}\right)}}
$$

$OR$

$$
t = \frac{\bar{X}_1 - \bar{X}_2}{\sqrt{s_p^2\left(\frac{1}{n_1} + \frac{1}{n_2}\right)}}
$$

Where $s_p^2$ is the pooled sample variance:

$$
s_p^2 = \frac{(n_1 - 1)s_1^2 + (n_2 - 1)s_2^2}{n_1 + n_2 - 2}
$$


### **3. Paired Sample T-test**:
The formula for the **paired t-test** is:

$$
t = \frac{\bar{d}}{s_d / \sqrt{n}}
$$

Where:
- $\bar{d}$ = Mean of the differences between paired observations
- $s_d$ = Standard deviation of the differences
- $n$ = Number of pairs

---

### **4. F-test (Equality of Variances)**:
The formula for the **F-test** for comparing variances is:

$$
F = \frac{s_1^2}{s_2^2}
$$

Where:
- $s_1^2$ = Variance of the first sample
- $s_2^2$ = Variance of the second sample

The **F-test** compares the ratio of two variances to determine if they are significantly different.

---

### **5. One-Way ANOVA**:
The formula for **One-Way ANOVA** is:

$$
F = \frac{\text{Between-group variance (MSB)}}{\text{Within-group variance (MSW)}}
$$

Where:
- **Between-group variance (MSB)** is calculated as:

$$
MSB = \frac{\sum_{i=1}^{k} n_i (\bar{X}_i - \bar{X})^2}{k - 1}
$$

  - $n_i$ = Sample size of the $i$-th group
  - $\bar{X}_i$ = Mean of the $i$-th group
  - $\bar{X}$ = Overall mean of all groups

- **Within-group variance (MSW)** is calculated as:

$$
MSW = \frac{\sum_{i=1}^{k} \sum_{j=1}^{n_i} (X_{ij} - \bar{X}_i)^2}{N - k}
$$

  - $X_{ij}$ = Data point from the $i$-th group
  - $\bar{X}_i$ = Mean of the $i$-th group
  - $N$ = Total number of data points across all groups
  - $k$ = Number of groups

