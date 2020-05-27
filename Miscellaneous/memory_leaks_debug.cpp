int main()
{
    int *pInt = new int[10];

    return 0; 
}

// valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file=/home/workspace/valgrind-out.txt /home/workspace/a.out
//Let us look at the call parameters one by one:

    // --leak-check : Controls the search for memory leaks when the client program finishes. If set to summary, it says how many leaks occurred. If set to full, each individual leak will be shown in detail.

    // --show-leak-kinds : controls the set of leak kinds to show when —leak-check=full is specified. Options are definite, indirect, possible reachable, all and none

    // --track-origins : can be used to see where uninitialised values come from.
