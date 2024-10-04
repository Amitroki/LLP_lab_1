#pragma warning(disable : 4996)
#include <stdio.h>

int buffer[100];

void main() {
    int cnt;
    printf("\tPlease, enter the count of elements in your array: ");
    scanf("%d", &cnt);
    int k = 0;
    int digit;
    printf("\tPlease, enter your array separated by a space: ");
input_array:
    if (k < cnt) {
        scanf("%d", &digit);
        buffer[k] = digit;
        k += 1;
        goto input_array;
    }
    int checker;
    int i = 0;
outer_loop_start:
    if (i >= cnt - 1) goto end_sort;
    checker = 0;
    int j = 0;
inner_loop_start:
    if (j >= cnt - i - 1) goto check_break;
    if (buffer[j] > buffer[j + 1]) {
        int copy = buffer[j];
        buffer[j] = buffer[j + 1];
        buffer[j + 1] = copy;
        checker = 1;
    }
    j += 1;
    goto inner_loop_start;
check_break:
    if (checker == 0) goto end_sort;
    i += 1;
    goto outer_loop_start;
end_sort:
    printf("\n\tThat's your array after my bubble sort: ");
    int l = 0;
print_array:
    if (l < cnt) {
        printf("%d ", buffer[l]);
        l += 1;
        goto print_array;
    }
}
// 98 92 52 34 18 63 94 87 39 71 38 77 3 6 73 14 29 50 76 70 85 80 84 55 54 47 25 37 95 83 43 59 93 96 28 31 5 8 12 26 69 58 16 32 86 100 61 67 48 19 545 906 616 609 183 539 32 709 292 474 6 935 776 861 30 330 103 981 976 257 798 191 465 508 349 687 666 459 888 494 129 155 753 227 908 124 898 553 33 957 18 473 293 138 851 369 603 960 123 933
// -9757 0 1873 -3001 8529 8495 2157 4037 -5234 5877 169 8397 3524 -9122 4981 6207 -1408 2849 5217 8913 1773 -4844 1477 6948 1116 8093 5458 9977 4704 873 5198 -5638 2093 9016 4117 9224 7479 6795 4190 -5546 7603 9080 2078 2668 903 -879 6272 1535 9454 6759 6898 1002 8114 1159 3183 7725 5880 4076 -9276 -865 -6633 -9401 -434 1135 9059 1094 1130 -3298 3793 -9945 4652 8813 2904 7142 6717 -736 1103 4125 1175 8740 1161 7492 5301 4249 9298 860 9686 -7292 2833 2149 -1007 1239 -7246 6296 8490 -2984 46 1465 -7962 2973