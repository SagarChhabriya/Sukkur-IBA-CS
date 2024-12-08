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


