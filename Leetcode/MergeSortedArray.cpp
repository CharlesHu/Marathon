ass Solution {
	public:
		    void merge(int A[], int m, int B[], int n) {
				        for (int i = m-1, j = n-1, k = n+m-1; i>=0 || j>=0;) {
							            if (i >= 0 && j >= 0) {
											                if (A[i] > B[j]) A[k--] = A[i--];
															                else A[k--] = B[j--];
																			            } else if (i >= 0) {
																							                A[k--] = A[i--];
																											            } else if (j >= 0) {
																															                A[k--] = B[j--];
																																			            }
										        }
						    }
};
