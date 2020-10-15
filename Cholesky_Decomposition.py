# Python3 program to decompose 
# a matrix using Cholesky 
# Decomposition 
import math 
MAX = 100; 

def Cholesky_Decomposition(matrix,C, n): 

    lower = [[0 for x in range(n + 1)] 
                for y in range(n + 1)]; 

    # Decomposing a matrix 
    # into Lower Triangular 
    for i in range(n): 
        for j in range(i + 1): 
            sum1 = 0; 

            # sum1mation for diagnols 
            if (j == i): 
                for k in range(j): 
                    sum1 += pow(lower[j][k], 2); 
                lower[j][j] = int(math.sqrt(matrix[j][j] - sum1)); 
            else: 

                # Evaluating L(i, j) 
                # using L(j, j) 
                for k in range(j): 
                    sum1 += (lower[i][k] *lower[j][k]); 
                if(lower[j][j] > 0): 
                    lower[i][j] = int((matrix[i][j] - sum1) /
                                            lower[j][j]); 

                    
    # Displaying Lower Triangular 
    # and its Transpose 
    print("Lower Triangular\t\tTranspose"); 
    for i in range(n): 

        # Lower Triangular 
        for j in range(n): 
            print(lower[i][j], end = "\t"); 
        print("", end = "\t"); 

        # Transpose of 
        # Lower Triangular 
        for j in range(n): 
            print(lower[j][i], end = "\t"); 
        print(""); 

        
    print('\n')
    print('\n')
    print('\n')    
        
    z1 = C[0][0] / lower[0][0]
    print("z1",z1)
    z2 = (C[1][0] - z1*lower[1][0])/lower[1][1]
    print("z2",z2)
    z3 = (C[2][0] - z1*lower[2][0] - z2*lower[2][1])/lower[2][2]
    print("z3",z3)

    print('\n')
    print('\n')
    print('\n')
    
    x3 = z3 / lower[2][2]
    print("x3",x3)
    x2 = (z2 - x3*lower[2][1])/lower[1][1]
    print("x2",x2)
    x1 = (z1 - x3*lower[2][0] - x2*lower[1][0])/lower[0][0]
    print("x1",x1)        
        
        
        

# Driver Code 
print("Enter LHS Matrix")
matrix = [[int(input()) for j in range(0, 3)] for i in range(0, 3)]
print("Coefficent Matrix")
for i in range(3):
    print( matrix[i])
print('\n')

print("Enter RHS Matrix")
C = [[int(input()) for j in range(0, 1)] for i in range(0, 3)]
print("RHS Matrix")
for i in range(3):
    print( C[i])
print('\n')

Cholesky_Decomposition(matrix,C, 3); 

