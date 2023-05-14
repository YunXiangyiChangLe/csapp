//phase_2
void phase_2(rid){
    rsi= rsp;
    callq read_six_numbers;
    if(*rsp==1){
        goto 400f30;       
    }else{
        callq explode_bomb;
    }
    goto 400f30;   
}