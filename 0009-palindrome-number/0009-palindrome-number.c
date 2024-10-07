bool isPalindrome(int x) {
    char string_number[35];
    
    sprintf(string_number, "%d", x);

    int len = strlen(string_number);

    for (int i = 0 ; i < len / 2 ; i++) {
        if (string_number[i] != string_number[len - i - 1]) {
            return false;
        }
    } return true;
}