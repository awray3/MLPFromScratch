# Plan

The goal is to solve the separation problem. This means the network I train will
output a pair of numbers (m, b) which are the slope and intercept of 
the line defining the decision boundary.

The model will be a neural network with some number of layers
and some number of nodes per layer. Let's start simple and do
logistic regression then generalize the number of layers.

The architecture will look like this:

x	(w1, w2)		
 	------->  sigmoid ------> probability of being target 1	
y


How should this be implemented? Should the layer be its own class
that can be operated on?

Class layer:
	attributes:
		weights
		activation
	methods:
		update weights
			- uses backprop... what should the input be? worry
			  later.
