# Mean, Variance, and Standard Deviation of Population and Sample Distribution

This document provides a comprehensive solution for calculating the **mean**, **variance**, and **standard deviation** of both the **population** and the **sample distribution** (sample size = 2, with replacement) for the population \( \{0, 1, 2, 3\} \).

## Population \( \{0, 1, 2, 3\} \)

### 1. Mean of the Population

The **mean** (or expected value) of the population is the average of all the values in the population:

\[
E(X) = \frac{1}{N} \sum_{i=1}^{N} x_i
\]

For the population \( \{0, 1, 2, 3\} \):

\[
E(X) = \frac{1}{4}(0 + 1 + 2 + 3) = \frac{6}{4} = 1.5
\]

So, the **mean of the population** is **1.5**.

---

### 2. Variance of the Population

The **variance** of a population is calculated as the average of the squared deviations from the mean:

\[
\text{Var}(X) = \frac{1}{N} \sum_{i=1}^{N} (x_i - E(X))^2
\]

#### Squared deviations from the mean \( 1.5 \):

- \( (0 - 1.5)^2 = 2.25 \)
- \( (1 - 1.5)^2 = 0.25 \)
- \( (2 - 1.5)^2 = 0.25 \)
- \( (3 - 1.5)^2 = 2.25 \)

Sum of squared deviations:

\[
2.25 + 0.25 + 0.25 + 2.25 = 5
\]

Finally, divide by the number of population values \( N = 4 \):

\[
\text{Var}(X) = \frac{5}{4} = 1.25
\]

So, the **variance of the population** is **1.25**.

---

### 3. Standard Deviation of the Population

The **standard deviation** is the square root of the variance:

\[
\text{SD}(X) = \sqrt{\text{Var}(X)} = \sqrt{1.25} \approx 1.118
\]

So, the **standard deviation of the population** is approximately **1.118**.

---

## Sample Distribution (Sample Size = 2, With Replacement)

### 1. List of Samples and Their Means

We are drawing **with replacement** from the population \( \{0, 1, 2, 3\} \). The total number of possible samples of size 2 is \( 4 \times 4 = 16 \). Here are all the samples and their corresponding means:

| Sample   | Mean  |
|----------|-------|
| (0, 0)   | 0     |
| (0, 1)   | 0.5   |
| (0, 2)   | 1     |
| (0, 3)   | 1.5   |
| (1, 0)   | 0.5   |
| (1, 1)   | 1     |
| (1, 2)   | 1.5   |
| (1, 3)   | 2     |
| (2, 0)   | 1     |
| (2, 1)   | 1.5   |
| (2, 2)   | 2     |
| (2, 3)   | 2.5   |
| (3, 0)   | 1.5   |
| (3, 1)   | 2     |
| (3, 2)   | 2.5   |
| (3, 3)   | 3     |

---

### 2. Mean of the Sample Distribution

The **mean** (expected value) of the sample distribution is the weighted average of all sample means, where each sample has an equal probability \( \frac{1}{16} \). 

Sum of all sample means:

\[
0 + 0.5 + 1 + 1.5 + 0.5 + 1 + 1.5 + 2 + 1 + 1.5 + 2 + 2.5 + 1.5 + 2 + 2.5 + 3 = 24
\]

Now, divide by the number of samples (16):

\[
E(X_{\text{sample}}) = \frac{24}{16} = 1.5
\]

So, the **mean of the sample distribution** is **1.5**.

---

### 3. Variance of the Sample Distribution

To calculate the **variance** of the sample distribution, we first need to find the **expected value of the squared sample means** \( E(X_{\text{sample}}^2) \).

First, square each sample mean:

| Sample Mean | Squared Mean |
|-------------|--------------|
| 0           | 0            |
| 0.5         | 0.25         |
| 1           | 1            |
| 1.5         | 2.25         |
| 0.5         | 0.25         |
| 1           | 1            |
| 1.5         | 2.25         |
| 2           | 4            |
| 1           | 1            |
| 1.5         | 2.25         |
| 2           | 4            |
| 2.5         | 6.25         |
| 1.5         | 2.25         |
| 2           | 4            |
| 2.5         | 6.25         |
| 3           | 9            |

Sum of the squared sample means:

\[
0 + 0.25 + 1 + 2.25 + 0.25 + 1 + 2.25 + 4 + 1 + 2.25 + 4 + 6.25 + 2.25 + 4 + 6.25 + 9 = 46
\]

Now, divide by the number of samples (16):

\[
E(X_{\text{sample}}^2) = \frac{46}{16} = 2.875
\]

Finally, calculate the variance:

\[
\text{Var}(X_{\text{sample}}) = E(X_{\text{sample}}^2) - (E(X_{\text{sample}}))^2
\]

Since \( E(X_{\text{sample}}) = 1.5 \):

\[
(E(X_{\text{sample}}))^2 = (1.5)^2 = 2.25
\]

\[
\text{Var}(X_{\text{sample}}) = 2.875 - 2.25 = 0.625
\]

So, the **variance of the sample distribution** is **0.625**.

---

### 4. Standard Deviation of the Sample Distribution

The **standard deviation** is the square root of the variance:

\[
\text{SD}(X_{\text{sample}}) = \sqrt{0.625} \approx 0.791
\]

So, the **standard deviation of the sample distribution** is approximately **0.791**.

---

## Final Summary

### For the **Population** \( \{0, 1, 2, 3\} \):

| **Statistic**                | **Formula / Calculation**                                   | **Result** |
|------------------------------|------------------------------------------------------------|------------|
| **Mean (Expected Value)**     | \( E(X) = \frac{1}{4}(0 + 1 + 2 + 3) = 1.5 \)              | 1.5        |
| **Variance**                  | \( \text{Var}(X) = \frac{5}{4} = 1.25 \)                   | 1.25       |
| **Standard Deviation**        | \( \text{SD}(X) = \sqrt{1.25} \approx 1.118 \)             | 1.118      |

---

### For the **Sample Distribution** (Sample Size = 2, With Replacement):

| **Statistic**                | **Formula / Calculation**                                   | **Result** |
|------------------------------|------------------------------------------------------------|------------|
| **Mean (Expected Value)**     | \( E(X_{\text{sample}}) = \frac{24}{16} = 1.5 \)           | 1.5        |
| **Variance**                  | \( \text{Var}(X_{\text{sample}}) = 0.625 \)                | 0.625      |
| **Standard Deviation**        | \( \text{SD}(X_{\text{sample}}) \approx 0.791 \)            | 0.791      |

---

### Recap:
- **Population Mean**: 1.5
- **Population Variance**: 1.25
- **Population Standard Deviation**: 1.118

- **Sample Mean**: 1.5
- **Sample Variance**: 0.625
- **Sample Standard Deviation**: 0.791

Let me know if you need any further clarifications or additional calculations!

