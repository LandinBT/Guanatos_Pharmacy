#ifndef __CONSULTATIONFILE_HPP__
#define __CONSULTATIONFILE_HPP__

#include <fstream>
#include <iostream>
#include <list>
#include <string>

#include "consultation.hpp"

class ConsultationFile {
  std::fstream dataFile;

 public:
  ConsultationFile();

  ~ConsultationFile();

  void addData(const Consultation&);
  void addData(const std::list<Consultation>&);

  std::list<Consultation> toList() const;

  void exportToBackup(const std::string&);
  std::list<Consultation> importFromBackup(const std::string&);

  void clearFile();
};

#endif  // __CONSULTATIONFILE_HPP__