// Function to convert a string to lowercase
void strlwr(char *str) {
    while (*str) {
        *str = tolower((unsigned char) *str);
        str++;
    }
}

// Function to convert a string to uppercase
void strupr(char *str) {
    while (*str) {
        *str = toupper((unsigned char) *str);
        str++;
    }
}

// Custom function to set all characters of a string to a given character
void strset(char *str, char ch) {
    while (*str) {
        *str = ch;
        str++;
    }
}

// Custom function to set the first n characters of a string to a given character
void strnset(char *str, char ch, size_t n) {
    while (n-- && *str) {
        *str = ch;
        str++;
    }
}

// Custom function to reverse a string
void strrev(char *str) {
    char *end = str + strlen(str) - 1;
    char temp;
    while (end > str) {
        temp = *str;
        *str = *end;
        *end = temp;
        str++;
        end--;
    }
}