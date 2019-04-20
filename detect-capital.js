    for(var i=0;i<word.length;i++){
        if(word[0] >= 'A' && word[0] <= 'Z'){ 
            if(word[i] < 'A' && word[i] > 'Z'){
                return true;
            }
        }
        else if(word[1] >= 'a' && word[1] <= 'z'){ 
             if(word[i] < 'a' || word[i] > 'z'){
                return true;
            }
        }
        else{
            if(word[i] < 'A' || word[i] > 'Z'){ 
                return true;
            }
        }
    }