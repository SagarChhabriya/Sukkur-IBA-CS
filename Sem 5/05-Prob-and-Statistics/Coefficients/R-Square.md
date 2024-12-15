Am example to demonstrate how $r^2 = 1 - \frac{\text{SSE}}{\text{SST}}$ works. We'll calculate the values step by step.

### Example:
Suppose we have a dataset of 5 data points, where $X$ is the independent variable and $Y$ is the dependent variable.

| $X$ | $Y$ | Predicted $\hat{Y}$ |
|--------|--------|------------------------|
| 1      | 2      | 2.2                    |
| 2      | 4      | 4.1                    |
| 3      | 6      | 6.0                    |
| 4      | 8      | 7.9                    |
| 5      | 10     | 9.8                    |

- The **predicted values** $\hat{Y}$ are based on a regression line fitted to the data.

### Step 1: Calculate the Total Sum of Squares (SST)
SST measures the total variance in the observed values $Y$ from their mean $\bar{Y}$.

First, calculate the mean of $Y$:

$$
\bar{Y} = \frac{2 + 4 + 6 + 8 + 10}{5} = 6
$$

Now, calculate SST:

$$
\text{SST} = \sum (Y_i - \bar{Y})^2 = (2 - 6)^2 + (4 - 6)^2 + (6 - 6)^2 + (8 - 6)^2 + (10 - 6)^2
$$

$$
\text{SST} = 16 + 4 + 0 + 4 + 16 = 40
$$

### Step 2: Calculate the Sum of Squares Error (SSE)
SSE measures the variance in the observed values $Y$ that the regression model does not explain (i.e., the residuals).

For each data point, calculate the squared difference between the observed value and the predicted value $\hat{Y}$:

$$
\text{SSE} = \sum (Y_i - \hat{Y}_i)^2
$$

$$
\text{SSE} = (2 - 2.2)^2 + (4 - 4.1)^2 + (6 - 6.0)^2 + (8 - 7.9)^2 + (10 - 9.8)^2
$$

$$
\text{SSE} = (0.2)^2 + (0.1)^2 + (0.0)^2 + (0.1)^2 + (0.2)^2
$$

$$
\text{SSE} = 0.04 + 0.01 + 0.00 + 0.01 + 0.04 = 0.10
$$

### Step 3: Calculate the Coefficient of Determination (r²)
Now that we have both SST and SSE, we can calculate $r^2$ using the formula:

$$
r^2 = 1 - \frac{\text{SSE}}{\text{SST}}
$$

Substitute the values of SSE and SST:

$$
r^2 = 1 - \frac{0.10}{40} = 1 - 0.0025 = 0.9975
$$

### Interpretation:
- $r^2 = 0.9975$ means that **99.75%** of the variance in the dependent variable $Y$ is explained by the regression model. The remaining **0.25%** of the variance is due to random errors or factors not captured by the model.

This shows how the formula $r^2 = 1 - \frac{\text{SSE}}{\text{SST}}$ works in practice and helps us understand how well our model fits the data.
