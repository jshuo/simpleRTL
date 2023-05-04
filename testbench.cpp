#include <iostream>
#include <svdpi.h>

using namespace std;

extern "C" {
    void drive_signals(svBitVecVal *A, svBitVecVal *B, svBit cin, svBitVecVal *sum, svBit *os);
}

void drive_signals(svBitVecVal *A, svBitVecVal *B, svBit cin, svBitVecVal *sum, svBit *os) {
    // Add custom logic to drive the signals and test the adder_4bit module
    svBitVecVal test_A[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    svBitVecVal test_B[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    svBit test_cin[] = {0, 1};

    for (int a = 0; a < 16; ++a) {
        for (int b = 0; b < 16; ++b) {
            for (int c = 0; c < 2; ++c) {
                *A = test_A[a];
                *B = test_B[b];
                cin = test_cin[c];

                cout << "A: " << static_cast<int>(test_A[a]) << ", B: " << static_cast<int>(test_B[b]) << ", Cin: " << static_cast<int>(test_cin[c]) << endl;
                cout << "Sum: " << static_cast<int>(*sum) << ", Cout: " << static_cast<int>(*os) << endl << endl;
            }
        }
    }
}

int main() {
    // Initialize simulation environment, run the simulation, and analyze the results
    svBitVecVal A, B, sum;
    svBit cin, os;

    drive_signals(&A, &B, cin, &sum, &os);

    return 0;
}
