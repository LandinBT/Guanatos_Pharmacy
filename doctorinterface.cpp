#include "doctorinterface.hpp"
using namespace std;

void DoctorInterface::addDoctor() {

    }

void DoctorInterface::deleteDoctor() {

    }

void DoctorInterface::modifyDoctor() {

    }

void DoctorInterface::showList() {

    }

void DoctorInterface::deleteAll() {

    }

void DoctorInterface::importData() {

    }

void DoctorInterface::exportData() {

    }

DoctorInterface::DoctorInterface() {
    UserInterfaceUtils uiUtils;
    bool repeat = true;
    int opc;

    string title ="*** M É D I C O S ***";
    vector<string> options = {"Nueva médico", "Eliminar médico",
                              "Modificar médico","Mostrar médicos",
                              "Eliminar todo",
                              "Importar del archivo de respaldo",
                              "Exportar a un archivo de respaldo", "Regresar"
                             };
    int numOpt=8;

    do {
        system("title FARMACIA GUANATOS: MÉDICO");
        opc = uiUtils.mainMenu(title, options, numOpt, TXT_VIOLET);

        switch(opc) {
            case 1:
                addDoctor();
                break;

            case 2:
                deleteDoctor();
                break;

            case 3:
                modifyDoctor();
                break;

            case 4:
                showList();
                break;

            case 5:
                deleteAll();
                break;

            case 6:
                importData();
                break;

            case 7:
                exportData();
                break;

            case 8:
                repeat=false;
                break;
            }

        }while(repeat);
    }
