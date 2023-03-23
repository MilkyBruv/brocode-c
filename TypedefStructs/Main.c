#include <stdio.h>

struct NormalPerson
{

    char* name;
    int age;

};

typedef struct
{

    char* name;
    int age;

} TypedefPerson;

int main(int argc, char const *argv[])
{

    struct NormalPerson person1 = {"Bob", 21};
    TypedefPerson person2 = {"Jeremia", 107};

    printf("%s\n", person1.name);
    printf("%s", person2.name);

    return 0;
    
}
