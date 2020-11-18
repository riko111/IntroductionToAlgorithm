function is_prime(n){
    let ret = true;
      for(i=2; i<n; i++) {
          if(n % i == 0) {
              ret = false;
              break;
          }
      }
      return ret;
  }