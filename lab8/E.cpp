void print_no_space(char* text){
    char* p = text;
    while (*p != '\0'){
        if (*p == ' '){
            p++;
            continue;
        }
        if ('A' <= *p and *p <= 'Z') std::cout << char(*p + 32);
        else std::cout << *p;
        p++;
    }
    return;
}
