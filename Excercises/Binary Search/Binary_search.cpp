 #include <iostream>
 using namespace std;
  int main()
  {
      int arr[9] = {1,2,3,4,5,6,7,8,9};
      int high = 9 ;int low = 0;
      int mid = (high + low)/2;
      int element = 6;
      
      while (high>=low)
      {
            mid = (high + low)/2;
            if (arr[mid] == element)
            {
                cout<<"Element found at location: "<<mid<<endl;
                break;
            }
            else if (arr[mid]> element)
            {
                high = mid-1;
            }
            else if (arr[mid]< element)
            {
                low = mid+1;
            }
      }
      return 0;
  }   