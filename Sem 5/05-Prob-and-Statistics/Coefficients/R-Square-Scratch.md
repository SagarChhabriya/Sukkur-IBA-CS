### Steps:
1. **Create the Table:**
   We'll assume you're working with a linear regression model of the form:
   $$
   Y = b_0 + b_1 X
   $$
   where:
   - $Y$ is the observed dependent variable.
   - $X$ is the independent variable.
   - $b_0$ is the intercept.
   - $b_1$ is the slope of the regression line.

2. **Columns:**
   From your description, the table might look like this:

| $X_i$ | $Y_i$ | $X_i Y_i$ | $Y_i^2$ | $X_i^2$ | Predicted $\hat{Y}_i$ | Residual $e_i = Y_i - \hat{Y}_i$ | Squared Residual $e_i^2$ | $(Y_i - \bar{Y})^2$ |
|----------|----------|---------------|-------------|-------------|-------------------------|-----------------------------|---------------------------|--------------------------|
| 1        | 2        | 2             | 4           | 1           | $\hat{Y}_1$         | $e_1$                  | $e_1^2$                | $(Y_1 - \bar{Y})^2$   |
| 2        | 4        | 8             | 16          | 4           | $\hat{Y}_2$         | $e_2$                  | $e_2^2$                | $(Y_2 - \bar{Y})^2$   |
| 3        | 6        | 18            | 36          | 9           | $\hat{Y}_3$         | $e_3$                  | $e_3^2$                | $(Y_3 - \bar{Y})^2$   |
| 4        | 8        | 32            | 64          | 16          | $\hat{Y}_4$         | $e_4$                  | $e_4^2$                | $(Y_4 - \bar{Y})^2$   |
| 5        | 10       | 50            | 100         | 25          | $\hat{Y}_5$         | $e_5$                  | $e_5^2$                | $(Y_5 - \bar{Y})^2$   |

### Step 1: **Calculate the Regression Line Parameters $b_0$ and $b_1$**

Using the method of least squares, we can calculate the slope $b_1$ and the intercept $b_0$:

1. **Slope $b_1$**:

$$
b_1 = \frac{n \sum X_i Y_i - \sum X_i \sum Y_i}{n \sum X_i^2 - (\sum X_i)^2}
$$

2. **Intercept $b_0$**:

$$
b_0 = \frac{\sum Y_i - b_1 \sum X_i}{n}
$$

### Step 2: **Predicted Values $\hat{Y}_i$**

For each $X_i$, calculate the predicted value $\hat{Y}_i$ using the regression equation:

$$
\hat{Y}_i = b_0 + b_1 X_i
$$

### Step 3: **Residuals $e_i$**

The residuals $e_i$ are the differences between the observed values $Y_i$ and the predicted values $\hat{Y}_i$:

$$
e_i = Y_i - \hat{Y}_i
$$

### Step 4: **Squared Residuals $e_i^2$**

Next, square each residual:

$$
e_i^2 = (Y_i - \hat{Y}_i)^2
$$

### Step 5: **Sum of Squares Total (SST)**

The **Total Sum of Squares (SST)** represents the total variance in the observed values $Y$ from their mean $\bar{Y}$:

$$
\text{SST} = \sum (Y_i - \bar{Y})^2
$$

where $\bar{Y}$ is the mean of the $Y_i$ values.

### Step 6: **Sum of Squares Error (SSE)**

The **Sum of Squares Error (SSE)** is the sum of the squared residuals:

$$
\text{SSE} = \sum e_i^2
$$

### Step 7: **Coefficient of Determination (r²)**

Finally, the coefficient of determination $r^2$ can be calculated as:

$$
r^2 = 1 - \frac{\text{SSE}}{\text{SST}}
$$

### Example (Step-by-Step):

Let’s walk through a simple dataset (same as we used previously):

| $X_i$ | $Y_i$ |
|----------|----------|
| 1        | 2        |
| 2        | 4        |
| 3        | 6        |
| 4        | 8        |
| 5        | 10       |


Here is the updated table format based on the steps you've outlined for calculating \( r^2 \) using the method of least squares:

| \( X_i \) | \( Y_i \) | \( X_i Y_i \) | \( Y_i^2 \) | \( X_i^2 \) | Predicted \( \hat{Y}_i \) | Residual \( e_i = Y_i - \hat{Y}_i \) | Squared Residual \( e_i^2 \) | \( (Y_i - \bar{Y})^2 \) |
|----------|----------|---------------|-------------|-------------|-------------------------|-----------------------------|---------------------------|--------------------------|
| 1        | 2        | 2             | 4           | 1           | 2                       | 0                           | 0                         | 16                       |
| 2        | 4        | 8             | 16          | 4           | 4                       | 0                           | 0                         | 4                        |
| 3        | 6        | 18            | 36          | 9           | 6                       | 0                           | 0                         | 0                        |
| 4        | 8        | 32            | 64          | 16          | 8                       | 0                           | 0                         | 4                        |
| 5        | 10       | 50            | 100         | 25          | 10                      | 0                           | 0                         | 16                       |

### Explanation of Columns:
- **\( X_i \)**: The independent variable values.
- **\( Y_i \)**: The observed dependent variable values.
- **\( X_i Y_i \)**: The product of each \( X_i \) and \( Y_i \).
- **\( Y_i^2 \)**: The square of each observed \( Y_i \).
- **\( X_i^2 \)**: The square of each \( X_i \).
- **Predicted \( \hat{Y}_i \)**: The predicted values of \( Y \) using the regression equation \( \hat{Y}_i = b_0 + b_1 X_i \). In this case, \( \hat{Y}_i = 2X_i \) based on the earlier calculations.
- **Residual \( e_i = Y_i - \hat{Y}_i \)**: The difference between the observed \( Y_i \) and the predicted \( \hat{Y}_i \).
- **Squared Residual \( e_i^2 \)**: The square of each residual to measure the error magnitude.
- **\( (Y_i - \bar{Y})^2 \)**: The total variance of each observed value \( Y_i \) from the mean \( \bar{Y} \), which is used to calculate the total sum of squares (SST).

---




#### 1. Calculate $b_1$ and $b_0$ for the Regression Line:
- **Sums**:
  - $\sum X = 1 + 2 + 3 + 4 + 5 = 15$
  - $\sum Y = 2 + 4 + 6 + 8 + 10 = 30$
  - $\sum X^2 = 1^2 + 2^2 + 3^2 + 4^2 + 5^2 = 1 + 4 + 9 + 16 + 25 = 55$
  - $\sum XY = 1 \times 2 + 2 \times 4 + 3 \times 6 + 4 \times 8 + 5 \times 10 = 2 + 8 + 18 + 32 + 50 = 110$
  
- **Calculate $b_1$** (slope):

$$
b_1 = \frac{5 \times 110 - 15 \times 30}{5 \times 55 - 15^2} = \frac{550 - 450}{275 - 225} = \frac{100}{50} = 2
$$

- **Calculate $b_0$** (intercept):

$$
b_0 = \frac{30 - 2 \times 15}{5} = \frac{30 - 30}{5} = 0
$$

Thus, the regression line is:
$$
\hat{Y} = 0 + 2X
$$

#### 2. Predicted Values $\hat{Y}_i$:

For each $X_i$, we calculate $\hat{Y}_i$:

$$
\hat{Y}_1 = 0 + 2(1) = 2, \quad \hat{Y}_2 = 0 + 2(2) = 4, \quad \hat{Y}_3 = 0 + 2(3) = 6, \quad \hat{Y}_4 = 0 + 2(4) = 8, \quad \hat{Y}_5 = 0 + 2(5) = 10
$$

#### 3. Residuals and Squared Residuals:

For each data point, calculate the residual $e_i$ and square it:

$$
e_1 = Y_1 - \hat{Y}_1 = 2 - 2 = 0, \quad e_2 = 4 - 4 = 0, \quad e_3 = 6 - 6 = 0, \quad e_4 = 8 - 8 = 0, \quad e_5 = 10 - 10 = 0
$$

$$
e_1^2 = 0^2 = 0, \quad e_2^2 = 0^2 = 0, \quad e_3^2 = 0^2 = 0, \quad e_4^2 = 0^2 = 0, \quad e_5^2 = 0^2 = 0
$$

#### 4. SST and SSE:

- **SST**: The total variation in $Y$ from the mean:

$$
\bar{Y} = \frac{30}{5} = 6
$$

$$
\text{SST} = (2 - 6)^2 + (4 - 6)^2 + (6 - 6)^2 + (8 - 6)^2 + (10 - 6)^2 = 16 + 4 + 0 + 4 + 16 = 40
$$

- **SSE**: The unexplained variation (sum of squared residuals):

$$
\text{SSE} = 0 + 0 + 0 + 0 + 0 = 0
$$

#### 5. $r^2$:

Finally, calculate the coefficient of determination:

$$
r^2 = 1 - \frac{0}{40} = 1
$$

This means that 100% of the variance in $Y$ is explained by the regression model (which is perfect in this case).

---

This is how you would use a table to calculate $r^2$ from the **Sum of Squares** and residuals. The important columns are:

1. $X_i, Y_i$ (observed values),
2. $\hat{Y}_i$ (predicted values),
3. $e_i$ (residuals),
4. $e_i^2$ (squared residuals),
5. $(Y_i - \bar{Y})^2$ (total variation). 

By following these steps, you can calculate $r^2$ and assess how well your regression model fits the data.
