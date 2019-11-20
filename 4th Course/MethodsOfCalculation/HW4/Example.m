clear; clc; close('all');

%% Inputs:
%% Matrix
A = [
        -0.82005    -0.13542    0.26948;
        -0.13542    0.51486     0.2;
        0.26948     0.2     -0.83365
     ];

 [y, lambda] = ScalarProduct(A,0.00001);
 
 disp('Eigenvector by Scalar Product:');
 disp(y);
 
 disp('Eigenvalue by Scalar Product:');
 disp(lambda);
 
 [R,D] = eig(A); 
 disp('Eigenvectors by matlab:');
 disp(R); 
 disp('Eigenvalues by matlab:');
 disp(diag(D)');