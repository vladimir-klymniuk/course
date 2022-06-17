int converTimeToSeconds(int hour, int minute, int second) {
    return (
        (hour * 60 * 60 * 60) + (minute * 60) + second
    );
}