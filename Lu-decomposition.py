# Python3 Program to decompose 
# a matrix into lower and 
# upper traingular matrix 
MAX = 100; 

def luDecomposition(mat,C, n): 

    lower = [[0 for x in range(n)] 
                for y in range(n)]; 
    upper = [[0 for x in range(n)] 
                for y in range(n)]; 

# Decomposing matrix into Upper 
# and Lower triangular matrix 
    for i in range(n): 

# Upper Triangular 
        for k in range(i, n): 

            # Summation of L(i, j) * U(j, k) 
            sum = 0; 
            for j in range(i): 
                sum += (lower[i][j] * upper[j][k]); 

            # Evaluating U(i, k) 
            upper[i][k] = mat[i][k] - sum; 

        # Lower Triangular 
        for k in range(i, n): 
            if (i == k): 
                lower[i][i] = 1; # Diagonal as 1 
            else: 

                # Summation of L(k, j) * U(j, i) 
                sum = 0; 
                for j in range(i): 
                    sum += (lower[k][j] * upper[j][i]); 

                # Evaluating L(k, i) 
                lower[k][i] = int((mat[k][i] - sum) /
                                    upper[i][i]); 

    # setw is for displaying nicely 
    print("Lower Triangular\t\tUpper Triangular"); 

    # Displaying the result : 
    for i in range(n): 

        # Lower 
        for j in range(n): 
            print(lower[i][j], end = "\t"); 
        print("", end = "\t"); 

        # Upper 
        for j in range(n): 
            print(upper[i][j], end = "\t"); 
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
    
    x3 = z3 / upper[2][2]
    print("x3",x3)
    x2 = (z2 - x3*upper[1][2])/upper[1][1]
    print("x2",x2)
    x1 = (z1 - x3*upper[0][2] - x2*upper[0][1])/upper[0][0]
    print("x1",x1)
    
    
# Driver code
print("Enter LHS Matrix")
mat = [[int(input()) for j in range(0, 3)] for i in range(0, 3)]
print("Coefficent Matrix")
for i in range(3):
    print( mat[i])
print('\n')

print("Enter RHS Matrix")
C = [[int(input()) for j in range(0, 1)] for i in range(0, 3)]
print("RHS Matrix")
for i in range(3):
    print( C[i])
print('\n')

luDecomposition(mat,C, 3); 

