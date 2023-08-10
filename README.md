# Linear Regression Analysis Tool

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)

## Description

The Linear Regression Analysis Tool is a C program that performs linear regression on a given set of data points. It uses the least squares method to calculate the best-fitting line for the provided data, helping researchers, data scientists, and analysts uncover relationships within their datasets.

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [What is Linear Regression?](#what-is-linear-regression)
- [Features](#features)
- [License](#license)
- [Contact](#contact)

## Installation

To utilize the Linear Regression Analysis Tool, follow these steps:

1. Clone the repository:
   ```sh
   git clone https://github.com/victormeloasm/LinearRegression.git
   cd LinearRegression
   ```

2. Compile the program using a C compiler:
   ```sh
   gcc -o LinearRegression LinearRegression.c
   ```

3. Run the program:
   ```sh
   ./LinearRegression
   ```

## Usage

1. Input the number of data points.
2. Enter each data point in the format 'x y'.
3. The program will calculate and display the linear regression equation.

For example:
```sh
Enter the number of data points: 5
Enter data point 1: 1.2 2.5
Enter data point 2: 2.4 4.6
Enter data point 3: 3.6 6.7
Enter data point 4: 4.8 8.9
Enter data point 5: 5.5 10.1

Linear Regression Equation: y = 2.0123x + 0.8745
```

## What is Linear Regression?

Linear regression is a statistical method used to model the relationship between two or more variables, typically consisting of a dependent variable (also called the response variable) and one or more independent variables (also called predictor variables or features). The primary goal of linear regression is to find the best-fitting linear relationship between these variables.

In simple terms, linear regression helps us understand how changes in one variable are associated with changes in another variable. It assumes that there is a linear (straight-line) relationship between the variables, where the change in the dependent variable can be expressed as a linear combination of the independent variables.

Mathematically, the relationship is represented by the equation of a straight line:
```
y = mx + b
```

For more details about linear regression and its applications, you can refer to this [Wikipedia article](https://en.wikipedia.org/wiki/Linear_regression).

## Features

- **Interactive**: Easily input data points and obtain the regression equation.
- **Accurate**: Utilizes the least squares method to provide precise results.

## License

This project is licensed under the [MIT License](LICENSE). You're free to use, modify, and distribute the software as long as the original license is included.

## Contact

If you have any questions or feedback, feel free to reach out:

Name: Víctor Duarte Melo
Email: victormeloasm@gmail.com

Project Link: [https://github.com/victormeloasm/LinearRegression](https://github.com/victormeloasm/LinearRegression)
