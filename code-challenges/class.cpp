#include <vector>
#include <iostream>
using namespace std;

class Student {
    public:
    void input(int nStudents,int *vetScores){
        for(int i = 0; i < nStudents; i++){  
            vetScores[i] = 0;
            for(int j = 0; j < 5; j++){
              int studentScore;
              cin >> studentScore;
              vetScores[i] += studentScore;
            }
        }
    }
        
    int totalScores(int *vetScores, int nStudents){
        int firstStudentScore = vetScores[0];
        int higher = 0;
        for(int i = 1; i < nStudents; i++){
            if(firstStudentScore < vetScores[i]){
                higher++;
            }
        }
        return higher;
    };

};

int main() {

    int nStudents, higher = 0;
    cin >> nStudents;
    
    int *vetScores = new int[nStudents]{};

    Student classroom;
    classroom.input(nStudents,vetScores);
    higher = classroom.totalScores(vetScores, nStudents);
    cout << higher << endl;

    delete[] vetScores; 

    return 0;
}
