#ifndef MUNIVEHICLE_H
#define MUNIVEHICLE_H

class MuniVehicle {
  protected:
    int totalFares;
  public:
    MuniVehicle();
    
    int getTotalFares()
    { return totalFares; }

    virtual void paidFare()
    { totalFares += 2; }
};  

class CableCar: public MuniVehicle{
  protected:
  public:
    CableCar();

    void paidFare()
      {totalFares += 7;}
};


#endif