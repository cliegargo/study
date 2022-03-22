#include <string>

std::string add(const std::string&a, const std::string& b) {
  std::vector<int> av;

  for(int i = 0; i < a.size(); ++i) {
    av.push_back(a[i] - '0');
  }

  std::vector<int> bv;

  for(int i = 0; i < b.size(); ++i) {
    bv.push_back(b[i] - '0');
  }

  std::vector<int> add; 
  int check = 0;
  int count = 0;
  int carry = 0;

  if(av.size() > bv.size()) {
    while(!(bv.size() == av.size())) {
      bv.insert(bv.begin(), 0);
    }
    
    for(int i = av.size() - 1; i >= 0; --i) {
      check = av[i] + bv[i] + carry;
      if(check > 9) {
        std::cout << check << '\n';
        std::string temp = std::to_string(check);
        carry = temp[0] - '0';
        count = temp[1] - '0';
        add.insert(add.begin(), count);
      } else {
        add.insert(add.begin(), check);
        carry = 0;
      }
    }

    if(carry > 0) {
      add.insert(add.begin(), 1);
    }
  } else if(av.size() < bv.size()) {
    while(!(av.size() == bv.size())) {
      av.insert(av.begin(), 0);
    }

    for(int i = av.size() - 1; i >= 0; --i) {
      check = av[i] + bv[i] + carry;
      if(check > 9) {
        std::string temp = std::to_string(check);
        carry = temp[0] - '0';
        count = temp[1] - '0';
        add.insert(add.begin(), count);
      } else {
        add.insert(add.begin(), check);
        carry = 0;
      }
    }

    if(carry > 0) {
      add.insert(add.begin(), 1);
    }
  } else {
    for(int i = av.size() - 1; i >= 0; --i) {
      check = av[i] + bv[i] + carry;
      if(check > 9) {
        std::string temp = std::to_string(check);
        carry = temp[0] - '0';
        count = temp[1] - '0';
        add.insert(add.begin(), count);
      } else {
        add.insert(add.begin(), check);
        carry = 0;
      }
    }

    if(carry > 0) {
      add.insert(add.begin(), 1);
    }
  }

  std::string sum;

  for(auto &i : add) {
    sum += std::to_string(i);
  }

  return sum;
}
