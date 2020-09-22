//
// Created by iTuring on 2020/9/22.
//

void solution1() {
    int i = 0;
    int j = 0;
    for (i = 1; i <= 9; ++i) {
        for (j = 1; j <= i; j++) {
            printf("%d*%d=%d   ", j, i, i*j);
        }
        printf("\n");
    }
}

int main(){
    solution1();
    return 0;
}
