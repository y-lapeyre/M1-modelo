#include <iostream>
#include <fstream>
#include <cmath>

// Définition de la fonction dérivée
double f(double t, double y) {
  return 2*t - 1;
}

// Méthode RK1 (Euler)
double rk1(double f(double, double), double t, double y, double h) {
  return y + h * f(t, y);
}

// Méthode RK4
double rk4(double f(double, double), double t, double y, double h) {
  double k1 = f(t, y);
  double k2 = f(t + 0.5*h, y + 0.5*h*k1);
  double k3 = f(t + 0.5*h, y + 0.5*h*k2);
  double k4 = f(t + h, y + h*k3);
  return y + (h/6) * (k1 + 2*k2 + 2*k3 + k4);
}

int main() {
  // Paramètres
  double t0 = 0;
  double y0 = 1;
  double t_end = 10;
  double h = 0.1;

  // Création des fichiers pour stocker les résultats
  std::ofstream fichier_rk1("rk1.dat");
  std::ofstream fichier_rk4("rk4.dat");
  std::ofstream fichier_analytique("analytique.dat");

  // Résolution numérique par RK1
  double t = t0;
  double y = y0;
  while (t <= t_end) {
    fichier_rk1 << t << " " << y << std::endl;
    y = rk1(f, t, y, h);
    t += h;
  }

  // Résolution numérique par RK4
  t = t0;
  y = y0;
  while (t <= t_end) {
    fichier_rk4 << t << " " << y << std::endl;
    y = rk4(f, t, y, h);
    t += h;
  }

  // Solution analytique
  for (int i = 0; i <= 100; i++) {
    double t = i * t_end / 100;
    double y = t*t - t + 1;
    fichier_analytique << t << " " << y << std::endl;
  }

  // Fermeture des fichiers
  fichier_rk1.close();
  fichier_rk4.close();
  fichier_analytique.close();

  // Commande pour tracer les graphiques avec gnuplot
  system("gnuplot -persist -e \"set terminal png; set output 'graph.png'; plot 'rk1.dat' with lines, 'rk4.dat' with lines, 'analytique.dat' with lines\"");

  return 0;
}