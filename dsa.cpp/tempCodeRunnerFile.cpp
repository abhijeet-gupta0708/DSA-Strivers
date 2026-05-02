int temp=(freq[nums[i]]*i)-sum[nums[i]];
        arr.push_back(temp);
        freq[nums[i]]++;
        sum[nums[i]]+=i;
