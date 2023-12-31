#ifndef DOCTORINTERFACE_HPP_INCLUDED
#define DOCTORINTERFACE_HPP_INCLUDED

#include<iostream>
#include<string>

#include "userinterfaceutils.hpp"
#include "doctorfile.hpp"
#include "doctor.hpp"

class DoctorInterface {
        void addDoctor();
        void deleteDoctor();
        void modifyDoctor();
        void showList();
        void deleteAll();

        void importData();
        void exportData();

    public:
        DoctorInterface();
    };

#endif // DOCTORINTERFACE_HPP_INCLUDED
