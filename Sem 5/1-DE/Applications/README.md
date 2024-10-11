# Formation of D.E
Differential Equations from physical phenomenon: The problems that involve rate of change of one variable with respect to time always give rise to D.E.


## 1. Growth and Decay Problems


## 2. Applications of Linear D.E

### Investment
Ex:
1. Adding to an account
2. Adding to an account with income growth
3. Paying of a load
4. Blood
5. Population with emigration
6. Heat and Cooling
   
## 3. Newton's Law of Cooling


---

# Growth and Decay Problems
1. The population of a town was 1000 a year ago and the present population is 2000. What will be the population after the end of 4th year if the rate of increase in population to present population?

The population of a town was 1000 a year ago, and the present population is 2000. We want to determine the population after the end of the 4th year, given that the rate of increase in population is proportional to the present population.

Let \( P \) be the population at time \( t \). The initial population was 1000, so we can say that \( P = 1000 \) when \( t = 0 \). If the unit of time is in years, then at \( t = 1 \), \( P = 2000 \).

Since the rate of growth is proportional to \( P \), we have:

$$
\frac{dP}{dt} \propto P \quad \text{or} \quad \frac{dP}{dt} = kP \tag{1}
$$

where \( k \) is the constant of proportionality. Equation (1) is a separable first-order differential equation. Thus,

$$
\frac{dP}{P} = k \, dt
$$

Integrating both sides gives:

$$
\int \frac{1}{P} \, dP = \int k \, dt
$$

This results in:


\[
\ln P = kt + c \tag{2}
\]

where \( c \) is the integration constant. Therefore:

$$
P = e^{kt+c} = e^c e^{kt} = me^{kt}
$$

where \( m = e^c \). This is the general solution of the differential equation (1).

Now, at \( t = 0 \), \( P = 1000 \):

$$
1000 = me^{0} \quad \Rightarrow \quad m = 1000
$$

Thus, equation (2) becomes:

$$
P = 1000 e^{kt} \tag{3}
$$

Also, at \( t = 1 \), \( P = 2000 \):

$$
2000 = 1000 e^{k} \quad \Rightarrow \quad e^k = 2
$$

From equation (3), we have:

$$
P = 1000 e^{kt} \quad \Rightarrow \quad P = 1000 \times 2^t
$$

Therefore, at the end of the 4th year, the population of the town will be:

$$
P = 1000 \times 2^4 = 1000 \times 16 = 16,000
$$



2. A mold grows at a rate proportional to itself. At the beginning, the amount was 2 grams. In 2 days the amount increased to 3 grams. Find the amount after 8 days?
3. Bacteria grows in a nutrient solution at a rate proportional to the amount present. Initially, there are 250 strands of bacteria in the solution that grows to 800 strands after seven hours. Find
   - (a) an expression for the approximate number of strands in the culture at any time `t`
   - (b) the time needed for bacteria to grow to 1600 strands.
4. The population of a certain country has grown at a rate proportional to number of people in the country. At present, the country has 80 million inhabitants. Ten years ago it had 70 million. Assuming that this trend continues, find
   - (a) an expression for the approximate number of people living in the country at time `t` (taking time t = 0 be the present time) and
   - (b) the approximate number of people at the end of the next ten year period.
5. A certain radio active material is known to decay at a rate proportional to the amount present. If initially there is 50 milligrams of the material present and after two hours it is observed that the material has lost 10 precent of its original mass, find
   - (a) an expression for the mass of the material remaining at any time `t`,
   - (b) the mass of the material after four hours, and
   - (c) the time at which the material has decayed to one half of its initial mass.
6.
