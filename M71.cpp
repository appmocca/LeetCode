class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path) ;
        vector<string> vaildAddress ;
        vaildAddress.reserve(20) ;
        string currentAddress ;
        while (getline(ss, currentAddress, '/')){
            if (currentAddress != "." && currentAddress != ""){     //Excluding roor dic & duplicated slashes
                if (currentAddress != "..")     vaildAddress.push_back(currentAddress) ;    //Push_back the vaild address
                else if (!vaildAddress.empty()) vaildAddress.pop_back() ;                   //If is .. , pop back and ignore last dic
            }
        }
        string ans = "" ;
        if (!vaildAddress.empty()){
            for (string address : vaildAddress) ans.append("/" + address) ;                 //push_back the vaild address + "/"
            return ans ;
        }
        else 
            return "/" ;
    }
};