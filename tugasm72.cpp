#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> box_office_films = {"Black Panther", "Bohemian Rhapsody", "A Star Is Born", "Joker", "1917", "Once Upon a Time in Hollywood", "Ford v Ferrari", "The Irishman", "Little Women", "Jojo Rabbit", "Marriage Story", "Parasite", "Tenet", "Mank", "The Trial of the Chicago 7"};
    string target_film;
    cout << "Masukkan judul film yang ingin dicari: ";
    getline(cin, target_film);
    int index = -1;
    for (int i = 0; i < box_office_films.size(); i++) {
        if (box_office_films[i] == target_film) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << "Maaf, judul film tidak ditemukan." << endl;
    } else {
        cout << "Judul film ditemukan pada indeks ke-" << index << "." << endl;
    }
    return 0;
}