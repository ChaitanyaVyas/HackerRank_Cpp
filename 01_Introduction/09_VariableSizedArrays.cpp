#include <iostream>
using namespace std;

int main() {

    int num_of_sequences, num_of_queries;

    scanf("%d %d", &num_of_sequences, &num_of_queries);

    int** sequences = new int*[num_of_sequences];

    for (int i = 0; i < num_of_sequences; i++){
        int num_of_elements_in_sequence;
        scanf("%d", &num_of_elements_in_sequence);
        *(sequences+i) = new int[num_of_elements_in_sequence];;
        for (int j = 0; j < num_of_elements_in_sequence; j++){
            cin>>*(*(sequences+i)+j);
        }
    }

    for (int i = 0; i < num_of_queries; i++){
        int sequence, element;
        scanf("%d %d", &sequence, &element);
        printf("%d\n", *(*(sequences+sequence)+element));
    }

    return 0;
}