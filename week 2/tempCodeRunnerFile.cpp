 else {
                int dev_left = david - *(it - 1);
                int dev_right = *it - david;
                min_dis = min(dev_left, dev_right);
            }