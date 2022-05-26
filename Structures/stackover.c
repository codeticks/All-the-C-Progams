#include <stdbool.h> // For `true` (`1`) and `false` (`0`) macros in C
#include <stdint.h>  // For `uint8_t`, `int8_t`, etc.
#include <stdio.h>   // For `printf()`
#include <string.h>  // `strncpy()`


/// A function-like macro to write string `string` into destination char array
/// `destination`.
#define SET_STRING(destination, string) \
    strncpy((destination), (string), sizeof(destination))


typedef struct addresses_s
{
    char home_street[40];
    char home_city[30];
    char home_zipcode[10];
    char home_state[30];
    char home_country[30];

    char work_street[40];
    char work_city[30];
    char work_zipcode[10];
    char work_state[30];
    char work_country[30];

    char other_street[40];
    char other_city[30];
    char other_zipcode[10];
    char other_state[30];
    char other_country[30];
} addresses_t;

void print_addresses(addresses_t addresses) //typedef addresses_t = struct addresses_t addresses
{
    printf(
        "home_street:   %s\n"
        "home_city:     %s\n"
        "home_zipcode:  %s\n"
        "home_state:    %s\n"
        "home_country:  %s\n"
        "\n"
        "work_street:   %s\n"
        "work_city:     %s\n"
        "work_zipcode:  %s\n"
        "work_state:    %s\n"
        "work_country:  %s\n"
        "\n"
        "other_street:  %s\n"
        "other_city:    %s\n"
        "other_zipcode: %s\n"
        "other_state:   %s\n"
        "other_country: %s\n"
        "\n",

        addresses.home_street,
        addresses.home_city,
        addresses.home_zipcode,
        addresses.home_state,
        addresses.home_country,

        addresses.work_street,
        addresses.work_city,
        addresses.work_zipcode,
        addresses.work_state,
        addresses.work_country,

        addresses.other_street,
        addresses.other_city,
        addresses.other_zipcode,
        addresses.other_state,
        addresses.other_country);
}

// int main(int argc, char *argv[])  // alternative prototype
int main()
{
    printf("struct basic demo withOUT nested structs.\n\n");

    addresses_t addresses;

    //printf("%s")

    SET_STRING(addresses.home_street,   "street 1");
    SET_STRING(addresses.home_city,     "city 1");
    SET_STRING(addresses.home_zipcode,  "12345");
    SET_STRING(addresses.home_state,    "Florida");
    SET_STRING(addresses.home_country,  "USA");

    SET_STRING(addresses.work_street,   "street 2");
    SET_STRING(addresses.work_city,     "city 2");
    SET_STRING(addresses.work_zipcode,  "67890");
    SET_STRING(addresses.work_state,    "Florida");
    SET_STRING(addresses.work_country,  "USA");

    SET_STRING(addresses.other_street,  "street 3");
    SET_STRING(addresses.other_city,    "city 3");
    SET_STRING(addresses.other_zipcode, "54321");
    SET_STRING(addresses.other_state,   "Florida");
    SET_STRING(addresses.other_country, "USA");

    print_addresses(addresses);

    printf("\n%s",__FILE__);

    return 0;
}