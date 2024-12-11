1. Mean, Variance, and Standard Deviation of Population and Sample Distribution
2. Mean, Variance, and Standard Deviation of Population and Sample Distribution (Without Replacement)


## 1. Mean, Variance, and Standard Deviation of Population and Sample Distribution

This document provides a comprehensive solution for calculating the **mean**, **variance**, and **standard deviation** of both the **population** and the **sample distribution** (sample size = 2, with replacement) for the population $\{0, 1, 2, 3\}$.

## Population $\{0, 1, 2, 3\}$

### 1. Mean of the Population

The **mean** (or expected value) of the population is the average of all the values in the population:

$$
E(X) = \frac{1}{N} \sum_{i=1}^{N} x_i
$$

For the population $\{0, 1, 2, 3\}$:

$$
E(X) = \frac{1}{4}(0 + 1 + 2 + 3) = \frac{6}{4} = 1.5
$$

So, the **mean of the population** is **1.5**.

---

### 2. Variance of the Population

The **variance** of a population is calculated as the average of the squared deviations from the mean:

$$
\text{Var}(X) = \frac{1}{N} \sum_{i=1}^{N} (x_i - E(X))^2
$$

#### Squared deviations from the mean $1.5$:

- $(0 - 1.5)^2 = 2.25$
- $(1 - 1.5)^2 = 0.25$
- $(2 - 1.5)^2 = 0.25$
- $(3 - 1.5)^2 = 2.25$

Sum of squared deviations:

$$
2.25 + 0.25 + 0.25 + 2.25 = 5
$$

Finally, divide by the number of population values $N = 4$:

$$
\text{Var}(X) = \frac{5}{4} = 1.25
$$

So, the **variance of the population** is **1.25**.

---

### 3. Standard Deviation of the Population

The **standard deviation** is the square root of the variance:

$$
\text{SD}(X) = \sqrt{\text{Var}(X)} = \sqrt{1.25} \approx 1.118
$$

So, the **standard deviation of the population** is approximately **1.118**.

---

## Sample Distribution (Sample Size = 2, With Replacement)

### 1. List of Samples and Their Means

We are drawing **with replacement** from the population $\{0, 1, 2, 3\}$. The total number of possible samples of size 2 is $4 \times 4 = 16$. Here are all the samples and their corresponding means:

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

The **mean** (expected value) of the sample distribution is the weighted average of all sample means, where each sample has an equal probability $\frac{1}{16}$. 

Sum of all sample means:

$$
0 + 0.5 + 1 + 1.5 + 0.5 + 1 + 1.5 + 2 + 1 + 1.5 + 2 + 2.5 + 1.5 + 2 + 2.5 + 3 = 24
$$

Now, divide by the number of samples (16):

$$
E(X_{\text{sample}}) = \frac{24}{16} = 1.5
$$

So, the **mean of the sample distribution** is **1.5**.

---

### 3. Variance of the Sample Distribution

To calculate the **variance** of the sample distribution, we first need to find the **expected value of the squared sample means** $E(X_{\text{sample}}^2)$.

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

$$
0 + 0.25 + 1 + 2.25 + 0.25 + 1 + 2.25 + 4 + 1 + 2.25 + 4 + 6.25 + 2.25 + 4 + 6.25 + 9 = 46
$$

Now, divide by the number of samples (16):

$$
E(X_{\text{sample}}^2) = \frac{46}{16} = 2.875
$$

Finally, calculate the variance:

$$
\text{Var}(X_{\text{sample}}) = E(X_{\text{sample}}^2) - (E(X_{\text{sample}}))^2
$$

Since $ E(X_{\text{sample}}) = 1.5 $:

$$
(E(X_{\text{sample}}))^2 = (1.5)^2 = 2.25
$$

$$
\text{Var}(X_{\text{sample}}) = 2.875 - 2.25 = 0.625
$$

So, the **variance of the sample distribution** is **0.625**.

---

### 4. Standard Deviation of the Sample Distribution

The **standard deviation** is the square root of the variance:

$$
\text{SD}(X_{\text{sample}}) = \sqrt{0.625} \approx 0.791
$$

So, the **standard deviation of the sample distribution** is approximately **0.791**.

---

## Final Summary

### For the **Population** $\{0, 1, 2, 3\}$:

| **Statistic**                | **Formula / Calculation**                                   | **Result** |
|------------------------------|------------------------------------------------------------|------------|
| **Mean (Expected Value)**     | $E(X) = \frac{1}{4}(0 + 1 + 2 + 3) = 1.5$              | 1.5        |
| **Variance**                  | $\text{Var}(X) = \frac{5}{4} = 1.25$                   | 1.25       |
| **Standard Deviation**        | $\text{SD}(X) = \sqrt{1.25} \approx 1.118$             | 1.118      |

---

### For the **Sample Distribution** (Sample Size = 2, With Replacement):

| **Statistic**                | **Formula / Calculation**                                   | **Result** |
|------------------------------|------------------------------------------------------------|------------|
| **Mean (Expected Value)**     | $E(X_{\text{sample}}) = \frac{24}{16} = 1.5$           | 1.5        |
| **Variance**                  | $\text{Var}(X_{\text{sample}}) = 0.625$                | 0.625      |
| **Standard Deviation**        | $\text{SD}(X_{\text{sample}}) \approx 0.791$            | 0.791      |

---

### Summarized:
- **Population Mean**: 1.5
- **Population Variance**: 1.25
- **Population Standard Deviation**: 1.118

- **Sample Mean**: 1.5
- **Sample Variance**: 0.625
- **Sample Standard Deviation**: 0.791




---
## 2. Mean, Variance, and Standard Deviation of Population and Sample Distribution (Without Replacement)

This document provides a comprehensive solution for calculating the **mean**, **variance**, and **standard deviation** of both the **population** and the **sample distribution** (sample size = 2, **without replacement**) for the population $\{0, 1, 2, 3\}$.

## Population $\{0, 1, 2, 3\}$

### 1. Mean of the Population

The **mean** (or expected value) of the population is the average of all the values in the population:

$$
E(X) = \frac{1}{N} \sum_{i=1}^{N} x_i
$$

For the population $\{0, 1, 2, 3\}$:

$$
E(X) = \frac{1}{4}(0 + 1 + 2 + 3) = \frac{6}{4} = 1.5
$$

So, the **mean of the population** is **1.5**.

---

### 2. Variance of the Population

The **variance** of a population is calculated as the average of the squared deviations from the mean:

$$
\text{Var}(X) = \frac{1}{N} \sum_{i=1}^{N} (x_i - E(X))^2
$$

#### Squared deviations from the mean $1.5$:

- $(0 - 1.5)^2 = 2.25$
- $(1 - 1.5)^2 = 0.25$
- $(2 - 1.5)^2 = 0.25$
- $(3 - 1.5)^2 = 2.25$

Sum of squared deviations:

$$
2.25 + 0.25 + 0.25 + 2.25 = 5
$$

Finally, divide by the number of population values $N = 4$:

$$
\text{Var}(X) = \frac{5}{4} = 1.25
$$

So, the **variance of the population** is **1.25**.

---

### 3. Standard Deviation of the Population

The **standard deviation** is the square root of the variance:

$$
\text{SD}(X) = \sqrt{\text{Var}(X)} = \sqrt{1.25} \approx 1.118
$$

So, the **standard deviation of the population** is approximately **1.118**.

---

## Sample Distribution (Sample Size = 2, Without Replacement)

### 1. List of Samples and Their Means

When sampling **without replacement** from the population ${0, 1, 2, 3\}$, the possible samples of size 2 are:

$$
(0, 1), (0, 2), (0, 3), (1, 0), (1, 2), (1, 3), (2, 0), (2, 1), (2, 3), (3, 0), (3, 1), (3, 2)
$$

We now calculate the mean for each of these samples:

| Sample   | Mean  |
|----------|-------|
| (0, 1)   | 0.5   |
| (0, 2)   | 1     |
| (0, 3)   | 1.5   |
| (1, 0)   | 0.5   |
| (1, 2)   | 1.5   |
| (1, 3)   | 2     |
| (2, 0)   | 1     |
| (2, 1)   | 1.5   |
| (2, 3)   | 2.5   |
| (3, 0)   | 1.5   |
| (3, 1)   | 2     |
| (3, 2)   | 2.5   |

---

### 2. Mean of the Sample Distribution

The **mean** (expected value) of the sample distribution is the average of all sample means, where each sample has an equal probability $\frac{1}{12}$. 

Sum of all sample means:

$$
0.5 + 1 + 1.5 + 0.5 + 1.5 + 2 + 1 + 1.5 + 2.5 + 1.5 + 2 + 2.5 = 17.5
$$

Now, divide by the number of samples (12):

$$
E(X_{\text{sample}}) = \frac{17.5}{12} \approx 1.4583
$$

So, the **mean of the sample distribution** is **1.4583**.

---

### 3. Variance of the Sample Distribution

To calculate the **variance** of the sample distribution, we first need to find the **expected value of the squared sample means** $E(X_{\text{sample}}^2)$.

First, square each sample mean:

| Sample Mean | Squared Mean |
|-------------|--------------|
| 0.5         | 0.25         |
| 1           | 1            |
| 1.5         | 2.25         |
| 0.5         | 0.25         |
| 1.5         | 2.25         |
| 2           | 4            |
| 1           | 1            |
| 1.5         | 2.25         |
| 2.5         | 6.25         |
| 1.5         | 2.25         |
| 2           | 4            |
| 2.5         | 6.25         |

Sum of the squared sample means:

$$
0.25 + 1 + 2.25 + 0.25 + 2.25 + 4 + 1 + 2.25 + 6.25 + 2.25 + 4 + 6.25 = 31.5
$$

Now, divide by the number of samples (12):

$$
E(X_{\text{sample}}^2) = \frac{31.5}{12} = 2.625
$$

Finally, calculate the variance:

$$
\text{Var}(X_{\text{sample}}) = E(X_{\text{sample}}^2) - (E(X_{\text{sample}}))^2
$$

Since $E(X_{\text{sample}}) = 1.4583$:

$$
(E(X_{\text{sample}}))^2 = (1.4583)^2 = 2.125
$$

$$
\text{Var}(X_{\text{sample}}) = 2.625 - 2.125 = 0.5
$$

So, the **variance of the sample distribution** is **0.5**.

---

### 4. Standard Deviation of the Sample Distribution

The **standard deviation** is the square root of the variance:

$$
\text{SD}(X_{\text{sample}}) = \sqrt{0.5} \approx 0.7071
$$

So, the **standard deviation** of the sample distribution is **0.7071**.

---

## Final Summary

| **Statistic**                | **Population**         | **Sample Distribution (Size = 2, Without Replacement)** |
|------------------------------|------------------------|--------------------------------------------------------|
| **Mean**                      | $1.5$              | $1.4583$                                           |
| **Variance**                  | $1.25$             | $0.5$                                              |
| **Standard Deviation**        | $1.118$            | $0.7071$                                           |

---

### **Summarized**:

- **Population Mean**: 1.5
- **Population Variance**: 1.25
- **Population Standard Deviation**: 1.118

- **Sample Mean**: 1.4583
- **Sample Variance**: 0.5
- **Sample Standard Deviation**: 0.7071



## Chapter 9 Correlation and Regression
Nov, 25, 2024

| X | Y |
|---|---|
|10 | 5 |
|20 | 1 |
|25 | 0 |

![Figure_1](https://github.com/user-attachments/assets/0448fff1-7817-45e4-8d36-2db1c6aa09f9)

#### Code
```python
import matplotlib.pyplot as plt

x = [10,20,25]
y = [5,,1, 0]

plt.scatter(x,y)
plt.show()
```


![image](https://github.com/user-attachments/assets/0ccbabd3-e214-4362-af52-f30f9baaae44)


Corr: Linearly association between two variables. It tells both magnitude and direction. It is denoted by `r` where $-1 \leq r \leq 1$
1. Perfect positive `corr=1`
2. Strong positive  `corr = 0.85`
3. Weak positive `corr = 0.13`
4. No correlation `corr = 0`
5. Perfect negative `corr = -1`
6. Moderate
7. Weak Negative



### Coefficient of Correlation
![image](https://github.com/user-attachments/assets/c83d704b-015e-415e-928b-c0a3a974e7ca)

### Covariance
![image](https://github.com/user-attachments/assets/0141fab4-6a99-4a38-96f2-098b4fdbba93)



| $X$ | $Y$ | $XY$ | $X^2$  |  $Y^2$  |
|-----|-----|------|--------|---------|
| 5   | 120 | 600  |  25    | 14400   |
| 7   | 170 | 1190 |  49    | 28900   |
| 15  | 320 | 4800 |  225   | 102400  |
| 20  | 420 | 8400 |  400   | 176400  |
|22.5 | 470 | 10575|  506.25| 220900  |
| 69.5 | 1500 | 25565|1205.25|543000  |


![Figure_1](https://github.com/user-attachments/assets/48d0ec4d-fd1d-4b3c-93a7-7520fdcad0a5)





##### Dec 04, 2024

## T-Test

1. Single Mean
2. Two Mean (Independent, Dependent)
3. More than Two Mean (Anova)




