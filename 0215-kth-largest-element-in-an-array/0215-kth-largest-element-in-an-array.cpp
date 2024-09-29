static const bool Booster = [](){
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    return true;
}();

std::vector<int> parse_input_data_string(const std::string& s) {
    std::vector<int> data_1D;
    const int N = s.size();
    int accumulator = 0;
    bool is_positive = true;;
    for (int i = 1; i < N; ++i) {
        switch (s[i]) {
        case ',':
            data_1D.push_back((is_positive ? accumulator : -accumulator));
            accumulator = 0;
            is_positive = true;
            break;
        case ']':
            data_1D.push_back((is_positive ? accumulator : -accumulator));
            break;
        case '-':
            is_positive = false;
            break;
        default:
            accumulator = accumulator * 10 + (s[i] - '0');
            break;
        }
    }
    return data_1D;
}

int findKthLargest(std::vector<int>& nums, int k) {
    const int N = nums.size();
    const auto b = nums.begin();
    const auto e = nums.end();
    if (k < N / 2) {
        std::nth_element(b, b + k - 1, e, std::greater<int>());
        return nums[k - 1];
    } else {
        std::nth_element(b, e - k, e);
        return nums[N - k];
    }
}

bool Solve = [](){
    std::ofstream out("user.out");
    for (std::string s; std::getline(std::cin, s);) {
        std::vector<int> nums = parse_input_data_string(s);
        std::getline(std::cin, s);
        const int k = std::stoi(s);
        out << findKthLargest(nums, k) << "\n";
    }
    out.flush();
    exit(0);
    return true;
}();
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    return 0;  
    }
};