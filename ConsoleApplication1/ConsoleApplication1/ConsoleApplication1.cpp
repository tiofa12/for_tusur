#include <iostream>
#include <stdio.h>
#include <windows.h>

typedef struct
{
    char name[LEN_S];     /// Фамилия      
    char number[LEN_P];   /// Номер телефона     
    struct record* next;  /// Адрес след. записи 
} record;
record* book[30] = { NULL };



/** Запрашивает ввод фамилии из stdin.  Принимает только буквы русского      алфавита. Все буквы приводятся к верхнему регистру.      Возвращает name. */
char* get_name(char* name)
{

}

/** Запрашивает ввод номера телефона из stdin.      Принимаются только цифры. Возвращает number. */
char* get_phone(char* number)
{

}

/** Создаёт новую запись и помещает её в телефонную книгу.      Вызывает insert_rec().      book - массив указателей на начала страниц. 
Возвращает  1, если запись создана                                    0  в противном случае. */
int add_record(record** book)
{

}

/** Размещает запись new_rec  на странице, соответствующей                     первой букве фамилии. */
void insert_rec(record** book, record* new_rec)
{

}

/** Ищет запись по фамилии name.         Возвращает  указатель на запись, содержащую введённую фамилию.  NULL, если фамилии нет в книге. */
record* search_record(record** book, char* name)
{

}

/** Удаляет запись, связанную с фамилией name.         Возвращает 0, если запись не существует. */
int delete_record(record** book, char* name)
{

}

/** Изменяет запись. Вызывает get_name() и get_phone(), insert_rec(), search_record(), delete_record().        Возвращает 0, если запись не существует. */
int update_record(record** book)
{

}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
}

