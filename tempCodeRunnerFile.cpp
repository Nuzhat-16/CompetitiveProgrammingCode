for (int i = 1; i <= n; i++) {
            if (i >= count_0 && (i - count_0) % 2 == 0) {
                flip++;
            } else if (i >= count_1 && (i - count_1) % 2 == 0) {
                flip++;
            }
        }

        cout << flip << endl;
    }

    return 0;
}
