import math
import matplotlib.pyplot as plt 
import numpy as np 

def f(x):
  return np.sin(10*x)-np.cos(3*x)

  def metodo_biseccion(a, b, error_max=0.0001, max_iter=100):
    ""
    