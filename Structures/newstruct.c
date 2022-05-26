#include <stdio.h> 

struct address {  
    char city[30];
    char zipcode[10];
    char street1[40];
    char street2[40];
    char phone[14];
};

struct employee {  
    char name[32];  
    char pin[5];  
    struct address add;  
};

struct company {  
    char name[32];
    char taxid[12];
    struct address add;
};

int get_string(const char *prompt, char *dest, size_t size) {
    int c;
    size_t i = 0;
    printf("Enter %s: ", prompt);
    while ((c = getchar()) != EOF && c != '\n') {
        if (i + 1 < size)
            dest[i++] = c;
    }
    dest[i] = '\0';
    return (i == 0 && c == EOF) ? -1 : i;
}

void get_address(struct address *ap) {
    get_string("city", ap->city, sizeof ap->city);
    get_string("zipcode", ap->zipcode, sizeof ap->zipcode);
    get_string("street1", ap->street1, sizeof ap->street1);
    get_string("street2", ap->street2, sizeof ap->street2);
    get_string("phone", ap->phone, sizeof ap->phone);
}

void print_address(struct address *ap) {
    printf("city: %s\n", ap->city);
    printf("zipcode: %s\n", ap->zipcode);
    printf("street1: %s\n", ap->street1);
    printf("street2: %s\n", ap->street2);
    printf("phone: %s\n", ap->phone);
}

int main() {  
    struct employee emp;  
    struct company comp;  

    printf("Enter employee information:\n");  
    get_string("employee name", emp.name, sizeof emp.name);
    get_string("employee pin", emp.pin, sizeof emp.pin);
    get_address(&emp.add);

    printf("Printing the employee information....\n");  
    printf("name: %s\npincode: %s\n", emp.name, emp.pin);
    print_address(&emp.add);

    printf("Enter company information:\n");  
    get_string("company name", comp.name, sizeof comp.name);
    get_string("company taxid", comp.taxid, sizeof comp.taxid);
    get_address(&comp.add);

    printf("Printing the company information....\n");  
    printf("name: %s\ntaxid: %s\n", comp.name, comp.taxid);
    print_address(&comp.add);

    return 0;
}