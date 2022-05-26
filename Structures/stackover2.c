#include <stdbool.h> // For `true` (`1`) and `false` (`0`) macros in C
#include <stdint.h>  // For `uint8_t`, `int8_t`, etc.
#include <stdio.h>   // For `printf()`
#include <string.h>  // `strncpy()`


/// A function-like macro to write string `string` into destination char array
/// `destination`.
#define SET_STRING(destination, string) \
    strncpy((destination), (string), sizeof(destination))


typedef struct address_s
{
    char street[40];
    char city[30];
    char zipcode[10];
    char state[30];
    char country[30];
} address_t;

typedef struct addresses_s
{
    address_t home;
    address_t work;
    address_t other;
} addresses_t;

void print_address(address_t address, const char* prefix)
{
    printf(
        "%s.street:   %s\n"
        "%s.city:     %s\n"
        "%s.zipcode:  %s\n"
        "%s.state:    %s\n"
        "%s.country:  %s\n"
        "\n",
        prefix, address.street,
        prefix, address.city,
        prefix, address.zipcode,
        prefix, address.state,
        prefix, address.country);
}

void print_addresses(addresses_t addresses)
{
    print_address(addresses.home,  "home");
    print_address(addresses.work,  "work");
    print_address(addresses.other, "other");
}

// int main(int argc, char *argv[])  // alternative prototype
int main()
{
    printf("struct basic demo WITH nested structs.\n\n");

    addresses_t addresses;

    SET_STRING(addresses.home.street,   "street 1");
    SET_STRING(addresses.home.city,     "city 1");
    SET_STRING(addresses.home.zipcode,  "12345");
    SET_STRING(addresses.home.state,    "Florida");
    SET_STRING(addresses.home.country,  "USA");

    SET_STRING(addresses.work.street,   "street 2");
    SET_STRING(addresses.work.city,     "city 2");
    SET_STRING(addresses.work.zipcode,  "67890");
    SET_STRING(addresses.work.state,    "Florida");
    SET_STRING(addresses.work.country,  "USA");

    SET_STRING(addresses.other.street,  "street 3");
    SET_STRING(addresses.other.city,    "city 3");
    SET_STRING(addresses.other.zipcode, "54321");
    SET_STRING(addresses.other.state,   "Florida");
    SET_STRING(addresses.other.country, "USA");

    print_addresses(addresses);
    printf("\n%s",__FILE__);

    return 0;
}