
void mergeSort(int* array, int lo, int hi) {
	int mid = (lo + hi) / 2;

	if ( lo < mid ) {
		mergeSort(array, lo, mid);
		mergeSort(array, mid, hi);
	}

	merge(array, lo, mid, hi);
}