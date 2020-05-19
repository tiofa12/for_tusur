#include <iostream>
#include <stdio.h>
#include <windows.h>
#define LEN_S 20
#define LEN_P 12


typedef struct
{
    char name[LEN_S];     /// Фамилия      
    char number[LEN_P];   /// Номер телефона     
    struct record1* next;  /// Адрес след. записи 
} record;
record* book[30] = { NULL };



/** Запрашивает ввод фамилии из stdin. Принимает только буквы русского алфавита. Все буквы приводятся к верхнему регистру. Возвращает name. */
char* get_name(char* name)
{
    return 0;
}

/** Запрашивает ввод номера телефона из stdin. Принимаются только цифры. Возвращает number. */
char* get_phone(char* number)
{
    return 0;
}

/** Создаёт новую запись и помещает её в телефонную книгу. Вызывает insert_rec().book - массив указателей на начала страниц. 
Возвращает  1, если запись создана 0  в противном случае. */
int add_record(record** book)
{
    return 0;
}

/** Размещает запись new_rec  на странице, соответствующей первой букве фамилии. */
void insert_rec(record** book, record* new_rec)
{
    return;
}




//НАСТАСИЯ




/** Ищет запись по фамилии name. Возвращает  указатель на запись, содержащую введённую фамилию.  NULL, если фамилии нет в книге. */
record* search_record(record** book, char* name)
{
    int n;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(book[i].name, name) == 0) return ?;
        else if (strcmp(book[i].name,name)!= 0) return NULL;
    } 
}

/** Удаляет запись, связанную с фамилией name. Возвращает 0, если запись не существует. */
int delete_record(record** book, char* name)
{
    return 0;
}

/** Изменяет запись. Вызывает get_name() и get_phone(), insert_rec(), search_record(), delete_record(). Возвращает 0, если запись не существует. */
int update_record(record** book)
{
    return 0;
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);   
    FILE* fp;
    record **book;
    record *new_rec;
    fp = fopen("database", "w");
    if (fp != NULL) //проверка открытия файла
        printf("Файл для считывания открылся!\n");
    else printf("Файл открыть не удалось");
    
    fclose(fp); //закрыли файл
    system("pause");
}

