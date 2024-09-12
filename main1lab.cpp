#include <iostream>
#include <string>
#include <cstdlib>
#include <list>

typedef struct  {
    std::string name;
    float length;
    float diameter;
    int mod;
} Pipeline;


typedef struct {
    std::string name;
    int ceh_count;
    int work_count;
    int mod;
} Ks;

Pipeline Add_pipeline() {
    Pipeline pip;
    char line[256];
    std::cin >> pip.name;
    std::cin >> line;
    pip.length = std::atof(line);
    std::cin >> line;
    pip.diameter = std::atof(line);
    std::cin >> pip.mod;
    return pip;
}


// void Dell_pipeline(*pipeline) {
// }


// int Edit_pipeline(*pipeline) {
//     return 1;
// }


// ks Add_ks() {
//     return 1;
// }


int Dell_ks() {
    return 1;
}


int Edit_ks() {
    return 1;
}

int main()
{
    std::list<Pipeline> pipelines;
    std::list<Ks> kss;
    
    char key;
    while(key != '0') {
        std::cout<<R"SONG(Выбирете действие из списка:
1. Добавить трубу 
2. Добавить КС 
3. Просмотр всех объектов 
4. Редактировать трубу 
5. Редактировать КС 
6. Сохранить 
7. Загрузить 
0. Выход)SONG";
        std::cin >> key;
        switch(key){
            case '1': {
                Pipeline pipeline = Add_pipeline();
                pipelines.push_front(pipeline);
                break;
            }
            case '2': {
                break;
            }
            case '3': {
                
                break;
            }
            case '4': {
                break;
            }
            case '5': {
                break;
            }
            case '6': {
                break;
            }
            case '7': {
                break;
            }
        }
    }
    return 0;
}
