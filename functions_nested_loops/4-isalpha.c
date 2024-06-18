#include "main.h"
/**
 * main - int _isalpha
 * function for detecting a lowercase or uppercase letter
 */

int _isalpha(int c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1;
    } else {
        return 0;
    }
}
