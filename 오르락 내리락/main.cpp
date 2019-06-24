/*
You should use the standard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful.
*/

#include <stdio.h>
#define MAX_V 100010

int Answer;

int main(int argc, char** argv)
{
	int v[MAX_V+1] = { 0 };
	
	
	for (int i = 2; i < MAX_V; i++) {
		if (i % 2 == 0) {
			v[i] = v[i / 2] + 1;
		}
		else {
			v[i] = v[(i + 1) / 2] + 2;
		}
	}

	int T, test_case;
	/*
	   The freopen function below opens input.txt file in read only mode, and afterward,
	   the program will read from input.txt file instead of standard(keyboard) input.
	   To test your program, you may save input data in input.txt file,
	   and use freopen function to read from the file when using cin function.
	   You may remove the comment symbols(//) in the below statement and use it.
	   Use #include<cstdio> or #include <stdio.h> to use the function in your program.
	   But before submission, you must remove the freopen function or rewrite comment symbols(//).
	 */

	 // freopen("input.txt", "r", stdin);

	scanf_s("%d",&T);
	for (test_case = 0; test_case < T; test_case++)
	{
		int a, b;
		scanf_s("%d %d", &a, &b);
		int copy = a;
		int sum1 = 0;
		Answer = 0;

		for (int j = a; j < b + 1; j++) {
			Answer += v[j];
		}

		printf( "Case #%d\n",test_case + 1);
		printf("%d\n",Answer);
	}

	return 0;//Your program should return 0 on normal termination.
}