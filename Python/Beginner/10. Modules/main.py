"""Main module to be invoked by python."""

import numpy as np
from matrices import add_two_matrices, create_random_matrix

if __name__ == "__main__":
    mat_a = create_random_matrix()
    mat_b = create_random_matrix()

    print(f"The first matrix is:\n{np.asarray(mat_a)}")
    print(f"The second matrix is:\n{np.asarray(mat_b)}")
    print("The sum matrix is:\n", add_two_matrices(mat_a, mat_b))
