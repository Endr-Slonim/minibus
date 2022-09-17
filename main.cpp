#include <iostream>

int main() {
	int entered ; //кол-во вошедших
	int gone ;  //кол-во ушедших
	int earned ;  //всего заработали
  int passengers ;  //всего пасажиров
  earned = 0 ;
  passengers = 0 ;
  
	std::cout << "Начало маршрута  «Улица программистов». В салоне пассажиров: " << passengers  <<"\n";
  std::cout << "Введите колличество вошедших \n";
  std::cin >> entered;
  std::cout << "Введите колличество вышедших \n";
  std::cin >> gone;
  earned += entered * 20;
  passengers += entered;
  passengers -= gone;
  std::cout << "Отправляемся с остановки «Улица программистов». В салоне пассажиров: " << passengers <<"\n";
  std::cout << "-----------Едем--------- \n"; 
  
  std::cout << "Прибываем на остановку «Проспект алгоритмов». В салоне пассажиров: " << passengers  <<"\n";
  std::cout << "Введите колличество вошедших \n";
  std::cin >> entered;
  std::cout << "Введите колличество вышедших \n";
  std::cin >> gone;
  earned += entered * 20;
  passengers += entered;
  passengers -= gone;
  std::cout << "Отправляемся с остановки «Проспект алгоритмов». В салоне пассажиров: " << passengers <<"\n";
  std::cout << "-----------Едем--------- \n"; 

  std::cout << "Прибываем на остановку «Улица Тестировщиков ». В салоне пассажиров: " << passengers  <<"\n";
  std::cout << "Введите колличество вошедших \n";
  std::cin >> entered;
  std::cout << "Введите колличество вышедших \n";
  std::cin >> gone;
  earned += entered * 20;
  passengers += entered;
  passengers -= gone;
  std::cout << "Отправляемся с остановки «Улица Тестировщиков». В салоне пассажиров: " << passengers <<"\n";
  std::cout << "-----------Едем--------- \n"; 

  std::cout << "Прибываем на конечную остановку «Площадь Пользователей ». В салоне пассажиров: " << passengers  <<"\n";

    std::cout << "======= Бухгалтерска Справка ======\n";
  
  std::cout << "Всего заработали: " << earned << " рублей" << "\n";
  std::cout << "Зарплата водителя: " << earned / 4 << " рублей" <<"\n";
  std::cout << "Расходы на топливо: " << earned / 5 << " рублей" <<"\n";
  std::cout << "Налоги: " << earned / 5 << " рублей" <<"\n";
  std::cout << "Расходы на ремонт машины: " << earned / 5 << " рублей" <<"\n";
  std::cout << "Итого доход: " << earned / 100 * 15 << " рублей" <<"\n";

}
