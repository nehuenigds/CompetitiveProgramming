    for (int i = 1; i <= s.size(); i++)
    {
        if(s[i-1]==s[i]){
            aux++;
            if (i==s.size() && aux > 3)cout << "(" << s[i-1] << aux << ")";
        }
        else{ 
            if (aux > 3)cout << "(" << s[i-1] << aux << ") ";
           
            else for(int j=0;j<aux;j++)cout<<s[i-1];
            aux=1;}
    }