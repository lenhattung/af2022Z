# loading packages
library(tidyverse)
library(inline) # allows to use C++ inline - within R code
library(Rcpp)   # Rccp package by Dirk Eddelbuettel
library(xts)
library(dygraphs)

setwd("C:/Users/Windows/OneDrive/Learning/WNE/SEM3/ApplyFinace/Lab3And4/")
list.files()


# install.packages("montecarlo426246_1.0.tar.zip",
#                  type = "source",
#                  repos = NULL)

install.packages("montecarlo426246_1.0.zip",
                 type = "source",
                 repos = NULL)

x <- montecarlo426246::getDownAndOutCall(S_      = 95,
                                         K_      = 100,
                                         r_      = 0.07,
                                         sigma_  = 0.24,
                                         L_      = 80,
                                         t_      = 0.75,
                                         NumberOfPaths_ = 1000)

print(x)
