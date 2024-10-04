#pragma warning(disable : 4996)
#include <stdbool.h>
#include <stdio.h>

int buffer[100];

int main() {
    int cnt;
    printf("\tPlease, enter the count of elements in your array: ");
    scanf("%d", &cnt);
    int k = 0;
    int digit;
    printf("\tPlease, enter your array separated by a space: ");
    // Цикл замещен на метку и goto
input_array:
    if (k < cnt) {
        scanf("%d", &digit);
        buffer[k] = digit;
        k++;
        goto input_array;
    }
    bool checker;
    int i = 0;
outer_loop_start:
    if (i >= cnt - 1) goto end_sort; // Проверяем условие завершения внешнего цикла
    checker = false;
    int j = 0;
inner_loop_start:
    if (j >= cnt - i - 1) goto check_break; // Условие завершения внутреннего цикла
    if (buffer[j] > buffer[j + 1]) {
        int copy = buffer[j];
        buffer[j] = buffer[j + 1];
        buffer[j + 1] = copy;
        checker = true;
    }
    j++;
    goto inner_loop_start; // Возвращаемся к началу внутреннего цикла
check_break:
    if (checker == false) goto end_sort; // Прерывание внешнего цикла, если проверка не прошла
    i++;
    goto outer_loop_start; // Возвращаемся к началу внешнего цикла
end_sort:
    printf("\n\tThat's your array after my bubble sort: ");
    int l = 0;
print_array:
    if (l < cnt) {
        printf("%d ", buffer[l]);
        l++;
        goto print_array; // Печать каждого элемента массива
    }
}