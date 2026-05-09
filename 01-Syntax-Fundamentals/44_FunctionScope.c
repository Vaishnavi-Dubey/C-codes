void func1() {
    {
        // label in scope even though declared later
        goto label_exec;

        label_exec:;
    }

    // label ignores block scope
    goto label_exec;
}

void funct2() {

    // throwserror: as label is in func1() not funct2()
    goto label_exec;
}
