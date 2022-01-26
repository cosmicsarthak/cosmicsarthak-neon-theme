package demo;

// Java program to count total number of
// paths from a point to origin
import java.io.*;

class GFG {

    // Recursive function to count number of paths
    static int countPaths(int n, int m) {
        // If we reach bottom or top left, we are
        // have only one way to reach (0, 0)
        if (n == 0 || m == 0)
            return 1;

        // Else count sum of both ways
        return (countPaths(n - 1, m) + countPaths(n, m - 1));
    }

    // Driver Code
    public static void main(String[] args) {
        int n = 3, m = 2;
        System.out.println(" Number of Paths "
                + countPaths(n, m));

    }
}

// This code is contributed by vt_m
