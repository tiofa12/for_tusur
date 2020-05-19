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
    FILE* fp; /// Указатель на поток данных
    char name[20], number[12];
    int i = 0;
    printf("Открытие файла : ");
    fp = fopen("database", "w");
    //get_name();
    //get_phone();
    if (fp == NULL)
    { /// Проверка открытия файла
        printf("Ошибка\n");
        return -1;
    }
    else
    printf("Выполнено\n");
    printf("Запись в файл : ");
    //fscanf(stdin, "%s%d", &record[i].name, &record[i].number);
    fscanf(stdin, "%*c"); /* удаление возврата каретки из потока ввода */
    /* запись в файл */
    //fprintf(fp, "%s %d \n", &book[i].name, record[i].number);
    fclose(fp);
  /**  FILE* myfile; /// Указатель на поток данных
    int c = 255; /// Код символа ‘r’
    int ec = -1; /// Для возвращаемого fputc значения.
    printf("Открытие файла : ");
    myfile = fopen("database", "w");
    if (myfile == NULL)
    { /// Проверка открытия файла
        printf("Ошибка\n");
        return -1;
    }
    else
        printf("Выполнено\n");
    printf("Запись в файл : ");
    ec = putc(c, myfile);
    if (ec == EOF) /// Проверка записи
        printf("ошибка записи\n");
    else
        printf("записан символ '%c'\n", ec);
    printf("Закрытие файла : ");
    if (fclose(myfile) == EOF)
        printf("Ошибка\n");
    else
        printf("Выполнено\n");
    return 0;*/

}

/** Размещает запись new_rec на странице, соответствующей первой букве фамилии. */
void insert_rec(record** book, record* new_rec)
{
    return;
}




//НАСТАСИЯ




/** Ищет запись по фамилии name. Возвращает  указатель на запись, содержащую введённую фамилию.  NULL, если фамилии нет в книге. */
record* search_record(record** book, char* name)
{
    FILE* myfile; /// Указатель на поток данных
    int c; /// Считанный байт
    printf("Открытие файла : ");
    /** Открытие файла в режиме доступа «только чтение»
     Файл ищется в текущей папке*/
    myfile = fopen("database", "r");
    if (myfile == NULL)
    { /// Проверка открытия файла
        printf("Ошибка\n");
        //return -1;
    }
    else
        printf("Выполнено\n");
    printf("Коды считанных символов : \n");
    while (1)
    { /// Чтение байтов в бесконечном цикле
        c = getc(myfile); /// Чтение одного байта из файла
        if (c == EOF)
        { /// Закончился файл или это ошибка чтения?
            if (feof(myfile) != 0)
            { /// Если файл закончился
                printf("\nДостигнут конец файла\n");
                break; /// Выход из бесконечного цикла
            }
            else
            { /// Если при чтении произошла ошибка
                printf("\nОшибка чтения из файла\n");
                break; /// Выход из бесконечного цикла
            }
        }
        /// Файл не закончился и не было ошибки чтения
        printf(" % d ", c);
    }
    printf("Закрытие файла : ");
    if (fclose(myfile) == EOF)
        printf("Ошибка\n");
    else
        printf("Выполнено\n");
    return 0;

   // int n;
   // for (int i = 0; i < n; i++)
   // {
        //if (strcmp(book[i].name, name) == 0) return ?;
       //else if (strcmp(book[i].name,name)!= 0) return NULL;
   // } 
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
    char ch;
    printf("1. Добавление записи\n");
    printf("2. Поиск по фамилии\n");
    printf("3. Изменение фамилии в существующей записи\n");
    printf("4. Изменение телефона в существующей записи\n");
    printf("5. Удаление записи\n");
    ch = getchar(); /* чтение клавиатуры */
<<<<<<< HEAD

    switch (ch)
    {
=======
    switch (ch) {
>>>>>>> 1670b323b0ab3d686bd8ac663cf71fce560f32b5
    case '1':
        add_record(book); break;
    case '2':
        search_record(book, 0); break;
    case '3':
        update_record(book); break;
    case '4':
        update_record(book); break;
    case '5':
        delete_record(book, 0); break;
    default:
        printf("No option selected");
    }
}

