#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

typedef struct {
  string name;
  float length;
  float diameter;
  bool inRepair;

  void input() {
        cout << "Enter pipe name: ";
        cin >> name;
        cout << "Enter pipe length: ";
        cin >> length;
        cout << "Enter pipe diameter: ";
        cin >> diameter;
        inRepair = false;
    }

} Pipeline;

typedef struct {
  string name;
  int totalWorkshops;
  int activeWorkshops;
  float efficiency;

  void input() {
        cout << "Enter station name: ";
        cin >> name;
        cout << "Enter total number of workshops: ";
        cin >> totalWorkshops;
        activeWorkshops = 0;
        cout << "Enter efficiency (0-1): ";
        cin >> efficiency;
    }

} CompressorStation;

ostream& operator << (std::ostream &os, const Pipeline &pipeline)
{
    return os << pipeline.getName() << " " << person.getAge();
}

ostream& operator << (std::ostream &os, const CompressorStation &compressorStation)
{
    return os << compressorStation.getName() << " " << person.getAge();
}

Pipeline Add_pipeline() {
  Pipeline pip;
  char line[256];
  cin >> pip.name;
  cin >> line;
  pip.length = atof(line);
  cin >> line;
  pip.diameter = atof(line);
  cin >> pip.mod;
  return pip;
}

// void Dell_pipeline(*pipeline) {
// }

// int Edit_pipeline(*pipeline) {
//     return 1;
// }

// CompressorStation Add_CompressorStation() {
//     return 1;
// }

int Dell_CompressorStation() { return 1; }

int Edit_CompressorStation() { return 1; }

int main() {
  char key;
  while (key != '0') {
    cout << "1. Add Pipe" << endl;
    cout << "2. Add Compressor Station" << endl;
    cout << "3. View All Objects" << endl;
    cout << "4. Edit Pipe (Toggle Repair Status)" << endl;
    cout << "5. Edit Compressor Station (Start/Stop WorCompressorStationhop)" << endl;
    cout << "6. Save Data" << endl;
    cout << "7. Load Data" << endl;
    cout << "0. Exit" << endl;
    cout << "Choose an option: ";

    cin >> key;

    switch (key) {
    case '1': {
      Pipeline pipeline = Add_pipeline();
      // pipelines.push_front(pipeline);
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
    default:
      cout << "Invalid option! Try again." << endl;
    }
  }
  return 0;
}