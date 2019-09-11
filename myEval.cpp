
double eval(int* vec){
    double value = 0.0;
    int bitSum = 0;

    for(int i=0;i<50;i++){
        value += vec[2*i]^vec[2*i + 1];
    }

    for(int i=0;i<100;i+=7){
        bitSum += vec[i];
    }
    if(bitSum==3){
        value += 10;
    }

    bitSum = 0;
    for(int i=0;i<100;i+=3){
        bitSum+= vec[i];
    }
    if(bitSum==20){
        value += 10;
    }
    if(vec[0]==1 && vec[13]==0 && vec[27]==1 && vec[43]==0 && vec[70]==1){
        value += 30;
    }

    return value;
}
