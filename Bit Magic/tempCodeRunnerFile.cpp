ll ans=0;
    while(n){
        n=n&(n-1);
        ans++;

    }
    cout<<ans<<endl;