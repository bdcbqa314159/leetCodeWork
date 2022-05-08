class Cashier {
public:
    int cus_num = 0;
    int dis;
    map<int,int>pro;
    int N;
    
    Cashier(int n, int discount, vector<int>& products, vector<int>& prices) {
        N = n;
        dis = discount;
        for (int i = 0; i<(int)products.size(); i++){
            pro[products[i]]=prices[i];
        }
    }
    
    double getBill(vector<int> product, vector<int> amount) {
        double total_bill = 0.;
        cus_num++;
        for (int i = 0; i<product.size(); i++)
            total_bill+=pro[product[i]]*amount[i];
        if (cus_num %N ==0) total_bill=((total_bill)*(100-dis))/100.;
        return total_bill;
    }
};

/**
 * Your Cashier object will be instantiated and called as such:
 * Cashier* obj = new Cashier(n, discount, products, prices);
 * double param_1 = obj->getBill(product,amount);
 */