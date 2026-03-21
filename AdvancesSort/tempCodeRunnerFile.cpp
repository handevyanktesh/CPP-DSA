    CycleSort
    int i = 0;
    while (i<n)
    {
        int correctIdx = arr[i] - 1;
        if(i == correctIdx ) i++;
        else swap(arr[i],arr[correctIdx]);
    }