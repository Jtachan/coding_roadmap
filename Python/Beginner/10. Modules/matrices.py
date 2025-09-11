"""Module with matrices functions."""

import random

import numpy as np


def add_two_matrices(mat_a: list | np.ndarray, mat_b: list | np.ndarray) -> np.ndarray:
    """Adding two matrices.

    The adding functionality is already supported for numpy arrays. However, lists are also accepted here as matrices.
    For that reason, any input matrix that is not a numpy type will be type-casted into numpy.
    """
    if not isinstance(mat_a, np.ndarray):
        mat_a = np.array(mat_a)
    if not isinstance(mat_b, np.ndarray):
        mat_b = np.array(mat_b)
    return mat_a + mat_b


def create_random_matrix() -> list:
    """Create 3x3 matrix with random values among 0 and 9."""
    # Initializing as an 'all zeros' matrix.
    matrix = [[0, 0, 0] for _ in range(3)]

    for row_idx in range(3):
        for col_idx in range(3):
            matrix[row_idx][col_idx] = random.randint(0, 9)

    return matrix
